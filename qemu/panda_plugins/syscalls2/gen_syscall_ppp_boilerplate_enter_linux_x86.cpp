#if defined(TARGET_I386) && !defined(TARGET_X86_64)
PPP_CB_BOILERPLATE(on_sys_fallocate_enter)
PPP_CB_BOILERPLATE(on_sys_gettid_enter)
PPP_CB_BOILERPLATE(on_sys_getsid_enter)
PPP_CB_BOILERPLATE(on_sys_set_tid_address_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups_enter)
PPP_CB_BOILERPLATE(on_sys_pause_enter)
PPP_CB_BOILERPLATE(on_sys_fchdir_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_getuid_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid_enter)
PPP_CB_BOILERPLATE(on_sys_pwritev_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setparam_enter)
PPP_CB_BOILERPLATE(on_sys_pselect6_enter)
PPP_CB_BOILERPLATE(on_sys_fchown_enter)
PPP_CB_BOILERPLATE(on_sys_munlockall_enter)
PPP_CB_BOILERPLATE(on_sys_vmsplice_enter)
PPP_CB_BOILERPLATE(on_sys_old_select_enter)
PPP_CB_BOILERPLATE(on_sys_io_destroy_enter)
PPP_CB_BOILERPLATE(on_sys_msync_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create1_enter)
PPP_CB_BOILERPLATE(on_sys_utimes_enter)
PPP_CB_BOILERPLATE(on_sys_mincore_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setscheduler_enter)
PPP_CB_BOILERPLATE(on_sys_exit_group_enter)
PPP_CB_BOILERPLATE(on_sys_fstat_enter)
PPP_CB_BOILERPLATE(on_sys_getrusage_enter)
PPP_CB_BOILERPLATE(on_sys_futimesat_enter)
PPP_CB_BOILERPLATE(on_sys_chdir_enter)
PPP_CB_BOILERPLATE(on_sys_kill_enter)
PPP_CB_BOILERPLATE(on_sys_setgid16_enter)
PPP_CB_BOILERPLATE(on_sys_waitid_enter)
PPP_CB_BOILERPLATE(on_sys_tee_enter)
PPP_CB_BOILERPLATE(on_sys_fdatasync_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_get_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile64_enter)
PPP_CB_BOILERPLATE(on_sys_writev_enter)
PPP_CB_BOILERPLATE(on_sys_setrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_setregid_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_rm_watch_enter)
PPP_CB_BOILERPLATE(on_sys_poll_enter)
PPP_CB_BOILERPLATE(on_sys_getpgrp_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid_enter)
PPP_CB_BOILERPLATE(on_sys_unlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_stime_enter)
PPP_CB_BOILERPLATE(on_sys_clock_settime_enter)
PPP_CB_BOILERPLATE(on_sys_chown16_enter)
PPP_CB_BOILERPLATE(on_sys_uselib_enter)
PPP_CB_BOILERPLATE(on_sys_settimeofday_enter)
PPP_CB_BOILERPLATE(on_sys_creat_enter)
PPP_CB_BOILERPLATE(on_sys_getegid16_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigpending_enter)
PPP_CB_BOILERPLATE(on_sys_fgetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd4_enter)
PPP_CB_BOILERPLATE(on_sys_chown_enter)
PPP_CB_BOILERPLATE(on_sigaction_enter)
PPP_CB_BOILERPLATE(on_sys_getpgid_enter)
PPP_CB_BOILERPLATE(on_sys_get_robust_list_enter)
PPP_CB_BOILERPLATE(on_sys_quotactl_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups16_enter)
PPP_CB_BOILERPLATE(on_sys_symlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_open_by_handle_at_enter)
PPP_CB_BOILERPLATE(on_sys_removexattr_enter)
PPP_CB_BOILERPLATE(on_sys_getpid_enter)
PPP_CB_BOILERPLATE(on_sys_mprotect_enter)
PPP_CB_BOILERPLATE(on_sys_uname_enter)
PPP_CB_BOILERPLATE(on_sys_faccessat_enter)
PPP_CB_BOILERPLATE(on_sys_sigpending_enter)
PPP_CB_BOILERPLATE(on_sys_restart_syscall_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_ctl_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs_enter)
PPP_CB_BOILERPLATE(on_sys_setxattr_enter)
PPP_CB_BOILERPLATE(on_sys_mremap_enter)
PPP_CB_BOILERPLATE(on_sys_futex_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd_enter)
PPP_CB_BOILERPLATE(on_sys_lsetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_clock_adjtime_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups16_enter)
PPP_CB_BOILERPLATE(on_sys_socketcall_enter)
PPP_CB_BOILERPLATE(on_sys_capget_enter)
PPP_CB_BOILERPLATE(on_sys_symlink_enter)
PPP_CB_BOILERPLATE(on_sys_bdflush_enter)
PPP_CB_BOILERPLATE(on_sys_newfstat_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid_enter)
PPP_CB_BOILERPLATE(on_sys_gettimeofday_enter)
PPP_CB_BOILERPLATE(on_sys_prlimit64_enter)
PPP_CB_BOILERPLATE(on_sys_mknodat_enter)
PPP_CB_BOILERPLATE(on_sys_mq_unlink_enter)
PPP_CB_BOILERPLATE(on_sys_alarm_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid16_enter)
PPP_CB_BOILERPLATE(on_sys_getxattr_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_waitpid_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedsend_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_settime_enter)
PPP_CB_BOILERPLATE(on_sys_getitimer_enter)
PPP_CB_BOILERPLATE(on_sys_perf_event_open_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid16_enter)
PPP_CB_BOILERPLATE(on_sys_getcpu_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_wait_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init_enter)
PPP_CB_BOILERPLATE(on_sys_ssetmask_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid16_enter)
PPP_CB_BOILERPLATE(on_sys_clock_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid_enter)
PPP_CB_BOILERPLATE(on_sys_readlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_old_mmap_enter)
PPP_CB_BOILERPLATE(on_rt_sigaction_enter)
PPP_CB_BOILERPLATE(on_sys_migrate_pages_enter)
PPP_CB_BOILERPLATE(on_sys_mbind_enter)
PPP_CB_BOILERPLATE(on_sys_lgetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_fchown16_enter)
PPP_CB_BOILERPLATE(on_sys_linkat_enter)
PPP_CB_BOILERPLATE(on_sys_truncate_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_set_enter)
PPP_CB_BOILERPLATE(on_sys_chroot_enter)
PPP_CB_BOILERPLATE(on_sys_rename_enter)
PPP_CB_BOILERPLATE(on_sys_getpriority_enter)
PPP_CB_BOILERPLATE(on_sys_readv_enter)
PPP_CB_BOILERPLATE(on_sys_process_vm_writev_enter)
PPP_CB_BOILERPLATE(on_sys_statfs64_enter)
PPP_CB_BOILERPLATE(on_sys_nanosleep_enter)
PPP_CB_BOILERPLATE(on_sys_io_setup_enter)
PPP_CB_BOILERPLATE(on_sys_timer_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_lseek_enter)
PPP_CB_BOILERPLATE(on_sys_madvise_enter)
PPP_CB_BOILERPLATE(on_sys_fremovexattr_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid16_enter)
PPP_CB_BOILERPLATE(on_sys_stat_enter)
PPP_CB_BOILERPLATE(on_sys_mknod_enter)
PPP_CB_BOILERPLATE(on_sys_pipe2_enter)
PPP_CB_BOILERPLATE(on_sys_newuname_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_min_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl_enter)
PPP_CB_BOILERPLATE(on_sys_olduname_enter)
PPP_CB_BOILERPLATE(on_sys_chmod_enter)
PPP_CB_BOILERPLATE(on_sys_getgid_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd2_enter)
PPP_CB_BOILERPLATE(on_sys_sysfs_enter)
PPP_CB_BOILERPLATE(on_sys_mkdir_enter)
PPP_CB_BOILERPLATE(on_sys_getcwd_enter)
PPP_CB_BOILERPLATE(on_sys_fsync_enter)
PPP_CB_BOILERPLATE(on_sys_truncate64_enter)
PPP_CB_BOILERPLATE(on_sys_remap_file_pages_enter)
PPP_CB_BOILERPLATE(on_sys_old_getrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_fsetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_old_readdir_enter)
PPP_CB_BOILERPLATE(on_sys_unlink_enter)
PPP_CB_BOILERPLATE(on_sys_swapon_enter)
PPP_CB_BOILERPLATE(on_sys_clock_nanosleep_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_pread64_enter)
PPP_CB_BOILERPLATE(on_sys_io_submit_enter)
PPP_CB_BOILERPLATE(on_sys_setpgid_enter)
PPP_CB_BOILERPLATE(on_sys_setuid16_enter)
PPP_CB_BOILERPLATE(on_sys_mq_notify_enter)
PPP_CB_BOILERPLATE(on_sys_select_enter)
PPP_CB_BOILERPLATE(on_all_sys_linux_x86_enter)
PPP_CB_BOILERPLATE(on_sys_personality_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd_enter)
PPP_CB_BOILERPLATE(on_sys_name_to_handle_at_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_max_enter)
PPP_CB_BOILERPLATE(on_sys_splice_enter)
PPP_CB_BOILERPLATE(on_sys_get_mempolicy_enter)
PPP_CB_BOILERPLATE(on_sys_setpriority_enter)
PPP_CB_BOILERPLATE(on_sys_getrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_umount_enter)
PPP_CB_BOILERPLATE(on_sys_newlstat_enter)
PPP_CB_BOILERPLATE(on_sys_init_module_enter)
PPP_CB_BOILERPLATE(on_sys_add_key_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create_enter)
PPP_CB_BOILERPLATE(on_sys_llseek_enter)
PPP_CB_BOILERPLATE(on_sys_fadvise64_enter)
PPP_CB_BOILERPLATE(on_sys_adjtimex_enter)
PPP_CB_BOILERPLATE(on_sys_prctl_enter)
PPP_CB_BOILERPLATE(on_sys_close_enter)
PPP_CB_BOILERPLATE(on_sys_ioctl_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_add_watch_enter)
PPP_CB_BOILERPLATE(on_sys_lchown_enter)
PPP_CB_BOILERPLATE(on_sys_fchmod_enter)
PPP_CB_BOILERPLATE(on_sys_flock_enter)
PPP_CB_BOILERPLATE(on_sys_swapoff_enter)
PPP_CB_BOILERPLATE(on_sys_timer_create_enter)
PPP_CB_BOILERPLATE(on_sys_mq_open_enter)
PPP_CB_BOILERPLATE(on_sys_pwrite64_enter)
PPP_CB_BOILERPLATE(on_sys_sysinfo_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile_enter)
PPP_CB_BOILERPLATE(on_sys_fstat64_enter)
PPP_CB_BOILERPLATE(on_sys_process_vm_readv_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_create_enter)
PPP_CB_BOILERPLATE(on_sys_fchmodat_enter)
PPP_CB_BOILERPLATE(on_sys_fstatat64_enter)
PPP_CB_BOILERPLATE(on_sys_keyctl_enter)
PPP_CB_BOILERPLATE(on_sys_oldumount_enter)
PPP_CB_BOILERPLATE(on_sys_lstat64_enter)
PPP_CB_BOILERPLATE(on_sys_ustat_enter)
PPP_CB_BOILERPLATE(on_sys_flistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_time_enter)
PPP_CB_BOILERPLATE(on_sys_munmap_enter)
PPP_CB_BOILERPLATE(on_sys_listxattr_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_exit_enter)
PPP_CB_BOILERPLATE(on_sys_clock_getres_enter)
PPP_CB_BOILERPLATE(on_sys_signal_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init1_enter)
PPP_CB_BOILERPLATE(on_sys_readahead_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs64_enter)
PPP_CB_BOILERPLATE(on_sys_move_pages_enter)
PPP_CB_BOILERPLATE(on_sys_timer_delete_enter)
PPP_CB_BOILERPLATE(on_sys_syncfs_enter)
PPP_CB_BOILERPLATE(on_sys_request_key_enter)
PPP_CB_BOILERPLATE(on_sys_statfs_enter)
PPP_CB_BOILERPLATE(on_sys_dup_enter)
PPP_CB_BOILERPLATE(on_sys_pipe_enter)
PPP_CB_BOILERPLATE(on_sys_setns_enter)
PPP_CB_BOILERPLATE(on_sys_getgid16_enter)
PPP_CB_BOILERPLATE(on_sys_unshare_enter)
PPP_CB_BOILERPLATE(on_sys_sync_enter)
PPP_CB_BOILERPLATE(on_sys_setdomainname_enter)
PPP_CB_BOILERPLATE(on_sys_access_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid_enter)
PPP_CB_BOILERPLATE(on_sys_nice_enter)
PPP_CB_BOILERPLATE(on_sys_fanotify_mark_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate64_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedreceive_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_pwait_enter)
PPP_CB_BOILERPLATE(on_sys_stat64_enter)
PPP_CB_BOILERPLATE(on_sys_sysctl_enter)
PPP_CB_BOILERPLATE(on_sys_times_enter)
PPP_CB_BOILERPLATE(on_sys_getppid_enter)
PPP_CB_BOILERPLATE(on_sys_io_cancel_enter)
PPP_CB_BOILERPLATE(on_sys_openat_enter)
PPP_CB_BOILERPLATE(on_sys_dup3_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigtimedwait_enter)
PPP_CB_BOILERPLATE(on_sys_fchownat_enter)
PPP_CB_BOILERPLATE(on_sys_read_enter)
PPP_CB_BOILERPLATE(on_sys_rt_tgsigqueueinfo_enter)
PPP_CB_BOILERPLATE(on_sys_set_robust_list_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getscheduler_enter)
PPP_CB_BOILERPLATE(on_sys_wait4_enter)
PPP_CB_BOILERPLATE(on_sys_delete_module_enter)
PPP_CB_BOILERPLATE(on_sys_mlockall_enter)
PPP_CB_BOILERPLATE(on_sys_setregid16_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid16_enter)
PPP_CB_BOILERPLATE(on_sys_sgetmask_enter)
PPP_CB_BOILERPLATE(on_sys_getuid16_enter)
PPP_CB_BOILERPLATE(on_sys_kexec_load_enter)
PPP_CB_BOILERPLATE(on_sys_capset_enter)
PPP_CB_BOILERPLATE(on_sys_dup2_enter)
PPP_CB_BOILERPLATE(on_sys_tgkill_enter)
PPP_CB_BOILERPLATE(on_sys_renameat_enter)
PPP_CB_BOILERPLATE(on_sys_setsid_enter)
PPP_CB_BOILERPLATE(on_sys_setitimer_enter)
PPP_CB_BOILERPLATE(on_sys_ppoll_enter)
PPP_CB_BOILERPLATE(on_sys_lremovexattr_enter)
PPP_CB_BOILERPLATE(on_sys_llistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_preadv_enter)
PPP_CB_BOILERPLATE(on_sys_lstat_enter)
PPP_CB_BOILERPLATE(on_sys_brk_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid16_enter)
PPP_CB_BOILERPLATE(on_sys_sched_rr_get_interval_enter)
PPP_CB_BOILERPLATE(on_sys_ptrace_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid_enter)
PPP_CB_BOILERPLATE(on_sys_setuid_enter)
PPP_CB_BOILERPLATE(on_sys_newstat_enter)
PPP_CB_BOILERPLATE(on_sys_sethostname_enter)
PPP_CB_BOILERPLATE(on_sys_set_mempolicy_enter)
PPP_CB_BOILERPLATE(on_sys_mkdirat_enter)
PPP_CB_BOILERPLATE(on_sys_syslog_enter)
PPP_CB_BOILERPLATE(on_sys_getdents_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_sys_lookup_dcookie_enter)
PPP_CB_BOILERPLATE(on_sys_sched_yield_enter)
PPP_CB_BOILERPLATE(on_sys_reboot_enter)
PPP_CB_BOILERPLATE(on_sys_timer_settime_enter)
PPP_CB_BOILERPLATE(on_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_sys_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_getegid_enter)
PPP_CB_BOILERPLATE(on_sys_lchown16_enter)
PPP_CB_BOILERPLATE(on_sys_readlink_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getparam_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate_enter)
PPP_CB_BOILERPLATE(on_sys_pivot_root_enter)
PPP_CB_BOILERPLATE(on_sys_link_enter)
PPP_CB_BOILERPLATE(on_sys_vhangup_enter)
PPP_CB_BOILERPLATE(on_sys_tkill_enter)
PPP_CB_BOILERPLATE(on_sys_write_enter)
PPP_CB_BOILERPLATE(on_sys_mount_enter)
PPP_CB_BOILERPLATE(on_unknown_sys_linux_x86_enter)
PPP_CB_BOILERPLATE(on_sys_setgid_enter)
PPP_CB_BOILERPLATE(on_sys_mlock_enter)
PPP_CB_BOILERPLATE(on_sys_mmap_pgoff_enter)
PPP_CB_BOILERPLATE(on_sys_mq_getsetattr_enter)
PPP_CB_BOILERPLATE(on_sys_sendmmsg_enter)
PPP_CB_BOILERPLATE(on_sys_ioperm_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups_enter)
PPP_CB_BOILERPLATE(on_sys_utime_enter)
PPP_CB_BOILERPLATE(on_sys_getdents64_enter)
PPP_CB_BOILERPLATE(on_sys_io_getevents_enter)
PPP_CB_BOILERPLATE(on_sys_fanotify_init_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigqueueinfo_enter)
PPP_CB_BOILERPLATE(on_sys_ipc_enter)
PPP_CB_BOILERPLATE(on_sys_recvmmsg_enter)
PPP_CB_BOILERPLATE(on_sys_umask_enter)
PPP_CB_BOILERPLATE(on_sys_open_enter)
PPP_CB_BOILERPLATE(on_sys_timer_getoverrun_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl64_enter)
PPP_CB_BOILERPLATE(on_sys_rmdir_enter)
PPP_CB_BOILERPLATE(on_sys_munlock_enter)
PPP_CB_BOILERPLATE(on_sys_utimensat_enter)
#endif
