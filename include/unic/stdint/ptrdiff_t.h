#ifndef UNIC_PTRDIFF_C
#include "ssize_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef PTRDIFF_MAX
# define UNIC_PTRDIFF_MAX PTRDIFF_MAX
#else
# define UNIC_PTRDIFF_MAX UNIC_SSIZE_MAX
#endif

#ifdef PTRDIFF_MIN
# define UNIC_PTRDIFF_MIN PTRDIFF_MIN
#else
# define UNIC_PTRDIFF_MIN UNIC___MIN(UNIC_PTRDIFF_MAX)
#endif

#ifdef PTRDIFF_END_BIT
# define UNIC_PTRDIFF_END_BIT PTRDIFF_END_BIT
#else
# define UNIC_PTRDIFF_END_BIT UNIC_PTRDIFF_MIN
#endif

#ifdef SIZEOF_PTRDIFF
# define UNIC_SIZEOF_PTRDIFF SIZEOF_PTRDIFF
#else
# define UNIC_SIZEOF_PTRDIFF UNIC_SIZEOF_BY_IMAX(PTRDIFF_MAX)
#endif

#ifdef PTRDIFF_WIDTH
# define UNIC_PTRDIFF_WIDTH PTRDIFF_WIDTH
#else
# define UNIC_PTRDIFF_WIDTH (UNIC_SIZEOF_PTRDIFF * UNIC_CHAR_BIT)
#endif

#ifdef PTRDIFF_TYPE
# define UNIC_PTRDIFF_TYPE PTRDIFF_TYPE
#elif UNIC_PTRDIFF_MAX == UNIC_INT_MAX
# define UNIC_PTRDIFF_TYPE int
#elif UNIC_PTRDIFF_MAX > UNIC_LONG_MAX
# define UNIC_PTRDIFF_TYPE long long int
#else
# define UNIC_PTRDIFF_TYPE long int
#endif

typedef UNIC_PTRDIFF_TYPE unic_ptrdiff_t;

#ifdef PTRDIFF_C
# define UNIC_PTRDIFF_C PTRDIFF_C
#elif UNIC_PTRDIFF_MAX == UNIC_INT_MAX
# define UNIC_PTRDIFF_C(VAL) VAL
#elif UNIC_PTRDIFF_MAX > UNIC_LONG_MAX
# define UNIC_PTRDIFF_C(VAL) VAL##LL
#else
# define UNIC_PTRDIFF_C(VAL) VAL##L
#endif

#ifdef PRI_PTRDIFF
# define UNIC_PRI_PTRDIFF PRI_PTRDIFF
#elif UNIC_PTRDIFF_MAX == UNIC_INT_MAX
# define UNIC_PRI_PTRDIFF
#elif UNIC_PTRDIFF_MAX > UNIC_LONG_MAX
# define UNIC_PRI_PTRDIFF "ll"
#else
# define UNIC_PRI_PTRDIFF "l"
#endif

#ifdef SCN_PTRDIFF
# define UNIC_SCN_PTRDIFF SCN_PTRDIFF
#elif UNIC_PTRDIFF_MAX == UNIC_INT_MAX
# define UNIC_SCN_PTRDIFF
#elif UNIC_PTRDIFF_MAX > UNIC_LONG_MAX
# define UNIC_SCN_PTRDIFF "ll"
#else
# define UNIC_SCN_PTRDIFF "l"
#endif

#define UNIC_PRIiPTRDIFF UNIC_PRI_PTRDIFF "i"
#define UNIC_PRIoPTRDIFF UNIC_PRI_PTRDIFF "o"
#define UNIC_PRIuPTRDIFF UNIC_PRI_PTRDIFF "u"
#define UNIC_PRIxPTRDIFF UNIC_PRI_PTRDIFF "x"
#define UNIC_PRIXPTRDIFF UNIC_PRI_PTRDIFF "X"

