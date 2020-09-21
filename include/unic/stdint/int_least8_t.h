#if !defined( UNIC_INT_LEAST8_C ) && UNIC_CAN_MAP_AT_LEAST_8BIT
#include "uint_least8_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT_LEAST8_MAX
# define UNIC_INT_LEAST8_MAX INT_LEAST8_MAX
#else
# define UNIC_INT_LEAST8_MAX UNIC_SCHAR_MAX
#endif

#ifdef INT_LEAST8_MIN
# define UNIC_INT_LEAST8_MIN INT_LEAST8_MIN
#else
# define UNIC_INT_LEAST8_MIN UNIC___MIN(UNIC_INT_LEAST8_MAX)
#endif

#ifdef INT_LEAST8_END_BIT
# define UNIC_INT_LEAST8_END_BIT INT_LEAST8_END_BIT
#else
# define UNIC_INT_LEAST8_END_BIT UNIC_INT_LEAST8_MIN
#endif

#ifdef SIZEOF_INT_LEAST8
# define UNIC_SIZEOF_INT_LEAST8 SIZEOF_INT_LEAST8
#else
# define UNIC_SIZEOF_INT_LEAST8 UNIC_SIZEOF_BY_IMAX(INT_LEAST8_MAX)
#endif

#ifdef INT_LEAST8_WIDTH
# define UNIC_INT_LEAST8_WIDTH INT_LEAST8_WIDTH
#else
# define UNIC_INT_LEAST8_WIDTH (UNIC_SIZEOF_INT_LEAST8 * UNIC_CHAR_BIT)
#endif

#ifdef INT_LEAST8_TYPE
# define UNIC_INT_LEAST8_TYPE INT_LEAST8_TYPE
#else
# define UNIC_INT_LEAST8_TYPE signed char
#endif

typedef UNIC_INT_LEAST8_TYPE unic_int_least8_t;

#ifdef INT_LEAST8_C
# define UNIC_INT_LEAST8_C INT_LEAST8_C
#elif UNIC_INT_LEAST8_MAX == UNIC_INT_MAX
#else
# define UNIC_INT_LEAST8_C(VAL) VAL
#endif

#ifdef PRI_INT_LEAST8
# define UNIC_PRI_INT_LEAST8 PRI_INT_LEAST8
#else
# define UNIC_PRI_INT_LEAST8
#endif

#ifdef SCN_INT_LEAST8
# define UNIC_SCN_INT_LEAST8 SCN_INT_LEAST8
#else
# define UNIC_SCN_INT_LEAST8 "hh"
#endif

#define UNIC_PRIiINT_LEAST8 UNIC_PRI_INT_LEAST8 "i"
#define UNIC_PRIoINT_LEAST8 UNIC_PRI_INT_LEAST8 "o"
#define UNIC_PRIuINT_LEAST8 UNIC_PRI_INT_LEAST8 "u"
#define UNIC_PRIxINT_LEAST8 UNIC_PRI_INT_LEAST8 "x"
#define UNIC_PRIXINT_LEAST8 UNIC_PRI_INT_LEAST8 "X"

