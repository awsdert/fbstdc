#if !defined( UNIC_INT_FAST64_C ) && UNIC_CAN_MAP_AT_LEAST_64BIT
#include "uint_fast64_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT_FAST64_MAX
# define UNIC_INT_FAST64_MAX INT_FAST64_MAX
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_FAST64_MAX UNIC_INT_MAX
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_FAST64_MAX UNIC_LONG_MAX
#else
# define UNIC_INT_FAST64_MAX UNIC_LLONG_MAX
#endif

#ifdef INT_FAST64_MIN
# define UNIC_INT_FAST64_MIN INT_FAST64_MIN
#else
# define UNIC_INT_FAST64_MIN UNIC___MIN(UNIC_INT_FAST64_MAX)
#endif

#ifdef INT_FAST64_END_BIT
# define UNIC_INT_FAST64_END_BIT INT_FAST64_END_BIT
#else
# define UNIC_INT_FAST64_END_BIT UNIC_INT_FAST64_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT_FAST64 SIZEOF_INT_FAST64
#else
# define UNIC_SIZEOF_INT_FAST64 SIZEOF_BY_IMAX(INT_FAST64_MAX)
#endif

#ifdef INT_FAST64_WIDTH
# define UNIC_INT_FAST64_WIDTH INT_FAST64_WIDTH
#else
# define UNIC_INT_FAST64_WIDTH (UNIC_SIZEOF_INT_FAST64 * UNIC_CHAR_BIT)
#endif

#ifdef INT_FAST64_TYPE
# define UNIC_INT_FAST64_TYPE INT_FAST64_TYPE
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_FAST64_TYPE signed int
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_FAST64_TYPE signed long int
#else
# define UNIC_INT_FAST64_TYPE signed long long int
#endif

typedef UNIC_INT_FAST64_TYPE unic_int_fast64_t;

#ifdef INT_FAST64_C
# define UNIC_INT_FAST64_C INT_FAST64_C
#elif UNIC_INT_WIDTH >= 64
# define UNIC_INT_FAST64_C(VAL) VAL
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_INT_FAST64_C(VAL) VAL##L
#else
# define UNIC_INT_FAST64_C(VAL) VAL##LL
#endif

#ifdef PRI_INT_FAST64
# define UNIC_PRI_INT_FAST64 PRI_INT_FAST64
#elif UNIC_INT_WIDTH >= 64
# define UNIC_PRI_INT_FAST64
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_PRI_INT_FAST64 "l"
#else
# define UNIC_PRI_INT_FAST64 "ll"
#endif

#ifdef SCN_INT_FAST64
# define UNIC_SCN_INT_FAST64 SCN_INT_FAST64
#elif UNIC_INT_WIDTH >= 64
# define UNIC_SCN_INT_FAST64
#elif UNIC_LONG_WIDTH >= 64
# define UNIC_SCN_INT_FAST64 "l"
#else
# define UNIC_SCN_INT_FAST64 "ll"
#endif

#define UNIC_PRIiINT_FAST64 UNIC_PRI_INT_FAST64 "i"
#define UNIC_PRIoINT_FAST64 UNIC_PRI_INT_FAST64 "o"
#define UNIC_PRIuINT_FAST64 UNIC_PRI_INT_FAST64 "u"
#define UNIC_PRIxINT_FAST64 UNIC_PRI_INT_FAST64 "x"
#define UNIC_PRIXINT_FAST64 UNIC_PRI_INT_FAST64 "X"

