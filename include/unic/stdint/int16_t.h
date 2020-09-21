#if !defined( UNIC_INT16_C ) && UNIC_CAN_MAP__EXACTLY_16BIT
#include "uint16_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT16_MAX
# define UNIC_INT16_MAX INT16_MAX
#else
# define UNIC_INT16_MAX UNIC_SHRT_MAX
#endif

#ifdef INT16_MIN
# define UNIC_INT16_MIN INT16_MIN
#else
# define UNIC_INT16_MIN UNIC___MIN(UNIC_INT16_MAX)
#endif

#ifdef INT16_END_BIT
# define UNIC_INT16_END_BIT INT16_END_BIT
#else
# define UNIC_INT16_END_BIT UNIC_INT16_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT16 SIZEOF_INT16
#else
# define UNIC_SIZEOF_INT16 SIZEOF_BY_IMAX(INT16_MAX)
#endif

#ifdef INT16_WIDTH
# define UNIC_INT16_WIDTH INT16_WIDTH
#else
# define UNIC_INT16_WIDTH (UNIC_SIZEOF_INT16 * UNIC_CHAR_BIT)
#endif

#ifdef INT16_TYPE
# define UNIC_INT16_TYPE INT16_TYPE
#else
# define UNIC_INT16_TYPE signed short int
#endif

typedef UNIC_INT16_TYPE unic_int16_t;

#ifdef INT16_C
# define UNIC_INT16_C INT16_C
#elif UNIC_INT16_MAX == UNIC_INT_MAX
#else
# define UNIC_INT16_C(VAL) VAL
#endif

#ifdef PRI_INT16
# define UNIC_PRI_INT16 PRI_INT16
#else
# define UNIC_PRI_INT16
#endif

#ifdef SCN_INT16
# define UNIC_SCN_INT16 SCN_INT16
#else
# define UNIC_SCN_INT16 "h"
#endif

#define UNIC_PRIiINT16 UNIC_PRI_INT16 "i"
#define UNIC_PRIoINT16 UNIC_PRI_INT16 "o"
#define UNIC_PRIuINT16 UNIC_PRI_INT16 "u"
#define UNIC_PRIxINT16 UNIC_PRI_INT16 "x"
#define UNIC_PRIXINT16 UNIC_PRI_INT16 "X"

#define UNIC_SCNiINT16 UNIC_SCN_INT16 "i"
#define UNIC_SCNoINT16 UNIC_SCN_INT16 "o"
#define UNIC_SCNuINT16 UNIC_SCN_INT16 "u"
#define UNIC_SCNxINT16 UNIC_SCN_INT16 "x"
#define UNIC_SCNXINT16 UNIC_SCN_INT16 "X"

#ifdef UNIC_FALLBACK

