#if !defined( UNIC_INT_LEAST64_C ) && UNIC_CAN_MAP_AT_LEAST_64BIT
#include "uint_least64_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT_LEAST64_MAX
# define UNIC_INT_LEAST64_MAX INT_LEAST64_MAX
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_LEAST64_MAX UNIC_INT_MAX
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_LEAST64_MAX UNIC_LONG_MAX
#else
# define UNIC_INT_LEAST64_MAX UNIC_LLONG_MAX
#endif

#ifdef INT_LEAST64_MIN
# define UNIC_INT_LEAST64_MIN INT_LEAST64_MIN
#else
# define UNIC_INT_LEAST64_MIN UNIC___MIN(UNIC_INT_LEAST64_MAX)
#endif

#ifdef INT_LEAST64_END_BIT
# define UNIC_INT_LEAST64_END_BIT INT_LEAST64_END_BIT
#else
# define UNIC_INT_LEAST64_END_BIT UNIC_INT_LEAST64_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT_LEAST64 SIZEOF_INT_LEAST64
#else
# define UNIC_SIZEOF_INT_LEAST64 SIZEOF_BY_IMAX(INT_LEAST64_MAX)
#endif

#ifdef INT_LEAST64_WIDTH
# define UNIC_INT_LEAST64_WIDTH INT_LEAST64_WIDTH
#else
# define UNIC_INT_LEAST64_WIDTH (UNIC_SIZEOF_INT_LEAST64 * UNIC_CHAR_BIT)
#endif

#ifdef INT_LEAST64_TYPE
# define UNIC_INT_LEAST64_TYPE INT_LEAST64_TYPE
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_LEAST64_TYPE signed int
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_LEAST64_TYPE signed long int
#else
# define UNIC_INT_LEAST64_TYPE signed long long int
#endif

typedef UNIC_INT_LEAST64_TYPE unic_int_least64_t;

#ifdef INT_LEAST64_C
# define UNIC_INT_LEAST64_C INT_LEAST64_C
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_LEAST64_C(VAL) VAL
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_LEAST64_C(VAL) VAL##L
#else
# define UNIC_INT_LEAST64_C(VAL) VAL##LL
#endif

#ifdef PRI_INT_LEAST64
# define UNIC_PRI_INT_LEAST64 PRI_INT_LEAST64
#elif UNIC_INT_WIDTH >= 64
# define UNIC_PRI_INT_LEAST64
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_PRI_INT_LEAST64 "l"
#else
# define UNIC_PRI_INT_LEAST64 "ll"
#endif

#ifdef SCN_INT_LEAST64
# define UNIC_SCN_INT_LEAST64 SCN_INT_LEAST64
#elif UNIC_INT_WIDTH >= 64
# define UNIC_SCN_INT_LEAST64
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_SCN_INT_LEAST64 "l"
#else
# define UNIC_SCN_INT_LEAST64 "ll"
#endif

#define UNIC_PRIiINT_LEAST64 UNIC_PRI_INT_LEAST64 "i"
#define UNIC_PRIoINT_LEAST64 UNIC_PRI_INT_LEAST64 "o"
#define UNIC_PRIuINT_LEAST64 UNIC_PRI_INT_LEAST64 "u"
#define UNIC_PRIxINT_LEAST64 UNIC_PRI_INT_LEAST64 "x"
#define UNIC_PRIXINT_LEAST64 UNIC_PRI_INT_LEAST64 "X"

