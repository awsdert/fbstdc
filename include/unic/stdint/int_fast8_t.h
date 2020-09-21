#if !defined( UNIC_INT_FAST8_C ) && UNIC_CHAR_BIT >= 8
#include "uint_fast8_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT_FAST8_MAX
# define UNIC_INT_FAST8_MAX INT_FAST8_MAX
#else
# define UNIC_INT_FAST8_MAX UNIC_SCHAR_MAX
#endif

#ifdef INT_FAST8_MIN
# define UNIC_INT_FAST8_MIN INT_FAST8_MIN
#else
# define UNIC_INT_FAST8_MIN UNIC___MIN(UNIC_INT_FAST8_MAX)
#endif

#ifdef INT_FAST8_END_BIT
# define UNIC_INT_FAST8_END_BIT INT_FAST8_END_BIT
#else
# define UNIC_INT_FAST8_END_BIT UNIC_INT_FAST8_MIN
#endif

#ifdef SIZEOF_INT_FAST8
# define UNIC_SIZEOF_INT_FAST8 SIZEOF_INT_FAST8
#else
# define UNIC_SIZEOF_INT_FAST8 UNIC_SIZEOF_BY_IMAX(INT_FAST8_MAX)
#endif

#ifdef INT_FAST8_WIDTH
# define UNIC_INT_FAST8_WIDTH INT_FAST8_WIDTH
#else
# define UNIC_INT_FAST8_WIDTH (UNIC_SIZEOF_INT_FAST8 * UNIC_CHAR_BIT)
#endif

#ifdef INT_FAST8_TYPE
# define UNIC_INT_FAST8_TYPE INT_FAST8_TYPE
#else
# define UNIC_INT_FAST8_TYPE signed char
#endif

typedef UNIC_INT_FAST8_TYPE unic_int_fast8_t;

#ifdef INT_FAST8_C
# define UNIC_INT_FAST8_C INT_FAST8_C
#elif UNIC_INT_FAST8_MAX == UNIC_INT_MAX
#else
# define UNIC_INT_FAST8_C(VAL) VAL
#endif

#ifdef PRI_INT_FAST8
# define UNIC_PRI_INT_FAST8 PRI_INT_FAST8
#else
# define UNIC_PRI_INT_FAST8
#endif

#ifdef SCN_INT_FAST8
# define UNIC_SCN_INT_FAST8 SCN_INT_FAST8
#else
# define UNIC_SCN_INT_FAST8 "hh"
#endif

#define UNIC_PRIiINT_FAST8 UNIC_PRI_INT_FAST8 "i"
#define UNIC_PRIoINT_FAST8 UNIC_PRI_INT_FAST8 "o"
#define UNIC_PRIuINT_FAST8 UNIC_PRI_INT_FAST8 "u"
#define UNIC_PRIxINT_FAST8 UNIC_PRI_INT_FAST8 "x"
#define UNIC_PRIXINT_FAST8 UNIC_PRI_INT_FAST8 "X"

