
from building import *
import rtconfig

cwd     = GetCurrentDir()
src     = Split('''
filex/common/src/fx_directory_attributes_read.c
filex/common/src/fx_directory_attributes_set.c
filex/common/src/fx_directory_create.c
filex/common/src/fx_directory_default_get.c
filex/common/src/fx_directory_default_get_copy.c
filex/common/src/fx_directory_default_set.c
filex/common/src/fx_directory_delete.c
filex/common/src/fx_directory_entry_read.c
filex/common/src/fx_directory_entry_write.c
filex/common/src/fx_directory_exFAT_entry_read.c
filex/common/src/fx_directory_exFAT_entry_write.c
filex/common/src/fx_directory_exFAT_free_search.c
filex/common/src/fx_directory_exFAT_unicode_entry_write.c
filex/common/src/fx_directory_first_entry_find.c
filex/common/src/fx_directory_first_full_entry_find.c
filex/common/src/fx_directory_free_search.c
filex/common/src/fx_directory_information_get.c
filex/common/src/fx_directory_local_path_clear.c
filex/common/src/fx_directory_local_path_get.c
filex/common/src/fx_directory_local_path_get_copy.c
filex/common/src/fx_directory_local_path_restore.c
filex/common/src/fx_directory_local_path_set.c
filex/common/src/fx_directory_long_name_get.c
filex/common/src/fx_directory_long_name_get_extended.c
filex/common/src/fx_directory_name_extract.c
filex/common/src/fx_directory_name_test.c
filex/common/src/fx_directory_next_entry_find.c
filex/common/src/fx_directory_next_full_entry_find.c
filex/common/src/fx_directory_rename.c
filex/common/src/fx_directory_search.c
filex/common/src/fx_directory_short_name_get.c
filex/common/src/fx_directory_short_name_get_extended.c
filex/common/src/fx_fault_tolerant_add_FAT_log.c
filex/common/src/fx_fault_tolerant_add_bitmap_log.c
filex/common/src/fx_fault_tolerant_add_checksum_log.c
filex/common/src/fx_fault_tolerant_add_dir_log.c
filex/common/src/fx_fault_tolerant_apply_logs.c
filex/common/src/fx_fault_tolerant_calculate_checksum.c
filex/common/src/fx_fault_tolerant_cleanup_FAT_chain.c
filex/common/src/fx_fault_tolerant_create_log_file.c
filex/common/src/fx_fault_tolerant_enable.c
filex/common/src/fx_fault_tolerant_read_FAT.c
filex/common/src/fx_fault_tolerant_read_directory_sector.c
filex/common/src/fx_fault_tolerant_read_log_file.c
filex/common/src/fx_fault_tolerant_recover.c
filex/common/src/fx_fault_tolerant_reset_log_file.c
filex/common/src/fx_fault_tolerant_set_FAT_chain.c
filex/common/src/fx_fault_tolerant_transaction_end.c
filex/common/src/fx_fault_tolerant_transaction_fail.c
filex/common/src/fx_fault_tolerant_transaction_start.c
filex/common/src/fx_fault_tolerant_write_log_file.c
filex/common/src/fx_file_allocate.c
filex/common/src/fx_file_attributes_read.c
filex/common/src/fx_file_attributes_set.c
filex/common/src/fx_file_best_effort_allocate.c
filex/common/src/fx_file_close.c
filex/common/src/fx_file_create.c
filex/common/src/fx_file_date_time_set.c
filex/common/src/fx_file_delete.c
filex/common/src/fx_file_extended_allocate.c
filex/common/src/fx_file_extended_best_effort_allocate.c
filex/common/src/fx_file_extended_relative_seek.c
filex/common/src/fx_file_extended_seek.c
filex/common/src/fx_file_extended_truncate.c
filex/common/src/fx_file_extended_truncate_release.c
filex/common/src/fx_file_open.c
filex/common/src/fx_file_read.c
filex/common/src/fx_file_relative_seek.c
filex/common/src/fx_file_rename.c
filex/common/src/fx_file_seek.c
filex/common/src/fx_file_truncate.c
filex/common/src/fx_file_truncate_release.c
filex/common/src/fx_file_write.c
filex/common/src/fx_file_write_notify_set.c
filex/common/src/fx_media_abort.c
filex/common/src/fx_media_boot_info_extract.c
filex/common/src/fx_media_cache_invalidate.c
filex/common/src/fx_media_check.c
filex/common/src/fx_media_check_FAT_chain_check.c
filex/common/src/fx_media_check_lost_cluster_check.c
filex/common/src/fx_media_close.c
filex/common/src/fx_media_close_notify_set.c
filex/common/src/fx_media_exFAT_format.c
filex/common/src/fx_media_extended_space_available.c
filex/common/src/fx_media_flush.c
filex/common/src/fx_media_format.c
filex/common/src/fx_media_format_oem_name_set.c
filex/common/src/fx_media_format_type_set.c
filex/common/src/fx_media_format_volume_id_set.c
filex/common/src/fx_media_open.c
filex/common/src/fx_media_open_notify_set.c
filex/common/src/fx_media_read.c
filex/common/src/fx_media_space_available.c
filex/common/src/fx_media_volume_get.c
filex/common/src/fx_media_volume_get_extended.c
filex/common/src/fx_media_volume_set.c
filex/common/src/fx_media_write.c
filex/common/src/fx_partition_offset_calculate.c
filex/common/src/fx_ram_driver.c
filex/common/src/fx_system_date_get.c
filex/common/src/fx_system_date_set.c
filex/common/src/fx_system_initialize.c
filex/common/src/fx_system_time_get.c
filex/common/src/fx_system_time_set.c
filex/common/src/fx_system_timer_entry.c
filex/common/src/fx_trace_event_insert.c
filex/common/src/fx_trace_event_update.c
filex/common/src/fx_trace_object_register.c
filex/common/src/fx_trace_object_unregister.c
filex/common/src/fx_unicode_directory_create.c
filex/common/src/fx_unicode_directory_entry_change.c
filex/common/src/fx_unicode_directory_entry_read.c
filex/common/src/fx_unicode_directory_rename.c
filex/common/src/fx_unicode_directory_search.c
filex/common/src/fx_unicode_file_create.c
filex/common/src/fx_unicode_file_rename.c
filex/common/src/fx_unicode_length_get.c
filex/common/src/fx_unicode_length_get_extended.c
filex/common/src/fx_unicode_name_get.c
filex/common/src/fx_unicode_name_get_extended.c
filex/common/src/fx_unicode_short_name_get.c
filex/common/src/fx_unicode_short_name_get_extended.c
filex/common/src/fx_utility_16_unsigned_read.c
filex/common/src/fx_utility_16_unsigned_write.c
filex/common/src/fx_utility_32_unsigned_read.c
filex/common/src/fx_utility_32_unsigned_write.c
filex/common/src/fx_utility_64_unsigned_read.c
filex/common/src/fx_utility_64_unsigned_write.c
filex/common/src/fx_utility_FAT_entry_read.c
filex/common/src/fx_utility_FAT_entry_write.c
filex/common/src/fx_utility_FAT_flush.c
filex/common/src/fx_utility_FAT_map_flush.c
filex/common/src/fx_utility_FAT_sector_get.c
filex/common/src/fx_utility_absolute_path_get.c
filex/common/src/fx_utility_exFAT_allocate_new_cluster.c
filex/common/src/fx_utility_exFAT_bitmap_cache_prepare.c
filex/common/src/fx_utility_exFAT_bitmap_cache_update.c
filex/common/src/fx_utility_exFAT_bitmap_flush.c
filex/common/src/fx_utility_exFAT_bitmap_free_cluster_find.c
filex/common/src/fx_utility_exFAT_bitmap_initialize.c
filex/common/src/fx_utility_exFAT_bitmap_start_sector_get.c
filex/common/src/fx_utility_exFAT_cluster_free.c
filex/common/src/fx_utility_exFAT_cluster_state_get.c
filex/common/src/fx_utility_exFAT_cluster_state_set.c
filex/common/src/fx_utility_exFAT_geometry_check.c
filex/common/src/fx_utility_exFAT_name_hash_get.c
filex/common/src/fx_utility_exFAT_size_calculate.c
filex/common/src/fx_utility_exFAT_system_area_checksum_verify.c
filex/common/src/fx_utility_exFAT_system_area_checksum_write.c
filex/common/src/fx_utility_exFAT_system_area_format.c
filex/common/src/fx_utility_exFAT_system_sector_write.c
filex/common/src/fx_utility_exFAT_unicode_name_hash_get.c
filex/common/src/fx_utility_exFAT_upcase_table.c
filex/common/src/fx_utility_logical_sector_cache_entry_read.c
filex/common/src/fx_utility_logical_sector_flush.c
filex/common/src/fx_utility_logical_sector_read.c
filex/common/src/fx_utility_logical_sector_write.c
filex/common/src/fx_utility_memory_copy.c
filex/common/src/fx_utility_memory_set.c
filex/common/src/fx_utility_string_length_get.c
filex/common/src/fx_utility_token_length_get.c
filex/common/src/fxe_directory_attributes_read.c
filex/common/src/fxe_directory_attributes_set.c
filex/common/src/fxe_directory_create.c
filex/common/src/fxe_directory_default_get.c
filex/common/src/fxe_directory_default_get_copy.c
filex/common/src/fxe_directory_default_set.c
filex/common/src/fxe_directory_delete.c
filex/common/src/fxe_directory_first_entry_find.c
filex/common/src/fxe_directory_first_full_entry_find.c
filex/common/src/fxe_directory_information_get.c
filex/common/src/fxe_directory_local_path_clear.c
filex/common/src/fxe_directory_local_path_get.c
filex/common/src/fxe_directory_local_path_get_copy.c
filex/common/src/fxe_directory_local_path_restore.c
filex/common/src/fxe_directory_local_path_set.c
filex/common/src/fxe_directory_long_name_get.c
filex/common/src/fxe_directory_long_name_get_extended.c
filex/common/src/fxe_directory_name_test.c
filex/common/src/fxe_directory_next_entry_find.c
filex/common/src/fxe_directory_next_full_entry_find.c
filex/common/src/fxe_directory_rename.c
filex/common/src/fxe_directory_short_name_get.c
filex/common/src/fxe_directory_short_name_get_extended.c
filex/common/src/fxe_fault_tolerant_enable.c
filex/common/src/fxe_file_allocate.c
filex/common/src/fxe_file_attributes_read.c
filex/common/src/fxe_file_attributes_set.c
filex/common/src/fxe_file_best_effort_allocate.c
filex/common/src/fxe_file_close.c
filex/common/src/fxe_file_create.c
filex/common/src/fxe_file_date_time_set.c
filex/common/src/fxe_file_delete.c
filex/common/src/fxe_file_extended_allocate.c
filex/common/src/fxe_file_extended_best_effort_allocate.c
filex/common/src/fxe_file_extended_relative_seek.c
filex/common/src/fxe_file_extended_seek.c
filex/common/src/fxe_file_extended_truncate.c
filex/common/src/fxe_file_extended_truncate_release.c
filex/common/src/fxe_file_open.c
filex/common/src/fxe_file_read.c
filex/common/src/fxe_file_relative_seek.c
filex/common/src/fxe_file_rename.c
filex/common/src/fxe_file_seek.c
filex/common/src/fxe_file_truncate.c
filex/common/src/fxe_file_truncate_release.c
filex/common/src/fxe_file_write.c
filex/common/src/fxe_file_write_notify_set.c
filex/common/src/fxe_media_abort.c
filex/common/src/fxe_media_cache_invalidate.c
filex/common/src/fxe_media_check.c
filex/common/src/fxe_media_close.c
filex/common/src/fxe_media_close_notify_set.c
filex/common/src/fxe_media_exFAT_format.c
filex/common/src/fxe_media_extended_space_available.c
filex/common/src/fxe_media_flush.c
filex/common/src/fxe_media_format.c
filex/common/src/fxe_media_open.c
filex/common/src/fxe_media_open_notify_set.c
filex/common/src/fxe_media_read.c
filex/common/src/fxe_media_space_available.c
filex/common/src/fxe_media_volume_get.c
filex/common/src/fxe_media_volume_get_extended.c
filex/common/src/fxe_media_volume_set.c
filex/common/src/fxe_media_write.c
filex/common/src/fxe_system_date_get.c
filex/common/src/fxe_system_date_set.c
filex/common/src/fxe_system_time_get.c
filex/common/src/fxe_system_time_set.c
filex/common/src/fxe_unicode_directory_create.c
filex/common/src/fxe_unicode_directory_rename.c
filex/common/src/fxe_unicode_file_create.c
filex/common/src/fxe_unicode_file_rename.c
filex/common/src/fxe_unicode_name_get.c
filex/common/src/fxe_unicode_name_get_extended.c
filex/common/src/fxe_unicode_short_name_get.c
filex/common/src/fxe_unicode_short_name_get_extended.c
dfs_filex.c
rtthread_driver.c
''')
CPPPATH = [cwd, cwd + '/filex/common/inc']
LOCAL_CCFLAGS = ''

CPPDEFINES = ['FX_INCLUDE_USER_DEFINE_FILE']

group = DefineGroup('filex', src, depend = ['PKG_USING_FILEX'], CPPDEFINES = CPPDEFINES, CPPPATH = CPPPATH, LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