#define UNIC_SCNiINT_LEAST8 UNIC_SCN_INT_LEAST8 "i"
#define UNIC_SCNoINT_LEAST8 UNIC_SCN_INT_LEAST8 "o"
#define UNIC_SCNuINT_LEAST8 UNIC_SCN_INT_LEAST8 "u"
#define UNIC_SCNxINT_LEAST8 UNIC_SCN_INT_LEAST8 "x"
#define UNIC_SCNXINT_LEAST8 UNIC_SCN_INT_LEAST8 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int_least8_t_h
#  define ___int_int_least8_t_h
# ifndef __int_least8_t_defined__
#  define __int_least8_t_defined__
# ifndef __int_least8_t_defined
#  define __int_least8_t_defined
# ifndef _int_least8_t_defined_
#  define _int_least8_t_defined_
# ifndef _int_least8_t_defined
#  define _int_least8_t_defined
# ifndef __INT_LEAST8_T_DEFINED__
#  define __INT_LEAST8_T_DEFINED__
# ifndef __INT_LEAST8_T_DEFINED
#  define __INT_LEAST8_T_DEFINED
# ifndef _INT_LEAST8_T_DEFINED_
#  define _INT_LEAST8_T_DEFINED_
# ifndef _INT_LEAST8_T_DEFINED
#  define _INT_LEAST8_T_DEFINED
# ifndef __int_least8_t__
#  define __int_least8_t__
# ifndef __int_least8_t
/* Apparently __int_least8_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int_least8_t
#  endif
# ifndef _int_least8_t_
#  define _int_least8_t_
# ifndef _int_least8_t
#  define _int_least8_t
# ifndef __INT_LEAST8_T__
#  define __INT_LEAST8_T__
# ifndef __INT_LEAST8_T
#  define __INT_LEAST8_T
# ifndef _INT_LEAST8_T_
#  define _INT_LEAST8_T_
# ifndef _INT_LEAST8_T
#  define _INT_LEAST8_T
# ifndef __BSD_INT_LEAST8_T_DEFINED__
#  define __BSD_INT_LEAST8_T_DEFINED__
# ifndef __BSD_INT_LEAST8_T_DEFINED
#  define __BSD_INT_LEAST8_T_DEFINED
# ifndef _BSD_INT_LEAST8_T_DEFINED_
#  define _BSD_INT_LEAST8_T_DEFINED_
# ifndef _BSD_INT_LEAST8_T_DEFINED
#  define _BSD_INT_LEAST8_T_DEFINED
# ifndef __BSD_INT_LEAST8_T__
#  define __BSD_INT_LEAST8_T__
# ifndef __BSD_INT_LEAST8_T
#  define __BSD_INT_LEAST8_T
# ifndef _BSD_INT_LEAST8_T_
#  define _BSD_INT_LEAST8_T_
# ifndef _BSD_INT_LEAST8_T
#  define _BSD_INT_LEAST8_T
# ifndef __SYS_INT_LEAST8_T_DEFINED__
#  define __SYS_INT_LEAST8_T_DEFINED__
# ifndef __SYS_INT_LEAST8_T_DEFINED
#  define __SYS_INT_LEAST8_T_DEFINED
# ifndef _SYS_INT_LEAST8_T_DEFINED_
#  define _SYS_INT_LEAST8_T_DEFINED_
# ifndef _SYS_INT_LEAST8_T_DEFINED
#  define _SYS_INT_LEAST8_T_DEFINED
# ifndef __SYS_INT_LEAST8_T__
#  define __SYS_INT_LEAST8_T__
# ifndef __SYS_INT_LEAST8_T
#  define __SYS_INT_LEAST8_T
# ifndef _SYS_INT_LEAST8_T_
#  define _SYS_INT_LEAST8_T_
# ifndef _SYS_INT_LEAST8_T
#  define _SYS_INT_LEAST8_T
# ifndef __GCC_INT_LEAST8_T_DEFINED__
#  define __GCC_INT_LEAST8_T_DEFINED__
# ifndef __GCC_INT_LEAST8_T_DEFINED
#  define __GCC_INT_LEAST8_T_DEFINED
# ifndef _GCC_INT_LEAST8_T_DEFINED_
#  define _GCC_INT_LEAST8_T_DEFINED_
# ifndef _GCC_INT_LEAST8_T_DEFINED
#  define _GCC_INT_LEAST8_T_DEFINED
# ifndef __GCC_INT_LEAST8_T__
#  define __GCC_INT_LEAST8_T__
# ifndef __GCC_INT_LEAST8_T
#  define __GCC_INT_LEAST8_T
# ifndef _GCC_INT_LEAST8_T_
#  define _GCC_INT_LEAST8_T_
# ifndef _GCC_INT_LEAST8_T
#  define _GCC_INT_LEAST8_T
# ifndef __INT_LEAST8T_DEFINED__
#  define __INT_LEAST8T_DEFINED__
# ifndef __INT_LEAST8T_DEFINED
#  define __INT_LEAST8T_DEFINED
# ifndef _INT_LEAST8T_DEFINED_
#  define _INT_LEAST8T_DEFINED_
# ifndef _INT_LEAST8T_DEFINED
#  define _INT_LEAST8T_DEFINED
# ifndef __INT_LEAST8T__
#  define __INT_LEAST8T__
# ifndef __INT_LEAST8T
#  define __INT_LEAST8T
# ifndef _INT_LEAST8T_
#  define _INT_LEAST8T_
# ifndef _INT_LEAST8T
#  define _INT_LEAST8T
# ifndef __T_INT_LEAST8__
#  define __T_INT_LEAST8__
# ifndef __T_INT_LEAST8
#  define __T_INT_LEAST8
# ifndef _T_INT_LEAST8_
#  define _T_INT_LEAST8_
# ifndef _T_INT_LEAST8
#  define _T_INT_LEAST8
typedef unic_int_least8_t int_least8_t;
typedef unic_uint_least8_t uint_least8_t;
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

#ifndef INT_LEAST8_MAX
# define INT_LEAST8_MAX UNIC_INT_LEAST8_MAX
#endif

#ifndef INT_LEAST8_MIN
# define INT_LEAST8_MIN UNIC_INT_LEAST8_MIN
#endif

#ifndef SIZEOF_INT_LEAST8
# define SIZEOF_INT_LEAST8 UNIC_SIZEOF_INT_LEAST8
#endif

#ifndef INT_LEAST8_WIDTH
# define INT_LEAST8_WIDTH UNIC_INT_LEAST8_WIDTH
#endif

#ifndef INT_LEAST8_TYPE
# define INT_LEAST8_TYPE UNIC_INT_LEAST8_TYPE
#endif

#ifndef INT_LEAST8_C
# define INT_LEAST8_C UNIC_INT_LEAST8_C
#endif

#ifndef PRIxINT_LEAST8
# define PRIiINT_LEAST8 UNIC_PRIiINT_LEAST8
# define PRIoINT_LEAST8 UNIC_PRIoINT_LEAST8
# define PRIuINT_LEAST8 UNIC_PRIuINT_LEAST8
# define PRIxINT_LEAST8 UNIC_PRIxINT_LEAST8
# define PRIXINT_LEAST8 UNIC_PRIXINT_LEAST8
#endif

#ifndef SCNxINT_LEAST8
# define SCNiINT_LEAST8 UNIC_SCNiINT_LEAST8
# define SCNoINT_LEAST8 UNIC_SCNoINT_LEAST8
# define SCNuINT_LEAST8 UNIC_SCNuINT_LEAST8
# define SCNxINT_LEAST8 UNIC_SCNxINT_LEAST8
# define SCNXINT_LEAST8 UNIC_SCNXINT_LEAST8
#endif

#endif /* UNIC_FALLBACK */

#endif