#define UNIC_SCNiINT_FAST64 UNIC_SCN_INT_FAST64 "i"
#define UNIC_SCNoINT_FAST64 UNIC_SCN_INT_FAST64 "o"
#define UNIC_SCNuINT_FAST64 UNIC_SCN_INT_FAST64 "u"
#define UNIC_SCNxINT_FAST64 UNIC_SCN_INT_FAST64 "x"
#define UNIC_SCNXINT_FAST64 UNIC_SCN_INT_FAST64 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int_fast64_t_h
#  define ___int_int_fast64_t_h
# ifndef __int_fast64_t_defined__
#  define __int_fast64_t_defined__
# ifndef __int_fast64_t_defined
#  define __int_fast64_t_defined
# ifndef _int_fast64_t_defined_
#  define _int_fast64_t_defined_
# ifndef _int_fast64_t_defined
#  define _int_fast64_t_defined
# ifndef __INT_FAST64_T_DEFINED__
#  define __INT_FAST64_T_DEFINED__
# ifndef __INT_FAST64_T_DEFINED
#  define __INT_FAST64_T_DEFINED
# ifndef _INT_FAST64_T_DEFINED_
#  define _INT_FAST64_T_DEFINED_
# ifndef _INT_FAST64_T_DEFINED
#  define _INT_FAST64_T_DEFINED
# ifndef __int_fast64_t__
#  define __int_fast64_t__
# ifndef __int_fast64_t
/* Apparently __int_fast64_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int_fast64_t
#  endif
# ifndef _int_fast64_t_
#  define _int_fast64_t_
# ifndef _int_fast64_t
#  define _int_fast64_t
# ifndef __INT_FAST64_T__
#  define __INT_FAST64_T__
# ifndef __INT_FAST64_T
#  define __INT_FAST64_T
# ifndef _INT_FAST64_T_
#  define _INT_FAST64_T_
# ifndef _INT_FAST64_T
#  define _INT_FAST64_T
# ifndef __BSD_INT_FAST64_T_DEFINED__
#  define __BSD_INT_FAST64_T_DEFINED__
# ifndef __BSD_INT_FAST64_T_DEFINED
#  define __BSD_INT_FAST64_T_DEFINED
# ifndef _BSD_INT_FAST64_T_DEFINED_
#  define _BSD_INT_FAST64_T_DEFINED_
# ifndef _BSD_INT_FAST64_T_DEFINED
#  define _BSD_INT_FAST64_T_DEFINED
# ifndef __BSD_INT_FAST64_T__
#  define __BSD_INT_FAST64_T__
# ifndef __BSD_INT_FAST64_T
#  define __BSD_INT_FAST64_T
# ifndef _BSD_INT_FAST64_T_
#  define _BSD_INT_FAST64_T_
# ifndef _BSD_INT_FAST64_T
#  define _BSD_INT_FAST64_T
# ifndef __SYS_INT_FAST64_T_DEFINED__
#  define __SYS_INT_FAST64_T_DEFINED__
# ifndef __SYS_INT_FAST64_T_DEFINED
#  define __SYS_INT_FAST64_T_DEFINED
# ifndef _SYS_INT_FAST64_T_DEFINED_
#  define _SYS_INT_FAST64_T_DEFINED_
# ifndef _SYS_INT_FAST64_T_DEFINED
#  define _SYS_INT_FAST64_T_DEFINED
# ifndef __SYS_INT_FAST64_T__
#  define __SYS_INT_FAST64_T__
# ifndef __SYS_INT_FAST64_T
#  define __SYS_INT_FAST64_T
# ifndef _SYS_INT_FAST64_T_
#  define _SYS_INT_FAST64_T_
# ifndef _SYS_INT_FAST64_T
#  define _SYS_INT_FAST64_T
# ifndef __GCC_INT_FAST64_T_DEFINED__
#  define __GCC_INT_FAST64_T_DEFINED__
# ifndef __GCC_INT_FAST64_T_DEFINED
#  define __GCC_INT_FAST64_T_DEFINED
# ifndef _GCC_INT_FAST64_T_DEFINED_
#  define _GCC_INT_FAST64_T_DEFINED_
# ifndef _GCC_INT_FAST64_T_DEFINED
#  define _GCC_INT_FAST64_T_DEFINED
# ifndef __GCC_INT_FAST64_T__
#  define __GCC_INT_FAST64_T__
# ifndef __GCC_INT_FAST64_T
#  define __GCC_INT_FAST64_T
# ifndef _GCC_INT_FAST64_T_
#  define _GCC_INT_FAST64_T_
# ifndef _GCC_INT_FAST64_T
#  define _GCC_INT_FAST64_T
# ifndef __INT_FAST64T_DEFINED__
#  define __INT_FAST64T_DEFINED__
# ifndef __INT_FAST64T_DEFINED
#  define __INT_FAST64T_DEFINED
# ifndef _INT_FAST64T_DEFINED_
#  define _INT_FAST64T_DEFINED_
# ifndef _INT_FAST64T_DEFINED
#  define _INT_FAST64T_DEFINED
# ifndef __INT_FAST64T__
#  define __INT_FAST64T__
# ifndef __INT_FAST64T
#  define __INT_FAST64T
# ifndef _INT_FAST64T_
#  define _INT_FAST64T_
# ifndef _INT_FAST64T
#  define _INT_FAST64T
# ifndef __T_INT_FAST64__
#  define __T_INT_FAST64__
# ifndef __T_INT_FAST64
#  define __T_INT_FAST64
# ifndef _T_INT_FAST64_
#  define _T_INT_FAST64_
# ifndef _T_INT_FAST64
#  define _T_INT_FAST64
typedef unic_int_fast64_t int_fast64_t;
typedef unic_uint_fast64_t uint_fast64_t;
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

#ifndef INT_FAST64_MAX
# define INT_FAST64_MAX UNIC_INT_FAST64_MAX
#endif

#ifndef INT_FAST64_MIN
# define INT_FAST64_MIN UNIC_INT_FAST64_MIN
#endif

#ifndef SIZEOF_INT_FAST64
# define SIZEOF_INT_FAST64 UNIC_SIZEOF_INT_FAST64
#endif

#ifndef INT_FAST64_WIDTH
# define INT_FAST64_WIDTH UNIC_INT_FAST64_WIDTH
#endif

#ifndef INT_FAST64_TYPE
# define INT_FAST64_TYPE UNIC_INT_FAST64_TYPE
#endif

#ifndef INT_FAST64_C
# define INT_FAST64_C UNIC_INT_FAST64_C
#endif

#ifndef PRIxINT_FAST64
# define PRIiINT_FAST64 UNIC_PRIiINT_FAST64
# define PRIoINT_FAST64 UNIC_PRIoINT_FAST64
# define PRIuINT_FAST64 UNIC_PRIuINT_FAST64
# define PRIxINT_FAST64 UNIC_PRIxINT_FAST64
# define PRIXINT_FAST64 UNIC_PRIXINT_FAST64
#endif

#ifndef SCNxINT_FAST64
# define SCNiINT_FAST64 UNIC_SCNiINT_FAST64
# define SCNoINT_FAST64 UNIC_SCNoINT_FAST64
# define SCNuINT_FAST64 UNIC_SCNuINT_FAST64
# define SCNxINT_FAST64 UNIC_SCNxINT_FAST64
# define SCNXINT_FAST64 UNIC_SCNXINT_FAST64
#endif

#endif /* UNIC_FALLBACK */

#endif
