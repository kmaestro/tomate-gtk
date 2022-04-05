/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Use structured logging */
#define G_LOG_STRUCTURED 1

/* The prefix for our gettext translation domains. */
#define GETTEXT_PACKAGE "gtk40"

/* Disable deprecation warnings from glib */
#define GLIB_DISABLE_DEPRECATION_WARNINGS 1

/* Define the location where the catalogs will be installed */
#define GTK_LOCALEDIR "/usr/local/share/locale"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Have the cloudproviders library */
#undef HAVE_CLOUDPROVIDERS

/* define if we have colord */
#undef HAVE_COLORD

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Have the ffmpeg library */
/* #undef HAVE_FFMPEG */

/* Define to 1 if you have the <ftw.h> header file. */
#define HAVE_FTW_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define if gio-unix is available */
#define HAVE_GIO_UNIX

/* Define if GStreamer support is available */
/* #undef HAVE_GSTREAMER */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if the system has the type `IPrintDialogCallback'. */
/* #undef HAVE_IPRINTDIALOGCALLBACK */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `mallinfo' function. */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mlock` function. */
#define HAVE_MLOCK 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* Have the Xrandr extension library */
#define HAVE_RANDR

/* Have the Xrandr 1.5 extension library */
#define HAVE_RANDR15

/* Define to 1 if you have the `sincos' function. */
#define HAVE_SINCOS 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Have the sysprof-capture library */
/* #undef HAVE_SYSPROF */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Have the XCOMPOSITE X extension */
#undef HAVE_XCOMPOSITE

/* Have the Xcursor library */
#undef HAVE_XCURSOR

/* Have the XDAMAGE X extension */
#undef HAVE_XDAMAGE

/* Have the XFIXES X extension */
#define HAVE_XFIXES

/* Define to 1 if XFree Xinerama is available */
/* #undef HAVE_XFREE_XINERAMA */

/* Have XGenericEvent */
#define HAVE_XGENERICEVENTS 1

/* Define to use XKB extension */
#define HAVE_XKB 1

/* Have the SYNC extension library */
#define HAVE_XSYNC 1

/* Define to 1 if you have the `_lock_file' function */
/* #undef HAVE__LOCK_FILE */

/* Define to 1 if you have the `flockfile' function */
#define HAVE_FLOCKFILE 1

/* Define if _NL_MEASUREMENT_MEASUREMENT is available */
#define HAVE__NL_MEASUREMENT_MEASUREMENT

/* Define if _NL_PAPER_HEIGHT is available */
#define HAVE__NL_PAPER_HEIGHT

/* Define if _NL_PAPER_WIDTH is available */
#define HAVE__NL_PAPER_WIDTH

/* Define if _NL_TIME_FIRST_WEEKDAY is available */
#define HAVE__NL_TIME_FIRST_WEEKDAY

/* Define to the sub-directory where libtool stores uninstalled libraries. */
/* #undef LT_OBJDIR */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.3"

/* Use NSBundle functions to determine load paths for libraries, translations,
   etc. */
/* #undef QUARTZ_RELOCATION */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Define to 1 if XInput 2.2 is available */
#define XINPUT_2_2 1

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* defines how to decorate public symbols while building */
#define _GDK_EXTERN __attribute__((visibility("default"))) extern

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to 1 if linux/memfd.h exists */
#define HAVE_LINUX_MEMFD_H 1

#define HAVE_LINUX_INPUT_H 1

/* #undef HAVE_DEV_EVDEV_INPUT_H */

#define GTK_SYSCONFDIR "/usr/local/etc"

#define GTK_LOCALEDIR "/usr/local/share/locale"

#define GTK_DATADIR "/usr/local/share"

#define GTK_LIBDIR "/usr/local/lib/x86_64-linux-gnu"

#define GTK_PRINT_BACKENDS "lpr,file"

#define HAVE_CAIRO_SCRIPT_INTERPRETER

#define HAVE_HARFBUZZ

#define HAVE_PANGOFT

#define ISO_CODES_PREFIX "/usr"

/* Define if tracker3 is available */
#undef HAVE_TRACKER3
