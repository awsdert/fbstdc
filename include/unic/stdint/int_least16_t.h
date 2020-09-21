#if !defined( UNIC_INT_LEAST16_C ) && UNIC_CAN_MAP_AT_LEAST_16BIT
#include "uint_least16_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT_LEAST16_MAX
# define UNIC_INT_LEAST16_MAX INT_LEAST16_MAX
#else
# define UNIC_INT_LEAST16_MAX UNIC_SHRT_MAX
#endif

#ifdef INT_LEAST16_MIN
# define UNIC_INT_LEAST16_MIN INT_LEAST16_MIN
#else
# define UNIC_INT_LEAST16_MIN UNIC___MIN(UNIC_INT_LEAST16_MAX)
#endif

#ifdef INT_LEAST16_END_BIT
# define UNIC_INT_LEAST16_END_BIT INT_LEAST16_END_BIT
#else
# define UNIC_INT_LEAST16_END_BIT UNIC_INT_LEAST16_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT_LEAST16 SIZEOF_INT_LEAST16
#else
# define UNIC_SIZEOF_INT_LEAST16 SIZEOF_BY_IMAX(INT_LEAST16_MAX)
#endif

#ifdef INT_LEAST16_WIDTH
# define UNIC_INT_LEAST16_WIDTH INT_LEAST16_WIDTH
#else
# define UNIC_INT_LEAST16_WIDTH (UNIC_SIZEOF_INT_LEAST16 * UNIC_CHAR_BIT)
#endif

#ifdef INT_LEAST16_TYPE
# define UNIC_INT_LEAST16_TYPE INT_LEAST16_TYPE
#else
# define UNIC_INT_LEAST16_TYPE signed short int
#endif

typedef UNIC_INT_LEAST16_TYPE unic_int_least16_t;

#ifdef INT_LEAST16_C
# define UNIC_INT_LEAST16_C INT_LEAST16_C
#elif UNIC_INT_LEAST16_MAX == UNIC_INT_MAX
#else
# define UNIC_INT_LEAST16_C(VAL) VAL
#endif

#ifdef PRI_INT_LEAST16
# define UNIC_PRI_INT_LEAST16 PRI_INT_LEAST16
#else
# define UNIC_PRI_INT_LEAST16
#endif

#ifdef SCN_INT_LEAST16
# define UNIC_SCN_INT_LEAST16 SCN_INT_LEAST16
#else
# define UNIC_SCN_INT_LEAST16 "h"
#endif

#define UNIC_PRIiINT_LEAST16 UNIC_PRI_INT_LEAST16 "i"
#define UNIC_PRIoINT_LEAST16 UNIC_PRI_INT_LEAST16 "o"
#define UNIC_PRIuINT_LEAST16 UNIC_PRI_INT_LEAST16 "u"
#define UNIC_PRIxINT_LEAST16 UNIC_PRI_INT_LEAST16 "x"
#define UNIC_PRIXINT_LEAST16 UNIC_PRI_INT_LEAST16 "X"

