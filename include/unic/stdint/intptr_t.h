#ifndef UNIC_INTPTR_C
#include "uintptr_t.h"
#include "ssize_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INTPTR_MAX
# define UNIC_INTPTR_MAX INTPTR_MAX
#else
# define UNIC_INTPTR_MAX UNIC_SSIZE_MAX
#endif

#ifdef INTPTR_MIN
# define UNIC_INTPTR_MIN INTPTR_MIN
#else
# define UNIC_INTPTR_MIN UNIC___MIN(UNIC_INTPTR_MAX)
#endif

#ifdef INTPTR_END_BIT
# define UNIC_INTPTR_END_BIT INTPTR_END_BIT
#else
# define UNIC_INTPTR_END_BIT UNIC_INTPTR_MIN
#endif

#ifdef SIZEOF_INTPTR
# define UNIC_SIZEOF_INTPTR SIZEOF_INTPTR
#else
# define UNIC_SIZEOF_INTPTR UNIC_SIZEOF_BY_IMAX(INTPTR_MAX)
#endif

#ifdef INTPTR_WIDTH
# define UNIC_INTPTR_WIDTH INTPTR_WIDTH
#else
# define UNIC_INTPTR_WIDTH (UNIC_SIZEOF_INTPTR * UNIC_CHAR_BIT)
#endif

#ifdef INTPTR_TYPE
# define UNIC_INTPTR_TYPE INTPTR_TYPE
#elif UNIC_INTPTR_MAX == UNIC_INT_MAX
# define UNIC_INTPTR_TYPE int
#elif UNIC_INTPTR_MAX > UNIC_LONG_MAX
# define UNIC_INTPTR_TYPE long long int
#else
# define UNIC_INTPTR_TYPE long int
#endif

typedef UNIC_INTPTR_TYPE unic_intptr_t;

#ifdef INTPTR_C
# define UNIC_INTPTR_C INTPTR_C
#elif UNIC_INTPTR_MAX == UNIC_INT_MAX
# define UNIC_INTPTR_C(VAL) VAL
#elif UNIC_INTPTR_MAX > UNIC_LONG_MAX
# define UNIC_INTPTR_C(VAL) VAL##LL
#else
# define UNIC_INTPTR_C(VAL) VAL##L
#endif

#ifdef PRI_INTPTR
# define UNIC_PRI_INTPTR PRI_INTPTR
#elif UNIC_INTPTR_MAX == UNIC_INT_MAX
# define UNIC_PRI_INTPTR
#elif UNIC_INTPTR_MAX > UNIC_LONG_MAX
# define UNIC_PRI_INTPTR "ll"
#else
# define UNIC_PRI_INTPTR "l"
#endif

#ifdef SCN_INTPTR
# define UNIC_SCN_INTPTR SCN_INTPTR
#elif UNIC_INTPTR_MAX == UNIC_INT_MAX
# define UNIC_SCN_INTPTR
#elif UNIC_INTPTR_MAX > UNIC_LONG_MAX
# define UNIC_SCN_INTPTR "ll"
#else
# define UNIC_SCN_INTPTR "l"
#endif

#define UNIC_PRIiINTPTR UNIC_PRI_INTPTR "i"
#define UNIC_PRIoINTPTR UNIC_PRI_INTPTR "o"
#define UNIC_PRIuINTPTR UNIC_PRI_INTPTR "u"
#define UNIC_PRIxINTPTR UNIC_PRI_INTPTR "x"
#define UNIC_PRIXINTPTR UNIC_PRI_INTPTR "X"

