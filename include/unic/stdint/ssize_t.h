#ifndef UNIC_SSIZE_C
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef SSIZE_MAX
# define UNIC_SSIZE_MAX SSIZE_MAX
#elif defined(UNIC_LLONG_MAX) && UNIC_LLONG_MAX > UNIC_LONG_MAX
# define UNIC_SSIZE_MAX UNIC_LLONG_MAX
#else
# define UNIC_SSIZE_MAX UNIC_LONG_MAX
#endif

#ifdef SSIZE_MIN
# define UNIC_SSIZE_MIN SSIZE_MIN
#else
# define UNIC_SSIZE_MIN UNIC___MIN(UNIC_SSIZE_MAX)
#endif

#ifdef SIZE_END_BIT
# define UNIC_SSIZE_END_BIT SIZE_END_BIT
#else
# define UNIC_SSIZE_END_BIT UNIC_SSIZE_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_SSIZE SIZEOF_SSIZE
#else
# define UNIC_SIZEOF_SSIZE UNIC_SIZEOF_BY_IMAX(SSIZE_MAX)
#endif

#ifdef SSIZE_WIDTH
# define UNIC_SSIZE_WIDTH SSIZE_WIDTH
#else
# define UNIC_SSIZE_WIDTH (UNIC_SIZEOF_SSIZE * UNIC_CHAR_BIT)
#endif

#ifdef SSIZE_TYPE
# define UNIC_SSIZE_TYPE SSIZE_TYPE
#elif UNIC_SSIZE_MAX == UNIC_INT_MAX
# define UNIC_SSIZE_TYPE int
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
# define UNIC_SSIZE_TYPE long long int
#else
# define UNIC_SSIZE_TYPE long int
#endif

typedef UNIC_SSIZE_TYPE unic_ssize_t;

#ifdef SSIZE_C
# define UNIC_SSIZE_C SSIZE_C
#elif UNIC_SSIZE_MAX == UNIC_INT_MAX
# define UNIC_SSIZE_C(VAL) VAL
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
# define UNIC_SSIZE_C(VAL) VAL##LL
#else
# define UNIC_SSIZE_C(VAL) VAL##L
#endif

#ifdef PRI_SSIZE
# define UNIC_PRI_SSIZE PRI_SSIZE
#elif UNIC_SSIZE_MAX == UNIC_INT_MAX
# define UNIC_PRI_SSIZE
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
# define UNIC_PRI_SSIZE "ll"
#else
# define UNIC_PRI_SSIZE "l"
#endif

#ifdef SCN_SSIZE
# define UNIC_SCN_SSIZE SCN_SSIZE
#elif UNIC_SSIZE_MAX == UNIC_INT_MAX
# define UNIC_SCN_SSIZE
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
# define UNIC_SCN_SSIZE "ll"
#else
# define UNIC_SCN_SSIZE "l"
#endif

#define UNIC_PRIiSSIZE UNIC_PRI_SSIZE "i"
#define UNIC_PRIoSSIZE UNIC_PRI_SSIZE "o"
#define UNIC_PRIuSSIZE UNIC_PRI_SSIZE "u"
#define UNIC_PRIxSSIZE UNIC_PRI_SSIZE "x"
#define UNIC_PRIXSSIZE UNIC_PRI_SSIZE "X"

#define UNIC_SCNiSSIZE UNIC_SCN_SSIZE "i"
#define UNIC_SCNoSSIZE UNIC_SCN_SSIZE "o"
#define UNIC_SCNuSSIZE UNIC_SCN_SSIZE "u"
#define UNIC_SCNxSSIZE UNIC_SCN_SSIZE "x"
#define UNIC_SCNXSSIZE UNIC_SCN_SSIZE "X"

#ifdef UNIC_FALLBACK

#ifndef __ssize_t_defined
# define __ssize_t_defined
typedef unic_ssize_t ssize_t;
#endif

#ifndef SSIZE_MAX
# define SSIZE_MAX UNIC_SSIZE_MAX
#endif

#ifndef SSIZE_MIN
# define SSIZE_MIN UNIC_SSIZE_MIN
#endif

#ifndef SIZEOF_SSIZE
# define SIZEOF_SSIZE UNIC_SIZEOF_SSIZE
#endif

#ifndef SSIZE_WIDTH
# define SSIZE_WIDTH UNIC_SSIZE_WIDTH
#endif

#ifndef SSIZE_TYPE
# define SSIZE_TYPE UNIC_SSIZE_TYPE
#endif

#ifndef SSIZE_C
# define SSIZE_C UNIC_SSIZE_C
#endif

#ifndef PRIxSSIZE
# define PRIiSSIZE UNIC_PRIiSSIZE
# define PRIoSSIZE UNIC_PRIoSSIZE
# define PRIuSSIZE UNIC_PRIuSSIZE
# define PRIxSSIZE UNIC_PRIxSSIZE
# define PRIXSSIZE UNIC_PRIXSSIZE
#endif

#ifndef SCNxSSIZE
# define SCNiSSIZE UNIC_SCNiSSIZE
# define SCNoSSIZE UNIC_SCNoSSIZE
# define SCNuSSIZE UNIC_SCNuSSIZE
# define SCNxSSIZE UNIC_SCNxSSIZE
# define SCNXSSIZE UNIC_SCNXSSIZE
#endif

#endif /* UNIC_FALLBACK */

#endif /* UNIC_SSIZE_C */
