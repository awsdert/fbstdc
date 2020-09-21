#if !defined( UNIC_INT8_C ) && UNIC_CAN_MAP__EXACTLY_8BIT
#include "uint8_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT8_MAX
# define UNIC_INT8_MAX INT8_MAX
#else
# define UNIC_INT8_MAX UNIC_SCHAR_MAX
#endif

#ifdef INT8_MIN
# define UNIC_INT8_MIN INT8_MIN
#else
# define UNIC_INT8_MIN UNIC___MIN(UNIC_INT8_MAX)
#endif

#ifdef INT8_END_BIT
# define UNIC_INT8_END_BIT INT8_END_BIT
#else
# define UNIC_INT8_END_BIT UNIC_INT8_MIN
#endif

#ifdef SIZEOF_INT8
# define UNIC_SIZEOF_INT8 SIZEOF_INT8
#else
# define UNIC_SIZEOF_INT8 UNIC_SIZEOF_BY_IMAX(INT8_MAX)
#endif

#ifdef INT8_WIDTH
# define UNIC_INT8_WIDTH INT8_WIDTH
#else
# define UNIC_INT8_WIDTH (UNIC_SIZEOF_INT8 * UNIC_CHAR_BIT)
#endif

#ifdef INT8_TYPE
# define UNIC_INT8_TYPE INT8_TYPE
#else
# define UNIC_INT8_TYPE signed char
#endif

typedef UNIC_INT8_TYPE unic_int8_t;

#ifdef INT8_C
# define UNIC_INT8_C INT8_C
#elif UNIC_INT8_MAX == UNIC_INT_MAX
#else
# define UNIC_INT8_C(VAL) VAL
#endif

#ifdef PRI_INT8
# define UNIC_PRI_INT8 PRI_INT8
#else
# define UNIC_PRI_INT8
#endif

#ifdef SCN_INT8
# define UNIC_SCN_INT8 SCN_INT8
#else
# define UNIC_SCN_INT8 "hh"
#endif

#define UNIC_PRIiINT8 UNIC_PRI_INT8 "i"
#define UNIC_PRIoINT8 UNIC_PRI_INT8 "o"
#define UNIC_PRIuINT8 UNIC_PRI_INT8 "u"
#define UNIC_PRIxINT8 UNIC_PRI_INT8 "x"
#define UNIC_PRIXINT8 UNIC_PRI_INT8 "X"