#define UNIC_SCNiINTPTR UNIC_SCN_INTPTR "i"
#define UNIC_SCNoINTPTR UNIC_SCN_INTPTR "o"
#define UNIC_SCNuINTPTR UNIC_SCN_INTPTR "u"
#define UNIC_SCNxINTPTR UNIC_SCN_INTPTR "x"
#define UNIC_SCNXINTPTR UNIC_SCN_INTPTR "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_intptr_t_h
#  define ___int_intptr_t_h
# ifndef __intptr_t_defined__
#  define __intptr_t_defined__
# ifndef __intptr_t_defined
#  define __intptr_t_defined
# ifndef _intptr_t_defined_
#  define _intptr_t_defined_
# ifndef _intptr_t_defined
#  define _intptr_t_defined
# ifndef __INTPTR_T_DEFINED__
#  define __INTPTR_T_DEFINED__
# ifndef __INTPTR_T_DEFINED
#  define __INTPTR_T_DEFINED
# ifndef _INTPTR_T_DEFINED_
#  define _INTPTR_T_DEFINED_
# ifndef _INTPTR_T_DEFINED
#  define _INTPTR_T_DEFINED
# ifndef __intptr_t__
#  define __intptr_t__
# ifndef __intptr_t
/* Apparently __intptr_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __intptr_t
#  endif
# ifndef _intptr_t_
#  define _intptr_t_
# ifndef _intptr_t
#  define _intptr_t
# ifndef __INTPTR_T__
#  define __INTPTR_T__
# ifndef __INTPTR_T
#  define __INTPTR_T
# ifndef _INTPTR_T_
#  define _INTPTR_T_
# ifndef _INTPTR_T
#  define _INTPTR_T
# ifndef __BSD_INTPTR_T_DEFINED__
#  define __BSD_INTPTR_T_DEFINED__
# ifndef __BSD_INTPTR_T_DEFINED
#  define __BSD_INTPTR_T_DEFINED
# ifndef _BSD_INTPTR_T_DEFINED_
#  define _BSD_INTPTR_T_DEFINED_
# ifndef _BSD_INTPTR_T_DEFINED
#  define _BSD_INTPTR_T_DEFINED
# ifndef __BSD_INTPTR_T__
#  define __BSD_INTPTR_T__
# ifndef __BSD_INTPTR_T
#  define __BSD_INTPTR_T
# ifndef _BSD_INTPTR_T_
#  define _BSD_INTPTR_T_
# ifndef _BSD_INTPTR_T
#  define _BSD_INTPTR_T
# ifndef __SYS_INTPTR_T_DEFINED__
#  define __SYS_INTPTR_T_DEFINED__
# ifndef __SYS_INTPTR_T_DEFINED
#  define __SYS_INTPTR_T_DEFINED
# ifndef _SYS_INTPTR_T_DEFINED_
#  define _SYS_INTPTR_T_DEFINED_
# ifndef _SYS_INTPTR_T_DEFINED
#  define _SYS_INTPTR_T_DEFINED
# ifndef __SYS_INTPTR_T__
#  define __SYS_INTPTR_T__
# ifndef __SYS_INTPTR_T
#  define __SYS_INTPTR_T
# ifndef _SYS_INTPTR_T_
#  define _SYS_INTPTR_T_
# ifndef _SYS_INTPTR_T
#  define _SYS_INTPTR_T
# ifndef __GCC_INTPTR_T_DEFINED__
#  define __GCC_INTPTR_T_DEFINED__
# ifndef __GCC_INTPTR_T_DEFINED
#  define __GCC_INTPTR_T_DEFINED
# ifndef _GCC_INTPTR_T_DEFINED_
#  define _GCC_INTPTR_T_DEFINED_
# ifndef _GCC_INTPTR_T_DEFINED
#  define _GCC_INTPTR_T_DEFINED
# ifndef __GCC_INTPTR_T__
#  define __GCC_INTPTR_T__
# ifndef __GCC_INTPTR_T
#  define __GCC_INTPTR_T
# ifndef _GCC_INTPTR_T_
#  define _GCC_INTPTR_T_
# ifndef _GCC_INTPTR_T
#  define _GCC_INTPTR_T
# ifndef __INTPTRT_DEFINED__
#  define __INTPTRT_DEFINED__
# ifndef __INTPTRT_DEFINED
#  define __INTPTRT_DEFINED
# ifndef _INTPTRT_DEFINED_
#  define _INTPTRT_DEFINED_
# ifndef _INTPTRT_DEFINED
#  define _INTPTRT_DEFINED
# ifndef __INTPTRT__
#  define __INTPTRT__
# ifndef __INTPTRT
#  define __INTPTRT
# ifndef _INTPTRT_
#  define _INTPTRT_
# ifndef _INTPTRT
#  define _INTPTRT
# ifndef __T_INTPTR__
#  define __T_INTPTR__
# ifndef __T_INTPTR
#  define __T_INTPTR
# ifndef _T_INTPTR_
#  define _T_INTPTR_
# ifndef _T_INTPTR
#  define _T_INTPTR
typedef unic_intptr_t intptr_t;
typedef unic_uintptr_t uintptr_t;
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

#ifndef INTPTR_MAX
# define INTPTR_MAX UNIC_INTPTR_MAX
#endif

#ifndef INTPTR_MIN
# define INTPTR_MIN UNIC_INTPTR_MIN
#endif

#ifndef SIZEOF_INTPTR
# define SIZEOF_INTPTR UNIC_SIZEOF_INTPTR
#endif

#ifndef INTPTR_WIDTH
# define INTPTR_WIDTH UNIC_INTPTR_WIDTH
#endif

#ifndef INTPTR_TYPE
# define INTPTR_TYPE UNIC_INTPTR_TYPE
#endif

#ifndef INTPTR_C
# define INTPTR_C UNIC_INTPTR_C
#endif

#ifndef PRIxINTPTR
# define PRIiINTPTR UNIC_PRIiINTPTR
# define PRIoINTPTR UNIC_PRIoINTPTR
# define PRIuINTPTR UNIC_PRIuINTPTR
# define PRIxINTPTR UNIC_PRIxINTPTR
# define PRIXINTPTR UNIC_PRIXINTPTR
#endif

#ifndef SCNxINTPTR
# define SCNiINTPTR UNIC_SCNiINTPTR
# define SCNoINTPTR UNIC_SCNoINTPTR
# define SCNuINTPTR UNIC_SCNuINTPTR
# define SCNxINTPTR UNIC_SCNxINTPTR
# define SCNXINTPTR UNIC_SCNXINTPTR
#endif

#endif /* UNIC_FALLBACK */

#endif