# ifndef ___int_int16_t_h
#  define ___int_int16_t_h
# ifndef __int16_t_defined__
#  define __int16_t_defined__
# ifndef __int16_t_defined
#  define __int16_t_defined
# ifndef _int16_t_defined_
#  define _int16_t_defined_
# ifndef _int16_t_defined
#  define _int16_t_defined
# ifndef __INT16_T_DEFINED__
#  define __INT16_T_DEFINED__
# ifndef __INT16_T_DEFINED
#  define __INT16_T_DEFINED
# ifndef _INT16_T_DEFINED_
#  define _INT16_T_DEFINED_
# ifndef _INT16_T_DEFINED
#  define _INT16_T_DEFINED
# ifndef __int16_t__
#  define __int16_t__
# ifndef __int16_t
/* Apparently __int16_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __int16_t
#  endif
# ifndef _int16_t_
#  define _int16_t_
# ifndef _int16_t
#  define _int16_t
# ifndef __INT16_T__
#  define __INT16_T__
# ifndef __INT16_T
#  define __INT16_T
# ifndef _INT16_T_
#  define _INT16_T_
# ifndef _INT16_T
#  define _INT16_T
# ifndef __BSD_INT16_T_DEFINED__
#  define __BSD_INT16_T_DEFINED__
# ifndef __BSD_INT16_T_DEFINED
#  define __BSD_INT16_T_DEFINED
# ifndef _BSD_INT16_T_DEFINED_
#  define _BSD_INT16_T_DEFINED_
# ifndef _BSD_INT16_T_DEFINED
#  define _BSD_INT16_T_DEFINED
# ifndef __BSD_INT16_T__
#  define __BSD_INT16_T__
# ifndef __BSD_INT16_T
#  define __BSD_INT16_T
# ifndef _BSD_INT16_T_
#  define _BSD_INT16_T_
# ifndef _BSD_INT16_T
#  define _BSD_INT16_T
# ifndef __SYS_INT16_T_DEFINED__
#  define __SYS_INT16_T_DEFINED__
# ifndef __SYS_INT16_T_DEFINED
#  define __SYS_INT16_T_DEFINED
# ifndef _SYS_INT16_T_DEFINED_
#  define _SYS_INT16_T_DEFINED_
# ifndef _SYS_INT16_T_DEFINED
#  define _SYS_INT16_T_DEFINED
# ifndef __SYS_INT16_T__
#  define __SYS_INT16_T__
# ifndef __SYS_INT16_T
#  define __SYS_INT16_T
# ifndef _SYS_INT16_T_
#  define _SYS_INT16_T_
# ifndef _SYS_INT16_T
#  define _SYS_INT16_T
# ifndef __GCC_INT16_T_DEFINED__
#  define __GCC_INT16_T_DEFINED__
# ifndef __GCC_INT16_T_DEFINED
#  define __GCC_INT16_T_DEFINED
# ifndef _GCC_INT16_T_DEFINED_
#  define _GCC_INT16_T_DEFINED_
# ifndef _GCC_INT16_T_DEFINED
#  define _GCC_INT16_T_DEFINED
# ifndef __GCC_INT16_T__
#  define __GCC_INT16_T__
# ifndef __GCC_INT16_T
#  define __GCC_INT16_T
# ifndef _GCC_INT16_T_
#  define _GCC_INT16_T_
# ifndef _GCC_INT16_T
#  define _GCC_INT16_T
# ifndef __INT16T_DEFINED__
#  define __INT16T_DEFINED__
# ifndef __INT16T_DEFINED
#  define __INT16T_DEFINED
# ifndef _INT16T_DEFINED_
#  define _INT16T_DEFINED_
# ifndef _INT16T_DEFINED
#  define _INT16T_DEFINED
# ifndef __INT16T__
#  define __INT16T__
# ifndef __INT16T
#  define __INT16T
# ifndef _INT16T_
#  define _INT16T_
# ifndef _INT16T
#  define _INT16T
# ifndef __T_INT16__
#  define __T_INT16__
# ifndef __T_INT16
#  define __T_INT16
# ifndef _T_INT16_
#  define _T_INT16_
# ifndef _T_INT16
#  define _T_INT16
typedef unic_int16_t int16_t;
typedef unic_uint16_t uint16_t;
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# endif

#ifndef INT16_MAX
# define INT16_MAX UNIC_INT16_MAX
#endif

#ifndef INT16_MIN
# define INT16_MIN UNIC_INT16_MIN
#endif

#ifndef SIZEOF_INT16
# define SIZEOF_INT16 UNIC_SIZEOF_INT16
#endif

#ifndef INT16_WIDTH
# define INT16_WIDTH UNIC_INT16_WIDTH
#endif

#ifndef INT16_TYPE
# define INT16_TYPE UNIC_INT16_TYPE
#endif

#ifndef INT16_C
# define INT16_C UNIC_INT16_C
#endif

#ifndef PRIxINT16
# define PRIiINT16 UNIC_PRIiINT16
# define PRIoINT16 UNIC_PRIoINT16
# define PRIuINT16 UNIC_PRIuINT16
# define PRIxINT16 UNIC_PRIxINT16
# define PRIXINT16 UNIC_PRIXINT16
#endif

#ifndef SCNxINT16
# define SCNiINT16 UNIC_SCNiINT16
# define SCNoINT16 UNIC_SCNoINT16
# define SCNuINT16 UNIC_SCNuINT16
# define SCNxINT16 UNIC_SCNxINT16
# define SCNXINT16 UNIC_SCNXINT16
#endif

#endif /* UNIC_FALLBACK */

#endif