#define UNIC_SCNiINT8 UNIC_SCN_INT8 "i"
#define UNIC_SCNoINT8 UNIC_SCN_INT8 "o"
#define UNIC_SCNuINT8 UNIC_SCN_INT8 "u"
#define UNIC_SCNxINT8 UNIC_SCN_INT8 "x"
#define UNIC_SCNXINT8 UNIC_SCN_INT8 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int8_t_h
#  define ___int_int8_t_h
# ifndef __int8_t_defined__
#  define __int8_t_defined__
# ifndef __int8_t_defined
#  define __int8_t_defined
# ifndef _int8_t_defined_
#  define _int8_t_defined_
# ifndef _int8_t_defined
#  define _int8_t_defined
# ifndef __INT8_T_DEFINED__
#  define __INT8_T_DEFINED__
# ifndef __INT8_T_DEFINED
#  define __INT8_T_DEFINED
# ifndef _INT8_T_DEFINED_
#  define _INT8_T_DEFINED_
# ifndef _INT8_T_DEFINED
#  define _INT8_T_DEFINED
# ifndef __int8_t__
#  define __int8_t__
# ifndef __int8_t
/* Apparently __int8_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int8_t
#  endif
# ifndef _int8_t_
#  define _int8_t_
# ifndef _int8_t
#  define _int8_t
# ifndef __INT8_T__
#  define __INT8_T__
# ifndef __INT8_T
#  define __INT8_T
# ifndef _INT8_T_
#  define _INT8_T_
# ifndef _INT8_T
#  define _INT8_T
# ifndef __BSD_INT8_T_DEFINED__
#  define __BSD_INT8_T_DEFINED__
# ifndef __BSD_INT8_T_DEFINED
#  define __BSD_INT8_T_DEFINED
# ifndef _BSD_INT8_T_DEFINED_
#  define _BSD_INT8_T_DEFINED_
# ifndef _BSD_INT8_T_DEFINED
#  define _BSD_INT8_T_DEFINED
# ifndef __BSD_INT8_T__
#  define __BSD_INT8_T__
# ifndef __BSD_INT8_T
#  define __BSD_INT8_T
# ifndef _BSD_INT8_T_
#  define _BSD_INT8_T_
# ifndef _BSD_INT8_T
#  define _BSD_INT8_T
# ifndef __SYS_INT8_T_DEFINED__
#  define __SYS_INT8_T_DEFINED__
# ifndef __SYS_INT8_T_DEFINED
#  define __SYS_INT8_T_DEFINED
# ifndef _SYS_INT8_T_DEFINED_
#  define _SYS_INT8_T_DEFINED_
# ifndef _SYS_INT8_T_DEFINED
#  define _SYS_INT8_T_DEFINED
# ifndef __SYS_INT8_T__
#  define __SYS_INT8_T__
# ifndef __SYS_INT8_T
#  define __SYS_INT8_T
# ifndef _SYS_INT8_T_
#  define _SYS_INT8_T_
# ifndef _SYS_INT8_T
#  define _SYS_INT8_T
# ifndef __GCC_INT8_T_DEFINED__
#  define __GCC_INT8_T_DEFINED__
# ifndef __GCC_INT8_T_DEFINED
#  define __GCC_INT8_T_DEFINED
# ifndef _GCC_INT8_T_DEFINED_
#  define _GCC_INT8_T_DEFINED_
# ifndef _GCC_INT8_T_DEFINED
#  define _GCC_INT8_T_DEFINED
# ifndef __GCC_INT8_T__
#  define __GCC_INT8_T__
# ifndef __GCC_INT8_T
#  define __GCC_INT8_T
# ifndef _GCC_INT8_T_
#  define _GCC_INT8_T_
# ifndef _GCC_INT8_T
#  define _GCC_INT8_T
# ifndef __INT8T_DEFINED__
#  define __INT8T_DEFINED__
# ifndef __INT8T_DEFINED
#  define __INT8T_DEFINED
# ifndef _INT8T_DEFINED_
#  define _INT8T_DEFINED_
# ifndef _INT8T_DEFINED
#  define _INT8T_DEFINED
# ifndef __INT8T__
#  define __INT8T__
# ifndef __INT8T
#  define __INT8T
# ifndef _INT8T_
#  define _INT8T_
# ifndef _INT8T
#  define _INT8T
# ifndef __T_INT8__
#  define __T_INT8__
# ifndef __T_INT8
#  define __T_INT8
# ifndef _T_INT8_
#  define _T_INT8_
# ifndef _T_INT8
#  define _T_INT8
typedef unic_int8_t int8_t;
typedef unic_uint8_t uint8_t;
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif

#ifndef INT8_MAX
# define INT8_MAX UNIC_INT8_MAX
#endif

#ifndef INT8_MIN
# define INT8_MIN UNIC_INT8_MIN
#endif

#ifndef SIZEOF_INT8
# define SIZEOF_INT8 UNIC_SIZEOF_INT8
#endif

#ifndef INT8_WIDTH
# define INT8_WIDTH UNIC_INT8_WIDTH
#endif

#ifndef INT8_TYPE
# define INT8_TYPE UNIC_INT8_TYPE
#endif

#ifndef INT8_C
# define INT8_C UNIC_INT8_C
#endif

#ifndef PRIxINT8
# define PRIiINT8 UNIC_PRIiINT8
# define PRIoINT8 UNIC_PRIoINT8
# define PRIuINT8 UNIC_PRIuINT8
# define PRIxINT8 UNIC_PRIxINT8
# define PRIXINT8 UNIC_PRIXINT8
#endif

#ifndef SCNxINT8
# define SCNiINT8 UNIC_SCNiINT8
# define SCNoINT8 UNIC_SCNoINT8
# define SCNuINT8 UNIC_SCNuINT8
# define SCNxINT8 UNIC_SCNxINT8
# define SCNXINT8 UNIC_SCNXINT8
#endif

#endif /* UNIC_FALLBACK */

#endif
