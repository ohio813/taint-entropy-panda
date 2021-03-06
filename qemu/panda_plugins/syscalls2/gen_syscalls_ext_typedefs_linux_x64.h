#ifdef TARGET_X86_64
typedef void (*on_sys_timerfd_create_enter_t)(CPUState* env,target_ulong pc,int32_t clockid,int32_t flags);
typedef void (*on_sys_tkill_enter_t)(CPUState* env,target_ulong pc,uint32_t pid,int32_t sig);
typedef void (*on_sys_ioprio_set_return_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who,int32_t ioprio);
typedef void (*on_sys_socket_enter_t)(CPUState* env,target_ulong pc,int32_t family,int32_t type,int32_t protocol);
typedef void (*on_sys_fremovexattr_enter_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong name);
typedef void (*on_sys_dup3_return_t)(CPUState* env,target_ulong pc,uint32_t oldfd,uint32_t newfd,int32_t flags);
typedef void (*on_sys_sethostname_return_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t len);
typedef void (*on_sys_listen_enter_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t backlog);
typedef void (*on_sys_fchmodat_enter_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong filename,uint32_t mode);
typedef void (*on_sys_setreuid_enter_t)(CPUState* env,target_ulong pc,uint32_t ruid,uint32_t euid);
typedef void (*on_sys_sysctl_enter_t)(CPUState* env,target_ulong pc,target_ulong args);
typedef void (*on_sys_sendfile64_return_t)(CPUState* env,target_ulong pc,int32_t out_fd,int32_t in_fd,target_ulong offset,uint64_t count);
typedef void (*on_sys_dup_return_t)(CPUState* env,target_ulong pc,uint32_t fildes);
typedef void (*on_sys_inotify_rm_watch_enter_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t wd);
typedef void (*on_sys_alarm_return_t)(CPUState* env,target_ulong pc,uint32_t seconds);
typedef void (*on_sys_exit_group_enter_t)(CPUState* env,target_ulong pc,int32_t error_code);
typedef void (*on_sys_setgroups_enter_t)(CPUState* env,target_ulong pc,int32_t gidsetsize,target_ulong grouplist);
typedef void (*on_sys_rt_sigsuspend_return_t)(CPUState* env,target_ulong pc,target_ulong unewset,uint64_t sigsetsize);
typedef void (*on_sys_sethostname_enter_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t len);
typedef void (*on_sys_mkdirat_return_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_flistxattr_enter_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong list,uint64_t size);
typedef void (*on_sys_shmget_enter_t)(CPUState* env,target_ulong pc,uint32_t key,uint64_t size,int32_t shmflg);
typedef void (*on_sys_inotify_init1_enter_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_capset_return_t)(CPUState* env,target_ulong pc,target_ulong header,target_ulong data_arg);
typedef void (*on_sys_sync_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_acct_return_t)(CPUState* env,target_ulong pc,target_ulong name);
typedef void (*on_sys_ustat_enter_t)(CPUState* env,target_ulong pc,uint32_t dev,target_ulong ubuf);
typedef void (*on_sys_dup_enter_t)(CPUState* env,target_ulong pc,uint32_t fildes);
typedef void (*on_sys_syslog_enter_t)(CPUState* env,target_ulong pc,int32_t type,target_ulong buf,int32_t len);
typedef void (*on_sys_getegid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getitimer_return_t)(CPUState* env,target_ulong pc,int32_t which,target_ulong value);
typedef void (*on_sys_alarm_enter_t)(CPUState* env,target_ulong pc,uint32_t seconds);
typedef void (*on_sys_tee_enter_t)(CPUState* env,target_ulong pc,int32_t fdin,int32_t fdout,uint64_t len,uint32_t flags);
typedef void (*on_sys_creat_return_t)(CPUState* env,target_ulong pc,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_getrusage_return_t)(CPUState* env,target_ulong pc,int32_t who,target_ulong ru);
typedef void (*on_sys_bind_return_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong umyaddr,int32_t addrlen);
typedef void (*on_sys_getresgid_return_t)(CPUState* env,target_ulong pc,target_ulong rgid,target_ulong egid,target_ulong sgid);
typedef void (*on_sys_sched_get_priority_min_return_t)(CPUState* env,target_ulong pc,int32_t policy);
typedef void (*on_sys_getuid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_setgid_enter_t)(CPUState* env,target_ulong pc,uint32_t gid);
typedef void (*on_sys_fchdir_enter_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_vhangup_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getcwd_enter_t)(CPUState* env,target_ulong pc,target_ulong buf,uint32_t size);
typedef void (*on_sys_close_return_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_epoll_create_enter_t)(CPUState* env,target_ulong pc,int32_t size);
typedef void (*on_sys_shutdown_return_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t how);
typedef void (*on_sys_getppid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_vhangup_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_semget_return_t)(CPUState* env,target_ulong pc,uint32_t key,int32_t nsems,int32_t semflg);
typedef void (*on_sys_faccessat_enter_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong filename,int32_t mode);
typedef void (*on_sys_flistxattr_return_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong list,uint64_t size);
typedef void (*on_sys_setresuid_enter_t)(CPUState* env,target_ulong pc,uint32_t ruid,uint32_t euid,uint32_t suid);
typedef void (*on_sys_getresuid_enter_t)(CPUState* env,target_ulong pc,target_ulong ruid,target_ulong euid,target_ulong suid);
typedef void (*on_sys_set_tid_address_enter_t)(CPUState* env,target_ulong pc,target_ulong tidptr);
typedef void (*on_sys_fstatfs_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong buf);
typedef void (*on_sys_fchmod_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t mode);
typedef void (*on_sys_chroot_return_t)(CPUState* env,target_ulong pc,target_ulong filename);
typedef void (*on_sys_mlockall_return_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_symlink_enter_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_setpriority_enter_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who,int32_t niceval);
typedef void (*on_sys_timerfd_gettime_return_t)(CPUState* env,target_ulong pc,int32_t ufd,target_ulong otmr);
typedef void (*on_sys_getgid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getsid_return_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_truncate_enter_t)(CPUState* env,target_ulong pc,target_ulong path,int32_t length);
typedef void (*on_sys_setresgid_enter_t)(CPUState* env,target_ulong pc,uint32_t rgid,uint32_t egid,uint32_t sgid);
typedef void (*on_sys_utime_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,target_ulong times);
typedef void (*on_sys_munlockall_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_setgroups_return_t)(CPUState* env,target_ulong pc,int32_t gidsetsize,target_ulong grouplist);
typedef void (*on_sys_truncate_return_t)(CPUState* env,target_ulong pc,target_ulong path,int32_t length);
typedef void (*on_unknown_sys_linux_x64_enter_t)(CPUState *env, target_ulong pc, target_ulong callno);
typedef void (*on_sys_fchdir_return_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_mkdirat_enter_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_restart_syscall_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getitimer_enter_t)(CPUState* env,target_ulong pc,int32_t which,target_ulong value);
typedef void (*on_sys_sched_setparam_return_t)(CPUState* env,target_ulong pc,uint32_t pid,target_ulong param);
typedef void (*on_sys_lchown_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t user,uint32_t group);
typedef void (*on_sys_chdir_return_t)(CPUState* env,target_ulong pc,target_ulong filename);
typedef void (*on_sys_utime_return_t)(CPUState* env,target_ulong pc,target_ulong filename,target_ulong times);
typedef void (*on_sys_eventfd_return_t)(CPUState* env,target_ulong pc,uint32_t count);
typedef void (*on_sys_ioprio_set_enter_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who,int32_t ioprio);
typedef void (*on_sys_open_return_t)(CPUState* env,target_ulong pc,target_ulong filename,int32_t flags,uint32_t mode);
typedef void (*on_sys_tee_return_t)(CPUState* env,target_ulong pc,int32_t fdin,int32_t fdout,uint64_t len,uint32_t flags);
typedef void (*on_sys_inotify_init1_return_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_chmod_return_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t mode);
typedef void (*on_sys_sysctl_return_t)(CPUState* env,target_ulong pc,target_ulong args);
typedef void (*on_sys_munlockall_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_fdatasync_return_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_getpid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_timer_getoverrun_return_t)(CPUState* env,target_ulong pc,uint32_t timer_id);
typedef void (*on_sys_io_destroy_enter_t)(CPUState* env,target_ulong pc,uint32_t ctx);
typedef void (*on_sys_sched_yield_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_sync_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_chmod_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t mode);
typedef void (*on_sys_setns_return_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t nstype);
typedef void (*on_sys_setfsgid_enter_t)(CPUState* env,target_ulong pc,uint32_t gid);
typedef void (*on_sys_epoll_create1_return_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_link_return_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_io_destroy_return_t)(CPUState* env,target_ulong pc,uint32_t ctx);
typedef void (*on_sys_getpgrp_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_chdir_enter_t)(CPUState* env,target_ulong pc,target_ulong filename);
typedef void (*on_sys_sched_yield_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_timer_getoverrun_enter_t)(CPUState* env,target_ulong pc,uint32_t timer_id);
typedef void (*on_sys_setsid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_umount_return_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t flags);
typedef void (*on_sys_unshare_enter_t)(CPUState* env,target_ulong pc,uint32_t unshare_flags);
typedef void (*on_sys_setrlimit_enter_t)(CPUState* env,target_ulong pc,uint32_t resource,target_ulong rlim);
typedef void (*on_sys_munmap_enter_t)(CPUState* env,target_ulong pc,uint32_t addr,uint64_t len);
typedef void (*on_sys_statfs_return_t)(CPUState* env,target_ulong pc,target_ulong pathname,target_ulong buf);
typedef void (*on_sys_getgroups_return_t)(CPUState* env,target_ulong pc,int32_t gidsetsize,target_ulong grouplist);
typedef void (*on_sys_fcntl_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd,uint32_t arg);
typedef void (*on_sys_setpriority_return_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who,int32_t niceval);
typedef void (*on_sys_inotify_rm_watch_return_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t wd);
typedef void (*on_sys_ioctl_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd,uint32_t arg);
typedef void (*on_sys_socket_return_t)(CPUState* env,target_ulong pc,int32_t family,int32_t type,int32_t protocol);
typedef void (*on_sys_setfsuid_return_t)(CPUState* env,target_ulong pc,uint32_t uid);
typedef void (*on_sys_sysfs_return_t)(CPUState* env,target_ulong pc,int32_t option,uint32_t arg1,uint32_t arg2);
typedef void (*on_all_sys_linux_x64_return_t)(CPUState *env, target_ulong pc, target_ulong callno);
typedef void (*on_sys_unshare_return_t)(CPUState* env,target_ulong pc,uint32_t unshare_flags);
typedef void (*on_sys_flock_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd);
typedef void (*on_sys_pipe2_enter_t)(CPUState* env,target_ulong pc,target_ulong fildes,int32_t flags);
typedef void (*on_sys_getcwd_return_t)(CPUState* env,target_ulong pc,target_ulong buf,uint32_t size);
typedef void (*on_sys_setuid_return_t)(CPUState* env,target_ulong pc,uint32_t uid);
typedef void (*on_sys_getrusage_enter_t)(CPUState* env,target_ulong pc,int32_t who,target_ulong ru);
typedef void (*on_sys_sendmsg_enter_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong msg,uint32_t flags);
typedef void (*on_sys_swapon_return_t)(CPUState* env,target_ulong pc,target_ulong specialfile,int32_t swap_flags);
typedef void (*on_sys_close_enter_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_fanotify_init_enter_t)(CPUState* env,target_ulong pc,uint32_t flags,uint32_t event_f_flags);
typedef void (*on_sys_exit_return_t)(CPUState* env,target_ulong pc,int32_t error_code);
typedef void (*on_sys_getppid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_ioprio_get_enter_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who);
typedef void (*on_sys_rt_sigsuspend_enter_t)(CPUState* env,target_ulong pc,target_ulong unewset,uint64_t sigsetsize);
typedef void (*on_sys_pause_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_capget_enter_t)(CPUState* env,target_ulong pc,target_ulong header,target_ulong dataptr);
typedef void (*on_sys_setreuid_return_t)(CPUState* env,target_ulong pc,uint32_t ruid,uint32_t euid);
typedef void (*on_sys_eventfd2_return_t)(CPUState* env,target_ulong pc,uint32_t count,int32_t flags);
typedef void (*on_sys_kill_return_t)(CPUState* env,target_ulong pc,uint32_t pid,int32_t sig);
typedef void (*on_sys_unlinkat_enter_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong pathname,int32_t flag);
typedef void (*on_sys_capget_return_t)(CPUState* env,target_ulong pc,target_ulong header,target_ulong dataptr);
typedef void (*on_sys_ioprio_get_return_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who);
typedef void (*on_sys_shmget_return_t)(CPUState* env,target_ulong pc,uint32_t key,uint64_t size,int32_t shmflg);
typedef void (*on_sys_fsync_return_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_setfsuid_enter_t)(CPUState* env,target_ulong pc,uint32_t uid);
typedef void (*on_sys_sendmsg_return_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong msg,uint32_t flags);
typedef void (*on_sys_msync_enter_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len,int32_t flags);
typedef void (*on_sys_semget_enter_t)(CPUState* env,target_ulong pc,uint32_t key,int32_t nsems,int32_t semflg);
typedef void (*on_sys_eventfd_enter_t)(CPUState* env,target_ulong pc,uint32_t count);
typedef void (*on_sys_pipe_return_t)(CPUState* env,target_ulong pc,target_ulong fildes);
typedef void (*on_sys_shmat_enter_t)(CPUState* env,target_ulong pc,int32_t shmid,target_ulong shmaddr,int32_t shmflg);
typedef void (*on_sys_io_setup_return_t)(CPUState* env,target_ulong pc,uint32_t nr_events,target_ulong ctxp);
typedef void (*on_sys_ftruncate_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t length);
typedef void (*on_sys_personality_enter_t)(CPUState* env,target_ulong pc,uint32_t personality);
typedef void (*on_sys_shmat_return_t)(CPUState* env,target_ulong pc,int32_t shmid,target_ulong shmaddr,int32_t shmflg);
typedef void (*on_sys_madvise_return_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len_in,int32_t behavior);
typedef void (*on_sys_time_return_t)(CPUState* env,target_ulong pc,target_ulong tloc);
typedef void (*on_sys_getresuid_return_t)(CPUState* env,target_ulong pc,target_ulong ruid,target_ulong euid,target_ulong suid);
typedef void (*on_sys_sched_setparam_enter_t)(CPUState* env,target_ulong pc,uint32_t pid,target_ulong param);
typedef void (*on_sys_shutdown_enter_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t how);
typedef void (*on_sys_lseek_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint64_t offset,uint32_t origin);
typedef void (*on_sys_sysfs_enter_t)(CPUState* env,target_ulong pc,int32_t option,uint32_t arg1,uint32_t arg2);
typedef void (*on_sys_setpgid_enter_t)(CPUState* env,target_ulong pc,uint32_t pid,uint32_t pgid);
typedef void (*on_sys_newuname_enter_t)(CPUState* env,target_ulong pc,target_ulong name);
typedef void (*on_sys_chown_return_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t user,uint32_t group);
typedef void (*on_sys_fchown_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t user,uint32_t group);
typedef void (*on_sys_rmdir_enter_t)(CPUState* env,target_ulong pc,target_ulong pathname);
typedef void (*on_sys_munlock_enter_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len);
typedef void (*on_sys_access_return_t)(CPUState* env,target_ulong pc,target_ulong filename,int32_t mode);
typedef void (*on_sys_gettid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_mq_unlink_enter_t)(CPUState* env,target_ulong pc,target_ulong u_name);
typedef void (*on_sys_ftruncate_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t length);
typedef void (*on_sys_fchmodat_return_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong filename,uint32_t mode);
typedef void (*on_sys_swapon_enter_t)(CPUState* env,target_ulong pc,target_ulong specialfile,int32_t swap_flags);
typedef void (*on_sys_gettid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_fstatfs_return_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong buf);
typedef void (*on_sys_fcntl_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd,uint32_t arg);
typedef void (*on_sys_personality_return_t)(CPUState* env,target_ulong pc,uint32_t personality);
typedef void (*on_sys_setresgid_return_t)(CPUState* env,target_ulong pc,uint32_t rgid,uint32_t egid,uint32_t sgid);
typedef void (*on_sys_eventfd2_enter_t)(CPUState* env,target_ulong pc,uint32_t count,int32_t flags);
typedef void (*on_sys_umask_enter_t)(CPUState* env,target_ulong pc,int32_t mask);
typedef void (*on_sys_mlockall_enter_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_geteuid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_pipe2_return_t)(CPUState* env,target_ulong pc,target_ulong fildes,int32_t flags);
typedef void (*on_sys_tkill_return_t)(CPUState* env,target_ulong pc,uint32_t pid,int32_t sig);
typedef void (*on_sys_msync_return_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len,int32_t flags);
typedef void (*on_sys_brk_return_t)(CPUState* env,target_ulong pc,uint32_t brk);
typedef void (*on_sys_mknod_return_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t mode,uint32_t dev);
typedef void (*on_sys_times_return_t)(CPUState* env,target_ulong pc,target_ulong tbuf);
typedef void (*on_sys_mkdir_enter_t)(CPUState* env,target_ulong pc,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_getpriority_return_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who);
typedef void (*on_sys_dup2_return_t)(CPUState* env,target_ulong pc,uint32_t oldfd,uint32_t newfd);
typedef void (*on_sys_tgkill_return_t)(CPUState* env,target_ulong pc,uint32_t tgid,uint32_t pid,int32_t sig);
typedef void (*on_sys_fchown_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t user,uint32_t group);
typedef void (*on_sys_rmdir_return_t)(CPUState* env,target_ulong pc,target_ulong pathname);
typedef void (*on_sys_read_return_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong buf,uint64_t count);
typedef void (*on_sys_timer_delete_enter_t)(CPUState* env,target_ulong pc,uint32_t timer_id);
typedef void (*on_sys_rename_enter_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_lseek_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint64_t offset,uint32_t origin);
typedef void (*on_sys_umask_return_t)(CPUState* env,target_ulong pc,int32_t mask);
typedef void (*on_sys_fchmod_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t mode);
typedef void (*on_sys_munlock_return_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len);
typedef void (*on_sys_getresgid_enter_t)(CPUState* env,target_ulong pc,target_ulong rgid,target_ulong egid,target_ulong sgid);
typedef void (*on_sys_getrlimit_enter_t)(CPUState* env,target_ulong pc,uint32_t resource,target_ulong rlim);
typedef void (*on_sys_listen_return_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t backlog);
typedef void (*on_all_sys_linux_x64_enter_t)(CPUState *env, target_ulong pc, target_ulong callno);
typedef void (*on_sys_epoll_create_return_t)(CPUState* env,target_ulong pc,int32_t size);
typedef void (*on_sys_setpgid_return_t)(CPUState* env,target_ulong pc,uint32_t pid,uint32_t pgid);
typedef void (*on_sys_statfs_enter_t)(CPUState* env,target_ulong pc,target_ulong pathname,target_ulong buf);
typedef void (*on_sys_inotify_init_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_setns_enter_t)(CPUState* env,target_ulong pc,int32_t fd,int32_t nstype);
typedef void (*on_sys_adjtimex_enter_t)(CPUState* env,target_ulong pc,target_ulong txc_p);
typedef void (*on_sys_mlock_enter_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len);
typedef void (*on_sys_ustat_return_t)(CPUState* env,target_ulong pc,uint32_t dev,target_ulong ubuf);
typedef void (*on_sys_mq_unlink_return_t)(CPUState* env,target_ulong pc,target_ulong u_name);
typedef void (*on_sys_mknod_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t mode,uint32_t dev);
typedef void (*on_sys_io_setup_enter_t)(CPUState* env,target_ulong pc,uint32_t nr_events,target_ulong ctxp);
typedef void (*on_sys_syslog_return_t)(CPUState* env,target_ulong pc,int32_t type,target_ulong buf,int32_t len);
typedef void (*on_sys_rt_sigpending_return_t)(CPUState* env,target_ulong pc,target_ulong set,uint64_t sigsetsize);
typedef void (*on_sys_lchown_return_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t user,uint32_t group);
typedef void (*on_sys_restart_syscall_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_setfsgid_return_t)(CPUState* env,target_ulong pc,uint32_t gid);
typedef void (*on_sys_shmdt_return_t)(CPUState* env,target_ulong pc,target_ulong shmaddr);
typedef void (*on_sys_capset_enter_t)(CPUState* env,target_ulong pc,target_ulong header,target_ulong data_arg);
typedef void (*on_sys_sched_getscheduler_return_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_rt_sigpending_enter_t)(CPUState* env,target_ulong pc,target_ulong set,uint64_t sigsetsize);
typedef void (*on_sys_syncfs_enter_t)(CPUState* env,target_ulong pc,int32_t fd);
typedef void (*on_sys_shmctl_return_t)(CPUState* env,target_ulong pc,int32_t shmid,int32_t cmd,target_ulong buf);
typedef void (*on_sys_msgget_return_t)(CPUState* env,target_ulong pc,uint32_t key,int32_t msgflg);
typedef void (*on_sys_brk_enter_t)(CPUState* env,target_ulong pc,uint32_t brk);
typedef void (*on_sys_munmap_return_t)(CPUState* env,target_ulong pc,uint32_t addr,uint64_t len);
typedef void (*on_sys_symlink_return_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_newfstat_return_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong statbuf);
typedef void (*on_sys_madvise_enter_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len_in,int32_t behavior);
typedef void (*on_sys_acct_enter_t)(CPUState* env,target_ulong pc,target_ulong name);
typedef void (*on_sys_timerfd_gettime_enter_t)(CPUState* env,target_ulong pc,int32_t ufd,target_ulong otmr);
typedef void (*on_sys_setsid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_setuid_enter_t)(CPUState* env,target_ulong pc,uint32_t uid);
typedef void (*on_sys_set_tid_address_return_t)(CPUState* env,target_ulong pc,target_ulong tidptr);
typedef void (*on_sys_setregid_return_t)(CPUState* env,target_ulong pc,uint32_t rgid,uint32_t egid);
typedef void (*on_sys_sysinfo_enter_t)(CPUState* env,target_ulong pc,target_ulong info);
typedef void (*on_sys_epoll_create1_enter_t)(CPUState* env,target_ulong pc,int32_t flags);
typedef void (*on_sys_msgctl_return_t)(CPUState* env,target_ulong pc,int32_t msqid,int32_t cmd,target_ulong buf);
typedef void (*on_sys_access_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,int32_t mode);
typedef void (*on_sys_ioctl_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd,uint32_t arg);
typedef void (*on_sys_timerfd_create_return_t)(CPUState* env,target_ulong pc,int32_t clockid,int32_t flags);
typedef void (*on_sys_sched_getscheduler_enter_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_inotify_init_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_bind_enter_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong umyaddr,int32_t addrlen);
typedef void (*on_sys_exit_group_return_t)(CPUState* env,target_ulong pc,int32_t error_code);
typedef void (*on_sys_rename_return_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_fremovexattr_return_t)(CPUState* env,target_ulong pc,int32_t fd,target_ulong name);
typedef void (*on_sys_adjtimex_return_t)(CPUState* env,target_ulong pc,target_ulong txc_p);
typedef void (*on_sys_sched_getparam_enter_t)(CPUState* env,target_ulong pc,uint32_t pid,target_ulong param);
typedef void (*on_sys_flock_return_t)(CPUState* env,target_ulong pc,uint32_t fd,uint32_t cmd);
typedef void (*on_sys_faccessat_return_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong filename,int32_t mode);
typedef void (*on_sys_creat_enter_t)(CPUState* env,target_ulong pc,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_getpgid_enter_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_newuname_return_t)(CPUState* env,target_ulong pc,target_ulong name);
typedef void (*on_sys_getuid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getsid_enter_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_getgroups_enter_t)(CPUState* env,target_ulong pc,int32_t gidsetsize,target_ulong grouplist);
typedef void (*on_sys_umount_enter_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t flags);
typedef void (*on_sys_msgget_enter_t)(CPUState* env,target_ulong pc,uint32_t key,int32_t msgflg);
typedef void (*on_sys_setgid_return_t)(CPUState* env,target_ulong pc,uint32_t gid);
typedef void (*on_sys_unlink_return_t)(CPUState* env,target_ulong pc,target_ulong pathname);
typedef void (*on_sys_getgid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_times_enter_t)(CPUState* env,target_ulong pc,target_ulong tbuf);
typedef void (*on_sys_sched_get_priority_min_enter_t)(CPUState* env,target_ulong pc,int32_t policy);
typedef void (*on_sys_sched_get_priority_max_return_t)(CPUState* env,target_ulong pc,int32_t policy);
typedef void (*on_sys_setrlimit_return_t)(CPUState* env,target_ulong pc,uint32_t resource,target_ulong rlim);
typedef void (*on_sys_open_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,int32_t flags,uint32_t mode);
typedef void (*on_sys_mlock_return_t)(CPUState* env,target_ulong pc,uint32_t start,uint64_t len);
typedef void (*on_sys_getegid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_fdatasync_enter_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_swapoff_return_t)(CPUState* env,target_ulong pc,target_ulong specialfile);
typedef void (*on_sys_mkdir_return_t)(CPUState* env,target_ulong pc,target_ulong pathname,uint32_t mode);
typedef void (*on_sys_sysinfo_return_t)(CPUState* env,target_ulong pc,target_ulong info);
typedef void (*on_sys_sendfile64_enter_t)(CPUState* env,target_ulong pc,int32_t out_fd,int32_t in_fd,target_ulong offset,uint64_t count);
typedef void (*on_sys_time_enter_t)(CPUState* env,target_ulong pc,target_ulong tloc);
typedef void (*on_sys_newfstat_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong statbuf);
typedef void (*on_sys_kill_enter_t)(CPUState* env,target_ulong pc,uint32_t pid,int32_t sig);
typedef void (*on_sys_setregid_enter_t)(CPUState* env,target_ulong pc,uint32_t rgid,uint32_t egid);
typedef void (*on_sys_swapoff_enter_t)(CPUState* env,target_ulong pc,target_ulong specialfile);
typedef void (*on_sys_getpgid_return_t)(CPUState* env,target_ulong pc,uint32_t pid);
typedef void (*on_sys_msgctl_enter_t)(CPUState* env,target_ulong pc,int32_t msqid,int32_t cmd,target_ulong buf);
typedef void (*on_sys_shmdt_enter_t)(CPUState* env,target_ulong pc,target_ulong shmaddr);
typedef void (*on_sys_sched_getparam_return_t)(CPUState* env,target_ulong pc,uint32_t pid,target_ulong param);
typedef void (*on_sys_dup2_enter_t)(CPUState* env,target_ulong pc,uint32_t oldfd,uint32_t newfd);
typedef void (*on_sys_chown_enter_t)(CPUState* env,target_ulong pc,target_ulong filename,uint32_t user,uint32_t group);
typedef void (*on_unknown_sys_linux_x64_return_t)(CPUState *env, target_ulong pc, target_ulong callno);
typedef void (*on_sys_chroot_enter_t)(CPUState* env,target_ulong pc,target_ulong filename);
typedef void (*on_sys_fsync_enter_t)(CPUState* env,target_ulong pc,uint32_t fd);
typedef void (*on_sys_shmctl_enter_t)(CPUState* env,target_ulong pc,int32_t shmid,int32_t cmd,target_ulong buf);
typedef void (*on_sys_sched_get_priority_max_enter_t)(CPUState* env,target_ulong pc,int32_t policy);
typedef void (*on_sys_setdomainname_return_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t len);
typedef void (*on_sys_read_enter_t)(CPUState* env,target_ulong pc,uint32_t fd,target_ulong buf,uint64_t count);
typedef void (*on_sys_unlink_enter_t)(CPUState* env,target_ulong pc,target_ulong pathname);
typedef void (*on_sys_link_enter_t)(CPUState* env,target_ulong pc,target_ulong oldname,target_ulong newname);
typedef void (*on_sys_exit_enter_t)(CPUState* env,target_ulong pc,int32_t error_code);
typedef void (*on_sys_unlinkat_return_t)(CPUState* env,target_ulong pc,int32_t dfd,target_ulong pathname,int32_t flag);
typedef void (*on_sys_setresuid_return_t)(CPUState* env,target_ulong pc,uint32_t ruid,uint32_t euid,uint32_t suid);
typedef void (*on_sys_tgkill_enter_t)(CPUState* env,target_ulong pc,uint32_t tgid,uint32_t pid,int32_t sig);
typedef void (*on_sys_dup3_enter_t)(CPUState* env,target_ulong pc,uint32_t oldfd,uint32_t newfd,int32_t flags);
typedef void (*on_sys_fanotify_init_return_t)(CPUState* env,target_ulong pc,uint32_t flags,uint32_t event_f_flags);
typedef void (*on_sys_getpgrp_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getpid_enter_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getrlimit_return_t)(CPUState* env,target_ulong pc,uint32_t resource,target_ulong rlim);
typedef void (*on_sys_setdomainname_enter_t)(CPUState* env,target_ulong pc,target_ulong name,int32_t len);
typedef void (*on_sys_geteuid_return_t)(CPUState* env,target_ulong pc);
typedef void (*on_sys_getpriority_enter_t)(CPUState* env,target_ulong pc,int32_t which,int32_t who);
typedef void (*on_sys_timer_delete_return_t)(CPUState* env,target_ulong pc,uint32_t timer_id);
typedef void (*on_sys_pipe_enter_t)(CPUState* env,target_ulong pc,target_ulong fildes);
typedef void (*on_sys_syncfs_return_t)(CPUState* env,target_ulong pc,int32_t fd);
typedef void (*on_sys_pause_return_t)(CPUState* env,target_ulong pc);
#endif
