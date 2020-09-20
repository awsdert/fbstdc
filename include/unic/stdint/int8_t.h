#if !defined( UNIC_INT8_C ) && UNIC_CHAR_BIT == 8
#include "_.h"

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

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT8 SIZEOF_INT8
#else
# define UNIC_SIZEOF_INT8 SIZEOF_BY_IMAX(INT8_MAX)
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

# ifndef __int8_t_defined
#  define __int8_t_defined
typedef unic_int8_t int8_t;
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
