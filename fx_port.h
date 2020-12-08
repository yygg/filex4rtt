/**************************************************************************/
/*                                                                        */
/*       Copyright (c) Microsoft Corporation. All rights reserved.        */
/*                                                                        */
/*       This software is licensed under the Microsoft Software License   */
/*       Terms for Microsoft Azure RTOS. Full text of the license can be  */
/*       found in the LICENSE file at https://aka.ms/AzureRTOS_EULA       */
/*       and in the root directory of this software.                      */
/*                                                                        */
/**************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */ 
/** FileX Component                                                       */
/**                                                                       */
/**   Port Specific                                                       */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/ 
/*                                                                        */ 
/*  PORT SPECIFIC C INFORMATION                            RELEASE        */ 
/*                                                                        */ 
/*    fx_port.h                                         Cortex-M0/GNU     */ 
/*                                                           6.1          */
/*                                                                        */
/*  AUTHOR                                                                */
/*                                                                        */
/*    William E. Lamie, Microsoft Corporation                             */
/*                                                                        */
/*  DESCRIPTION                                                           */ 
/*                                                                        */ 
/*    This file contains data type definitions that make the FileX FAT    */ 
/*    compatible file system function identically on a variety of         */ 
/*    different processor architectures.  For example, the byte offset of */ 
/*    various entries in the boot record, and directory entries are       */ 
/*    defined in this file.                                               */ 
/*                                                                        */ 
/*  RELEASE HISTORY                                                       */ 
/*                                                                        */ 
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  05-19-2020     William E. Lamie         Initial Version 6.0           */
/*  09-30-2020     William E. Lamie         Modified comment(s),          */
/*                                            resulting in version 6.1    */
/*                                                                        */
/**************************************************************************/

#ifndef FX_PORT_H
#define FX_PORT_H


/* Determine if the optional FileX user define file should be used.  */

#ifdef FX_INCLUDE_USER_DEFINE_FILE


/* Yes, include the user defines in fx_user.h. The defines in this file may 
   alternately be defined on the command line.  */

#include "fx_user.h"
#endif


/* Define ULONG64 typedef, if not already defined.  */

#ifndef ULONG64_DEFINED
#define ULONG64_DEFINED
typedef unsigned long long  ULONG64;
#endif


/* Define FileX internal protection macros.  If FX_SINGLE_THREAD is defined,
   these protection macros are effectively disabled.  However, for multi-thread
   uses, the macros are setup to utilize a ThreadX mutex for multiple thread 
   access control into an open media.  */

#ifdef FX_SINGLE_THREAD
#define FX_PROTECT                   
#define FX_UNPROTECT
#else
#define FX_PROTECT                      
#define FX_UNPROTECT                  
#endif


/* Define interrupt lockout constructs to protect the system date/time from being updated
   while they are being read.  */

#define FX_INT_SAVE_AREA                
#define FX_DISABLE_INTS                 
#define FX_RESTORE_INTS                 


/* Define the error checking logic to determine if there is a caller error in the FileX API.  
   The default definitions assume ThreadX is being used.  This code can be completely turned 
   off by just defining these macros to white space.  */

#ifndef TX_TIMER_PROCESS_IN_ISR

#define FX_CALLER_CHECKING_EXTERNS      

#define FX_CALLER_CHECKING_CODE         

#else
#define FX_CALLER_CHECKING_EXTERNS      

#define FX_CALLER_CHECKING_CODE         
#endif


/* Define the update rate of the system timer.  These values may also be defined at the command
   line when compiling the fx_system_initialize.c module in the FileX library build.  Alternatively, they can
   be modified in this file or fx_user.h. Note: the update rate must be an even number of seconds greater
   than or equal to 2, which is the minimal update rate for FAT time. */

/* Define the number of seconds the timer parameters are updated in FileX.  The default
   value is 10 seconds.  This value can be overwritten externally. */

#ifndef FX_UPDATE_RATE_IN_SECONDS
#define FX_UPDATE_RATE_IN_SECONDS 10
#endif


/* Defines the number of ThreadX timer ticks required to achieve the update rate specified by 
   FX_UPDATE_RATE_IN_SECONDS defined previously. By default, the ThreadX timer tick is 10ms, 
   so the default value for this constant is 1000.  If TX_TIMER_TICKS_PER_SECOND is defined,
   this value is derived from TX_TIMER_TICKS_PER_SECOND.  */
 
#ifndef FX_UPDATE_RATE_IN_TICKS
#ifdef TX_TIMER_TICKS_PER_SECOND
#define FX_UPDATE_RATE_IN_TICKS         
#else
#define FX_UPDATE_RATE_IN_TICKS         1000 
#endif
#endif


/* Define the version ID of FileX.  This may be utilized by the application.  */

#ifdef FX_SYSTEM_INIT
CHAR                            _fx_version_id[] = 
                                    "Copyright (c) Microsoft Corporation. All rights reserved.  *  FileX Cortex-M0/GNU Version 6.1 *";
#else
extern  CHAR                    _fx_version_id[];
#endif

#endif