#define UNIC_SCNiINT_LEAST64 UNIC_SCN_INT_LEAST64 "i"
#define UNIC_SCNoINT_LEAST64 UNIC_SCN_INT_LEAST64 "o"
#define UNIC_SCNuINT_LEAST64 UNIC_SCN_INT_LEAST64 "u"
#define UNIC_SCNxINT_LEAST64 UNIC_SCN_INT_LEAST64 "x"
#define UNIC_SCNXINT_LEAST64 UNIC_SCN_INT_LEAST64 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int_least64_t_h
#  define ___int_int_least64_t_h
# ifndef __int_least64_t_defined__
#  define __int_least64_t_defined__
# ifndef __int_least64_t_defined
#  define __int_least64_t_defined
# ifndef _int_least64_t_defined_
#  define _int_least64_t_defined_
# ifndef _int_least64_t_defined
#  define _int_least64_t_defined
# ifndef __INT_LEAST64_T_DEFINED__
#  define __INT_LEAST64_T_DEFINED__
# ifndef __INT_LEAST64_T_DEFINED
#  define __INT_LEAST64_T_DEFINED
# ifndef _INT_LEAST64_T_DEFINED_
#  define _INT_LEAST64_T_DEFINED_
# ifndef _INT_LEAST64_T_DEFINED
#  define _INT_LEAST64_T_DEFINED
# ifndef __int_least64_t__
#  define __int_least64_t__
# ifndef __int_least64_t
/* Apparently __int_least64_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int_least64_t
#  endif
# ifndef _int_least64_t_
#  define _int_least64_t_
# ifndef _int_least64_t
#  define _int_least64_t
# ifndef __INT_LEAST64_T__
#  define __INT_LEAST64_T__
# ifndef __INT_LEAST64_T
#  define __INT_LEAST64_T
# ifndef _INT_LEAST64_T_
#  define _INT_LEAST64_T_
# ifndef _INT_LEAST64_T
#  define _INT_LEAST64_T
# ifndef __BSD_INT_LEAST64_T_DEFINED__
#  define __BSD_INT_LEAST64_T_DEFINED__
# ifndef __BSD_INT_LEAST64_T_DEFINED
#  define __BSD_INT_LEAST64_T_DEFINED
# ifndef _BSD_INT_LEAST64_T_DEFINED_
#  define _BSD_INT_LEAST64_T_DEFINED_
# ifndef _BSD_INT_LEAST64_T_DEFINED
#  define _BSD_INT_LEAST64_T_DEFINED
# ifndef __BSD_INT_LEAST64_T__
#  define __BSD_INT_LEAST64_T__
# ifndef __BSD_INT_LEAST64_T
#  define __BSD_INT_LEAST64_T
# ifndef _BSD_INT_LEAST64_T_
#  define _BSD_INT_LEAST64_T_
# ifndef _BSD_INT_LEAST64_T
#  define _BSD_INT_LEAST64_T
# ifndef __SYS_INT_LEAST64_T_DEFINED__
#  define __SYS_INT_LEAST64_T_DEFINED__
# ifndef __SYS_INT_LEAST64_T_DEFINED
#  define __SYS_INT_LEAST64_T_DEFINED
# ifndef _SYS_INT_LEAST64_T_DEFINED_
#  define _SYS_INT_LEAST64_T_DEFINED_
# ifndef _SYS_INT_LEAST64_T_DEFINED
#  define _SYS_INT_LEAST64_T_DEFINED
# ifndef __SYS_INT_LEAST64_T__
#  define __SYS_INT_LEAST64_T__
# ifndef __SYS_INT_LEAST64_T
#  define __SYS_INT_LEAST64_T
# ifndef _SYS_INT_LEAST64_T_
#  define _SYS_INT_LEAST64_T_
# ifndef _SYS_INT_LEAST64_T
#  define _SYS_INT_LEAST64_T
# ifndef __GCC_INT_LEAST64_T_DEFINED__
#  define __GCC_INT_LEAST64_T_DEFINED__
# ifndef __GCC_INT_LEAST64_T_DEFINED
#  define __GCC_INT_LEAST64_T_DEFINED
# ifndef _GCC_INT_LEAST64_T_DEFINED_
#  define _GCC_INT_LEAST64_T_DEFINED_
# ifndef _GCC_INT_LEAST64_T_DEFINED
#  define _GCC_INT_LEAST64_T_DEFINED
# ifndef __GCC_INT_LEAST64_T__
#  define __GCC_INT_LEAST64_T__
# ifndef __GCC_INT_LEAST64_T
#  define __GCC_INT_LEAST64_T
# ifndef _GCC_INT_LEAST64_T_
#  define _GCC_INT_LEAST64_T_
# ifndef _GCC_INT_LEAST64_T
#  define _GCC_INT_LEAST64_T
# ifndef __INT_LEAST64T_DEFINED__
#  define __INT_LEAST64T_DEFINED__
# ifndef __INT_LEAST64T_DEFINED
#  define __INT_LEAST64T_DEFINED
# ifndef _INT_LEAST64T_DEFINED_
#  define _INT_LEAST64T_DEFINED_
# ifndef _INT_LEAST64T_DEFINED
#  define _INT_LEAST64T_DEFINED
# ifndef __INT_LEAST64T__
#  define __INT_LEAST64T__
# ifndef __INT_LEAST64T
#  define __INT_LEAST64T
# ifndef _INT_LEAST64T_
#  define _INT_LEAST64T_
# ifndef _INT_LEAST64T
#  define _INT_LEAST64T
# ifndef __T_INT_LEAST64__
#  define __T_INT_LEAST64__
# ifndef __T_INT_LEAST64
#  define __T_INT_LEAST64
# ifndef _T_INT_LEAST64_
#  define _T_INT_LEAST64_
# ifndef _T_INT_LEAST64
#  define _T_INT_LEAST64
typedef unic_int_least64_t int_least64_t;
typedef unic_uint_least64_t uint_least64_t;
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

#ifndef INT_LEAST64_MAX
# define INT_LEAST64_MAX UNIC_INT_LEAST64_MAX
#endif

#ifndef INT_LEAST64_MIN
# define INT_LEAST64_MIN UNIC_INT_LEAST64_MIN
#endif

#ifndef SIZEOF_INT_LEAST64
# define SIZEOF_INT_LEAST64 UNIC_SIZEOF_INT_LEAST64
#endif

#ifndef INT_LEAST64_WIDTH
# define INT_LEAST64_WIDTH UNIC_INT_LEAST64_WIDTH
#endif

#ifndef INT_LEAST64_TYPE
# define INT_LEAST64_TYPE UNIC_INT_LEAST64_TYPE
#endif

#ifndef INT_LEAST64_C
# define INT_LEAST64_C UNIC_INT_LEAST64_C
#endif

#ifndef PRIxINT_LEAST64
# define PRIiINT_LEAST64 UNIC_PRIiINT_LEAST64
# define PRIoINT_LEAST64 UNIC_PRIoINT_LEAST64
# define PRIuINT_LEAST64 UNIC_PRIuINT_LEAST64
# define PRIxINT_LEAST64 UNIC_PRIxINT_LEAST64
# define PRIXINT_LEAST64 UNIC_PRIXINT_LEAST64
#endif

#ifndef SCNxINT_LEAST64
# define SCNiINT_LEAST64 UNIC_SCNiINT_LEAST64
# define SCNoINT_LEAST64 UNIC_SCNoINT_LEAST64
# define SCNuINT_LEAST64 UNIC_SCNuINT_LEAST64
# define SCNxINT_LEAST64 UNIC_SCNxINT_LEAST64
# define SCNXINT_LEAST64 UNIC_SCNXINT_LEAST64
#endif

#endif /* UNIC_FALLBACK */

#endif
