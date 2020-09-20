#if !defined( UNIC_INT64_C ) && UNIC_CAN_MAP__EXACTLY_64BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT64_MAX
# define UNIC_INT64_MAX INT64_MAX
#elif UNIC_INT_WIDTH == 64
# define UNIC_INT64_MAX UNIC_INT_MAX
#elif UNIC_LONG_WIDTH == 64
# define UNIC_INT64_MAX UNIC_LONG_MAX
#else
# define UNIC_INT64_MAX UNIC_LLONG_MAX
#endif

#ifdef INT64_MIN
# define UNIC_INT64_MIN INT64_MIN
#else
# define UNIC_INT64_MIN UNIC___MIN(UNIC_INT64_MAX)
#endif

#ifdef INT64_END_BIT
# define UNIC_INT64_END_BIT INT64_END_BIT
#else
# define UNIC_INT64_END_BIT UNIC_INT64_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT64 SIZEOF_INT64
#else
# define UNIC_SIZEOF_INT64 SIZEOF_BY_IMAX(INT64_MAX)
#endif

#ifdef INT64_WIDTH
# define UNIC_INT64_WIDTH INT64_WIDTH
#else
# define UNIC_INT64_WIDTH (UNIC_SIZEOF_INT64 * UNIC_CHAR_BIT)
#endif

#ifdef INT64_TYPE
# define UNIC_INT64_TYPE INT64_TYPE
#elif UNIC_INT_WIDTH == 64
# define UNIC_INT64_TYPE signed int
#elif UNIC_LONG_WIDTH == 64
# define UNIC_INT64_TYPE signed long int
#else
# define UNIC_INT64_TYPE signed long long int
#endif

typedef UNIC_INT64_TYPE unic_int64_t;

#ifdef INT64_C
# define UNIC_INT64_C INT64_C
#elif UNIC_INT_WIDTH == 64
# define UNIC_INT64_C(VAL) VAL
#elif UNIC_LONG_WIDTH == 64
# define UNIC_INT64_C(VAL) VAL##L
#else
# define UNIC_INT64_C(VAL) VAL##LL
#endif

#ifdef PRI_INT64
# define UNIC_PRI_INT64 PRI_INT64
#elif UNIC_INT_WIDTH == 64
# define UNIC_PRI_INT64
#elif UNIC_LONG_WIDTH == 64
# define UNIC_PRI_INT64 "l"
#else
# define UNIC_PRI_INT64 "ll"
#endif

#ifdef SCN_INT64
# define UNIC_SCN_INT64 SCN_INT64
#elif UNIC_INT_WIDTH == 64
# define UNIC_SCN_INT64
#elif UNIC_LONG_WIDTH == 64
# define UNIC_SCN_INT64 "l"
#else
# define UNIC_SCN_INT64 "ll"
#endif

#define UNIC_PRIiINT64 UNIC_PRI_INT64 "i"
#define UNIC_PRIoINT64 UNIC_PRI_INT64 "o"
#define UNIC_PRIuINT64 UNIC_PRI_INT64 "u"
#define UNIC_PRIxINT64 UNIC_PRI_INT64 "x"
#define UNIC_PRIXINT64 UNIC_PRI_INT64 "X"

#define UNIC_SCNiINT64 UNIC_SCN_INT64 "i"
#define UNIC_SCNoINT64 UNIC_SCN_INT64 "o"
#define UNIC_SCNuINT64 UNIC_SCN_INT64 "u"
#define UNIC_SCNxINT64 UNIC_SCN_INT64 "x"
#define UNIC_SCNXINT64 UNIC_SCN_INT64 "X"

#ifdef UNIC_FALLBACK

# ifndef __int64_t_defined
#  define __int64_t_defined
typedef unic_int64_t int64_t;
# endif

#ifndef INT64_MAX
# define INT64_MAX UNIC_INT64_MAX
#endif

#ifndef INT64_MIN
# define INT64_MIN UNIC_INT64_MIN
#endif

#ifndef SIZEOF_INT64
# define SIZEOF_INT64 UNIC_SIZEOF_INT64
#endif

#ifndef INT64_WIDTH
# define INT64_WIDTH UNIC_INT64_WIDTH
#endif

#ifndef INT64_TYPE
# define INT64_TYPE UNIC_INT64_TYPE
#endif

#ifndef INT64_C
# define INT64_C UNIC_INT64_C
#endif

#ifndef PRIxINT64
# define PRIiINT64 UNIC_PRIiINT64
# define PRIoINT64 UNIC_PRIoINT64
# define PRIuINT64 UNIC_PRIuINT64
# define PRIxINT64 UNIC_PRIxINT64
# define PRIXINT64 UNIC_PRIXINT64
#endif

#ifndef SCNxINT64
# define SCNiINT64 UNIC_SCNiINT64
# define SCNoINT64 UNIC_SCNoINT64
# define SCNuINT64 UNIC_SCNuINT64
# define SCNxINT64 UNIC_SCNxINT64
# define SCNXINT64 UNIC_SCNXINT64
#endif

#endif /* UNIC_FALLBACK */

#endif