#define UNIC_SCNiINT_LEAST16 UNIC_SCN_INT_LEAST16 "i"
#define UNIC_SCNoINT_LEAST16 UNIC_SCN_INT_LEAST16 "o"
#define UNIC_SCNuINT_LEAST16 UNIC_SCN_INT_LEAST16 "u"
#define UNIC_SCNxINT_LEAST16 UNIC_SCN_INT_LEAST16 "x"
#define UNIC_SCNXINT_LEAST16 UNIC_SCN_INT_LEAST16 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int_least16_t_h
#  define ___int_int_least16_t_h
# ifndef __int_least16_t_defined__
#  define __int_least16_t_defined__
# ifndef __int_least16_t_defined
#  define __int_least16_t_defined
# ifndef _int_least16_t_defined_
#  define _int_least16_t_defined_
# ifndef _int_least16_t_defined
#  define _int_least16_t_defined
# ifndef __INT_LEAST16_T_DEFINED__
#  define __INT_LEAST16_T_DEFINED__
# ifndef __INT_LEAST16_T_DEFINED
#  define __INT_LEAST16_T_DEFINED
# ifndef _INT_LEAST16_T_DEFINED_
#  define _INT_LEAST16_T_DEFINED_
# ifndef _INT_LEAST16_T_DEFINED
#  define _INT_LEAST16_T_DEFINED
# ifndef __int_least16_t__
#  define __int_least16_t__
# ifndef __int_least16_t
/* Apparently __int_least16_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int_least16_t
#  endif
# ifndef _int_least16_t_
#  define _int_least16_t_
# ifndef _int_least16_t
#  define _int_least16_t
# ifndef __INT_LEAST16_T__
#  define __INT_LEAST16_T__
# ifndef __INT_LEAST16_T
#  define __INT_LEAST16_T
# ifndef _INT_LEAST16_T_
#  define _INT_LEAST16_T_
# ifndef _INT_LEAST16_T
#  define _INT_LEAST16_T
# ifndef __BSD_INT_LEAST16_T_DEFINED__
#  define __BSD_INT_LEAST16_T_DEFINED__
# ifndef __BSD_INT_LEAST16_T_DEFINED
#  define __BSD_INT_LEAST16_T_DEFINED
# ifndef _BSD_INT_LEAST16_T_DEFINED_
#  define _BSD_INT_LEAST16_T_DEFINED_
# ifndef _BSD_INT_LEAST16_T_DEFINED
#  define _BSD_INT_LEAST16_T_DEFINED
# ifndef __BSD_INT_LEAST16_T__
#  define __BSD_INT_LEAST16_T__
# ifndef __BSD_INT_LEAST16_T
#  define __BSD_INT_LEAST16_T
# ifndef _BSD_INT_LEAST16_T_
#  define _BSD_INT_LEAST16_T_
# ifndef _BSD_INT_LEAST16_T
#  define _BSD_INT_LEAST16_T
# ifndef __SYS_INT_LEAST16_T_DEFINED__
#  define __SYS_INT_LEAST16_T_DEFINED__
# ifndef __SYS_INT_LEAST16_T_DEFINED
#  define __SYS_INT_LEAST16_T_DEFINED
# ifndef _SYS_INT_LEAST16_T_DEFINED_
#  define _SYS_INT_LEAST16_T_DEFINED_
# ifndef _SYS_INT_LEAST16_T_DEFINED
#  define _SYS_INT_LEAST16_T_DEFINED
# ifndef __SYS_INT_LEAST16_T__
#  define __SYS_INT_LEAST16_T__
# ifndef __SYS_INT_LEAST16_T
#  define __SYS_INT_LEAST16_T
# ifndef _SYS_INT_LEAST16_T_
#  define _SYS_INT_LEAST16_T_
# ifndef _SYS_INT_LEAST16_T
#  define _SYS_INT_LEAST16_T
# ifndef __GCC_INT_LEAST16_T_DEFINED__
#  define __GCC_INT_LEAST16_T_DEFINED__
# ifndef __GCC_INT_LEAST16_T_DEFINED
#  define __GCC_INT_LEAST16_T_DEFINED
# ifndef _GCC_INT_LEAST16_T_DEFINED_
#  define _GCC_INT_LEAST16_T_DEFINED_
# ifndef _GCC_INT_LEAST16_T_DEFINED
#  define _GCC_INT_LEAST16_T_DEFINED
# ifndef __GCC_INT_LEAST16_T__
#  define __GCC_INT_LEAST16_T__
# ifndef __GCC_INT_LEAST16_T
#  define __GCC_INT_LEAST16_T
# ifndef _GCC_INT_LEAST16_T_
#  define _GCC_INT_LEAST16_T_
# ifndef _GCC_INT_LEAST16_T
#  define _GCC_INT_LEAST16_T
# ifndef __INT_LEAST16T_DEFINED__
#  define __INT_LEAST16T_DEFINED__
# ifndef __INT_LEAST16T_DEFINED
#  define __INT_LEAST16T_DEFINED
# ifndef _INT_LEAST16T_DEFINED_
#  define _INT_LEAST16T_DEFINED_
# ifndef _INT_LEAST16T_DEFINED
#  define _INT_LEAST16T_DEFINED
# ifndef __INT_LEAST16T__
#  define __INT_LEAST16T__
# ifndef __INT_LEAST16T
#  define __INT_LEAST16T
# ifndef _INT_LEAST16T_
#  define _INT_LEAST16T_
# ifndef _INT_LEAST16T
#  define _INT_LEAST16T
# ifndef __T_INT_LEAST16__
#  define __T_INT_LEAST16__
# ifndef __T_INT_LEAST16
#  define __T_INT_LEAST16
# ifndef _T_INT_LEAST16_
#  define _T_INT_LEAST16_
# ifndef _T_INT_LEAST16
#  define _T_INT_LEAST16
typedef unic_int_least16_t int_least16_t;
typedef unic_uint_least16_t uint_least16_t;
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

#ifndef INT_LEAST16_MAX
# define INT_LEAST16_MAX UNIC_INT_LEAST16_MAX
#endif

#ifndef INT_LEAST16_MIN
# define INT_LEAST16_MIN UNIC_INT_LEAST16_MIN
#endif

#ifndef SIZEOF_INT_LEAST16
# define SIZEOF_INT_LEAST16 UNIC_SIZEOF_INT_LEAST16
#endif

#ifndef INT_LEAST16_WIDTH
# define INT_LEAST16_WIDTH UNIC_INT_LEAST16_WIDTH
#endif

#ifndef INT_LEAST16_TYPE
# define INT_LEAST16_TYPE UNIC_INT_LEAST16_TYPE
#endif

#ifndef INT_LEAST16_C
# define INT_LEAST16_C UNIC_INT_LEAST16_C
#endif

#ifndef PRIxINT_LEAST16
# define PRIiINT_LEAST16 UNIC_PRIiINT_LEAST16
# define PRIoINT_LEAST16 UNIC_PRIoINT_LEAST16
# define PRIuINT_LEAST16 UNIC_PRIuINT_LEAST16
# define PRIxINT_LEAST16 UNIC_PRIxINT_LEAST16
# define PRIXINT_LEAST16 UNIC_PRIXINT_LEAST16
#endif

#ifndef SCNxINT_LEAST16
# define SCNiINT_LEAST16 UNIC_SCNiINT_LEAST16
# define SCNoINT_LEAST16 UNIC_SCNoINT_LEAST16
# define SCNuINT_LEAST16 UNIC_SCNuINT_LEAST16
# define SCNxINT_LEAST16 UNIC_SCNxINT_LEAST16
# define SCNXINT_LEAST16 UNIC_SCNXINT_LEAST16
#endif

#endif /* UNIC_FALLBACK */

#endif
