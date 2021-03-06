/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Whether we have alarm() */
#define HAVE_ALARM 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `getisax' function. */
/* #undef HAVE_GETISAX */

/* Whether we have getpagesize() */
#define HAVE_GETPAGESIZE 1

/* Whether we have gettimeofday() */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `pixman-1' library (-lpixman-1). */
/* #undef HAVE_LIBPIXMAN_1 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Whether we have mprotect() */
#define HAVE_MPROTECT 1

/* Whether we have posix_memalign() */
#define HAVE_POSIX_MEMALIGN 1

/* Whether pthread_setspecific() is supported */
#define HAVE_PTHREAD_SETSPECIFIC /**/

/* Whether we have sigaction() */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if we have <sys/mman.h> */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "pixman"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""pixman@lists.freedesktop.org""

/* Define to the full name of this package. */
#define PACKAGE_NAME "pixman"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pixman 0.19.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pixman"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.19.4"

/* enable TIMER_BEGIN/TIMER_END macros */
/* #undef PIXMAN_TIMERS */

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Whether the tool chain supports __thread */
/* #undef TOOLCHAIN_SUPPORTS__THREAD */

/* use ARM NEON assembly optimizations */
/* #undef USE_ARM_NEON */

/* use ARM SIMD assembly optimizations */
/* #undef USE_ARM_SIMD */

/* use GNU-style inline assembler */
#define USE_GCC_INLINE_ASM 1


#if !defined (__BIG_ENDIAN__)
# if !defined(__arm64__)
#  define USE_MMX 1
#  define USE_SSE2 1
# endif
#elif defined (__APPLE__)
#define USE_VMX 1
#endif

/* use OpenMP in the test suite */
/* #undef USE_OPENMP */


/* use VMX compiler intrinsics */
/* #undef USE_VMX */

/* Version number of package */
#define VERSION "0.19.4"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif



// ---- Cairo setup ----

/* Define to 1 to enable cairo's cairo-script-interpreter feature */
#define CAIRO_HAS_INTERPRETER 1

/* Define to 1 to enable cairo's pthread feature */
#define CAIRO_HAS_PTHREAD 1

/* Define to 1 if we have full pthread support */
#define CAIRO_HAS_REAL_PTHREAD 1

/* Define to 1 to enable cairo's cairo-trace feature */
#define CAIRO_HAS_TRACE 1