#define UNIC_SCNiPTRDIFF UNIC_SCN_PTRDIFF "i"
#define UNIC_SCNoPTRDIFF UNIC_SCN_PTRDIFF "o"
#define UNIC_SCNuPTRDIFF UNIC_SCN_PTRDIFF "u"
#define UNIC_SCNxPTRDIFF UNIC_SCN_PTRDIFF "x"
#define UNIC_SCNXPTRDIFF UNIC_SCN_PTRDIFF "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_ptrdiff_t_h
#  define ___int_ptrdiff_t_h
# ifndef __ptrdiff_t_defined__
#  define __ptrdiff_t_defined__
# ifndef __ptrdiff_t_defined
#  define __ptrdiff_t_defined
# ifndef _ptrdiff_t_defined_
#  define _ptrdiff_t_defined_
# ifndef _ptrdiff_t_defined
#  define _ptrdiff_t_defined
# ifndef __PTRDIFF_T_DEFINED__
#  define __PTRDIFF_T_DEFINED__
# ifndef __PTRDIFF_T_DEFINED
#  define __PTRDIFF_T_DEFINED
# ifndef _PTRDIFF_T_DEFINED_
#  define _PTRDIFF_T_DEFINED_
# ifndef _PTRDIFF_T_DEFINED
#  define _PTRDIFF_T_DEFINED
# ifndef __ptrdiff_t__
#  define __ptrdiff_t__
# ifndef __ptrdiff_t
/* Apparently __ptrdiff_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __ptrdiff_t
#  endif
# ifndef _ptrdiff_t_
#  define _ptrdiff_t_
# ifndef _ptrdiff_t
#  define _ptrdiff_t
# ifndef __PTRDIFF_T__
#  define __PTRDIFF_T__
# ifndef __PTRDIFF_T
#  define __PTRDIFF_T
# ifndef _PTRDIFF_T_
#  define _PTRDIFF_T_
# ifndef _PTRDIFF_T
#  define _PTRDIFF_T
# ifndef __BSD_PTRDIFF_T_DEFINED__
#  define __BSD_PTRDIFF_T_DEFINED__
# ifndef __BSD_PTRDIFF_T_DEFINED
#  define __BSD_PTRDIFF_T_DEFINED
# ifndef _BSD_PTRDIFF_T_DEFINED_
#  define _BSD_PTRDIFF_T_DEFINED_
# ifndef _BSD_PTRDIFF_T_DEFINED
#  define _BSD_PTRDIFF_T_DEFINED
# ifndef __BSD_PTRDIFF_T__
#  define __BSD_PTRDIFF_T__
# ifndef __BSD_PTRDIFF_T
#  define __BSD_PTRDIFF_T
# ifndef _BSD_PTRDIFF_T_
#  define _BSD_PTRDIFF_T_
# ifndef _BSD_PTRDIFF_T
#  define _BSD_PTRDIFF_T
# ifndef __SYS_PTRDIFF_T_DEFINED__
#  define __SYS_PTRDIFF_T_DEFINED__
# ifndef __SYS_PTRDIFF_T_DEFINED
#  define __SYS_PTRDIFF_T_DEFINED
# ifndef _SYS_PTRDIFF_T_DEFINED_
#  define _SYS_PTRDIFF_T_DEFINED_
# ifndef _SYS_PTRDIFF_T_DEFINED
#  define _SYS_PTRDIFF_T_DEFINED
# ifndef __SYS_PTRDIFF_T__
#  define __SYS_PTRDIFF_T__
# ifndef __SYS_PTRDIFF_T
#  define __SYS_PTRDIFF_T
# ifndef _SYS_PTRDIFF_T_
#  define _SYS_PTRDIFF_T_
# ifndef _SYS_PTRDIFF_T
#  define _SYS_PTRDIFF_T
# ifndef __GCC_PTRDIFF_T_DEFINED__
#  define __GCC_PTRDIFF_T_DEFINED__
# ifndef __GCC_PTRDIFF_T_DEFINED
#  define __GCC_PTRDIFF_T_DEFINED
# ifndef _GCC_PTRDIFF_T_DEFINED_
#  define _GCC_PTRDIFF_T_DEFINED_
# ifndef _GCC_PTRDIFF_T_DEFINED
#  define _GCC_PTRDIFF_T_DEFINED
# ifndef __GCC_PTRDIFF_T__
#  define __GCC_PTRDIFF_T__
# ifndef __GCC_PTRDIFF_T
#  define __GCC_PTRDIFF_T
# ifndef _GCC_PTRDIFF_T_
#  define _GCC_PTRDIFF_T_
# ifndef _GCC_PTRDIFF_T
#  define _GCC_PTRDIFF_T
# ifndef __PTRDIFFT_DEFINED__
#  define __PTRDIFFT_DEFINED__
# ifndef __PTRDIFFT_DEFINED
#  define __PTRDIFFT_DEFINED
# ifndef _PTRDIFFT_DEFINED_
#  define _PTRDIFFT_DEFINED_
# ifndef _PTRDIFFT_DEFINED
#  define _PTRDIFFT_DEFINED
# ifndef __PTRDIFFT__
#  define __PTRDIFFT__
# ifndef __PTRDIFFT
#  define __PTRDIFFT
# ifndef _PTRDIFFT_
#  define _PTRDIFFT_
# ifndef _PTRDIFFT
#  define _PTRDIFFT
# ifndef __T_PTRDIFF__
#  define __T_PTRDIFF__
# ifndef __T_PTRDIFF
#  define __T_PTRDIFF
# ifndef _T_PTRDIFF_
#  define _T_PTRDIFF_
# ifndef _T_PTRDIFF
#  define _T_PTRDIFF
typedef unic_ptrdiff_t ptrdiff_t;
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif

#ifndef PTRDIFF_MAX
# define PTRDIFF_MAX UNIC_PTRDIFF_MAX
#endif

#ifndef PTRDIFF_MIN
# define PTRDIFF_MIN UNIC_PTRDIFF_MIN
#endif

#ifndef SIZEOF_PTRDIFF
# define SIZEOF_PTRDIFF UNIC_SIZEOF_PTRDIFF
#endif

#ifndef PTRDIFF_WIDTH
# define PTRDIFF_WIDTH UNIC_PTRDIFF_WIDTH
#endif

#ifndef PTRDIFF_TYPE
# define PTRDIFF_TYPE UNIC_PTRDIFF_TYPE
#endif

#ifndef PTRDIFF_C
# define PTRDIFF_C UNIC_PTRDIFF_C
#endif

#ifndef PRIxPTRDIFF
# define PRIiPTRDIFF UNIC_PRIiPTRDIFF
# define PRIoPTRDIFF UNIC_PRIoPTRDIFF
# define PRIuPTRDIFF UNIC_PRIuPTRDIFF
# define PRIxPTRDIFF UNIC_PRIxPTRDIFF
# define PRIXPTRDIFF UNIC_PRIXPTRDIFF
#endif

#ifndef SCNxPTRDIFF
# define SCNiPTRDIFF UNIC_SCNiPTRDIFF
# define SCNoPTRDIFF UNIC_SCNoPTRDIFF
# define SCNuPTRDIFF UNIC_SCNuPTRDIFF
# define SCNxPTRDIFF UNIC_SCNxPTRDIFF
# define SCNXPTRDIFF UNIC_SCNXPTRDIFF
#endif

#endif /* UNIC_FALLBACK */

#endif
