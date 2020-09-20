#if !defined( UNIC_INT_LEAST8_C ) && UNIC_CAN_MAP_AT_LEAST_8BIT
#include "_.h"

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

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT_LEAST8 SIZEOF_INT_LEAST8
#else
# define UNIC_SIZEOF_INT_LEAST8 SIZEOF_BY_IMAX(INT_LEAST8_MAX)
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

# ifndef __int_least8_t_defined
#  define __int_least8_t_defined
typedef unic_int_least8_t int_least8_t;
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