#define UNIC_SCNiINT_FAST8 UNIC_SCN_INT_FAST8 "i"
#define UNIC_SCNoINT_FAST8 UNIC_SCN_INT_FAST8 "o"
#define UNIC_SCNuINT_FAST8 UNIC_SCN_INT_FAST8 "u"
#define UNIC_SCNxINT_FAST8 UNIC_SCN_INT_FAST8 "x"
#define UNIC_SCNXINT_FAST8 UNIC_SCN_INT_FAST8 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int_fast8_t_h
#  define ___int_int_fast8_t_h
# ifndef __int_fast8_t_defined__
#  define __int_fast8_t_defined__
# ifndef __int_fast8_t_defined
#  define __int_fast8_t_defined
# ifndef _int_fast8_t_defined_
#  define _int_fast8_t_defined_
# ifndef _int_fast8_t_defined
#  define _int_fast8_t_defined
# ifndef __INT_FAST8_T_DEFINED__
#  define __INT_FAST8_T_DEFINED__
# ifndef __INT_FAST8_T_DEFINED
#  define __INT_FAST8_T_DEFINED
# ifndef _INT_FAST8_T_DEFINED_
#  define _INT_FAST8_T_DEFINED_
# ifndef _INT_FAST8_T_DEFINED
#  define _INT_FAST8_T_DEFINED
# ifndef __int_fast8_t__
#  define __int_fast8_t__
# ifndef __int_fast8_t
/* Apparently __int_fast8_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int_fast8_t
#  endif
# ifndef _int_fast8_t_
#  define _int_fast8_t_
# ifndef _int_fast8_t
#  define _int_fast8_t
# ifndef __INT_FAST8_T__
#  define __INT_FAST8_T__
# ifndef __INT_FAST8_T
#  define __INT_FAST8_T
# ifndef _INT_FAST8_T_
#  define _INT_FAST8_T_
# ifndef _INT_FAST8_T
#  define _INT_FAST8_T
# ifndef __BSD_INT_FAST8_T_DEFINED__
#  define __BSD_INT_FAST8_T_DEFINED__
# ifndef __BSD_INT_FAST8_T_DEFINED
#  define __BSD_INT_FAST8_T_DEFINED
# ifndef _BSD_INT_FAST8_T_DEFINED_
#  define _BSD_INT_FAST8_T_DEFINED_
# ifndef _BSD_INT_FAST8_T_DEFINED
#  define _BSD_INT_FAST8_T_DEFINED
# ifndef __BSD_INT_FAST8_T__
#  define __BSD_INT_FAST8_T__
# ifndef __BSD_INT_FAST8_T
#  define __BSD_INT_FAST8_T
# ifndef _BSD_INT_FAST8_T_
#  define _BSD_INT_FAST8_T_
# ifndef _BSD_INT_FAST8_T
#  define _BSD_INT_FAST8_T
# ifndef __SYS_INT_FAST8_T_DEFINED__
#  define __SYS_INT_FAST8_T_DEFINED__
# ifndef __SYS_INT_FAST8_T_DEFINED
#  define __SYS_INT_FAST8_T_DEFINED
# ifndef _SYS_INT_FAST8_T_DEFINED_
#  define _SYS_INT_FAST8_T_DEFINED_
# ifndef _SYS_INT_FAST8_T_DEFINED
#  define _SYS_INT_FAST8_T_DEFINED
# ifndef __SYS_INT_FAST8_T__
#  define __SYS_INT_FAST8_T__
# ifndef __SYS_INT_FAST8_T
#  define __SYS_INT_FAST8_T
# ifndef _SYS_INT_FAST8_T_
#  define _SYS_INT_FAST8_T_
# ifndef _SYS_INT_FAST8_T
#  define _SYS_INT_FAST8_T
# ifndef __GCC_INT_FAST8_T_DEFINED__
#  define __GCC_INT_FAST8_T_DEFINED__
# ifndef __GCC_INT_FAST8_T_DEFINED
#  define __GCC_INT_FAST8_T_DEFINED
# ifndef _GCC_INT_FAST8_T_DEFINED_
#  define _GCC_INT_FAST8_T_DEFINED_
# ifndef _GCC_INT_FAST8_T_DEFINED
#  define _GCC_INT_FAST8_T_DEFINED
# ifndef __GCC_INT_FAST8_T__
#  define __GCC_INT_FAST8_T__
# ifndef __GCC_INT_FAST8_T
#  define __GCC_INT_FAST8_T
# ifndef _GCC_INT_FAST8_T_
#  define _GCC_INT_FAST8_T_
# ifndef _GCC_INT_FAST8_T
#  define _GCC_INT_FAST8_T
# ifndef __INT_FAST8T_DEFINED__
#  define __INT_FAST8T_DEFINED__
# ifndef __INT_FAST8T_DEFINED
#  define __INT_FAST8T_DEFINED
# ifndef _INT_FAST8T_DEFINED_
#  define _INT_FAST8T_DEFINED_
# ifndef _INT_FAST8T_DEFINED
#  define _INT_FAST8T_DEFINED
# ifndef __INT_FAST8T__
#  define __INT_FAST8T__
# ifndef __INT_FAST8T
#  define __INT_FAST8T
# ifndef _INT_FAST8T_
#  define _INT_FAST8T_
# ifndef _INT_FAST8T
#  define _INT_FAST8T
# ifndef __T_INT_FAST8__
#  define __T_INT_FAST8__
# ifndef __T_INT_FAST8
#  define __T_INT_FAST8
# ifndef _T_INT_FAST8_
#  define _T_INT_FAST8_
# ifndef _T_INT_FAST8
#  define _T_INT_FAST8
typedef unic_int_fast8_t int_fast8_t;
typedef unic_uint_fast8_t uint_fast8_t;
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif

#ifndef INT_FAST8_MAX
# define INT_FAST8_MAX UNIC_INT_FAST8_MAX
#endif

#ifndef INT_FAST8_MIN
# define INT_FAST8_MIN UNIC_INT_FAST8_MIN
#endif

#ifndef SIZEOF_INT_FAST8
# define SIZEOF_INT_FAST8 UNIC_SIZEOF_INT_FAST8
#endif

#ifndef INT_FAST8_WIDTH
# define INT_FAST8_WIDTH UNIC_INT_FAST8_WIDTH
#endif

#ifndef INT_FAST8_TYPE
# define INT_FAST8_TYPE UNIC_INT_FAST8_TYPE
#endif

#ifndef INT_FAST8_C
# define INT_FAST8_C UNIC_INT_FAST8_C
#endif

#ifndef PRIxINT_FAST8
# define PRIiINT_FAST8 UNIC_PRIiINT_FAST8
# define PRIoINT_FAST8 UNIC_PRIoINT_FAST8
# define PRIuINT_FAST8 UNIC_PRIuINT_FAST8
# define PRIxINT_FAST8 UNIC_PRIxINT_FAST8
# define PRIXINT_FAST8 UNIC_PRIXINT_FAST8
#endif

#ifndef SCNxINT_FAST8
# define SCNiINT_FAST8 UNIC_SCNiINT_FAST8
# define SCNoINT_FAST8 UNIC_SCNoINT_FAST8
# define SCNuINT_FAST8 UNIC_SCNuINT_FAST8
# define SCNxINT_FAST8 UNIC_SCNxINT_FAST8
# define SCNXINT_FAST8 UNIC_SCNXINT_FAST8
#endif

#endif /* UNIC_FALLBACK */

#endif
