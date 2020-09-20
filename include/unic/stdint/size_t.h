#ifndef UNIC_SIZE_C
#include "ssize_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef SIZE_MAX
# define UNIC_SIZE_MAX SIZE_MAX
#else
# define UNIC_SIZE_MAX UNIC___MAX(UNIC_SSIZE_MAX)
#endif

#ifdef SIZE_END_BIT
# define UNIC_SIZE_END_BIT SIZE_END_BIT
#else
# define UNIC_SIZE_END_BIT (~(SIZE_MAX>>1))
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_SIZE SIZEOF_SIZE
#else
# define UNIC_SIZEOF_SIZE UNIC_SIZEOF_SSIZE
#endif

#ifdef SIZE_WIDTH
# define UNIC_SIZE_WIDTH SIZE_WIDTH
#else
# define UNIC_SIZE_WIDTH (UNIC_SIZEOF_SIZE * UNIC_CHAR_BIT)
#endif

#ifdef SIZE_TYPE
# define UNIC_SIZE_TYPE SIZE_TYPE
#elif UNIC_SIZE_MAX == UNIC_INT_MAX
# define UNIC_SIZE_TYPE int
#elif UNIC_SIZE_MAX > UNIC_LONG_MAX
# define UNIC_SIZE_TYPE long long int
#else
# define UNIC_SIZE_TYPE long int
#endif

typedef UNIC_SIZE_TYPE unic_size_t;

#ifdef SIZE_C
# define UNIC_SIZE_C SIZE_C
#elif UNIC_SIZE_MAX == UNIC_INT_MAX
# define UNIC_SIZE_C(VAL) VAL
#elif UNIC_SIZE_MAX > UNIC_LONG_MAX
# define UNIC_SIZE_C(VAL) VAL##LL
#else
# define UNIC_SIZE_C(VAL) VAL##L
#endif

#ifdef PRI_SIZE
# define UNIC_PRI_SIZE PRI_SIZE
#elif UNIC_SIZE_MAX == UNIC_INT_MAX
# define UNIC_PRI_SIZE
#elif UNIC_SIZE_MAX > UNIC_LONG_MAX
# define UNIC_PRI_SIZE "ll"
#else
# define UNIC_PRI_SIZE "l"
#endif

#ifdef SCN_SIZE
# define UNIC_SCN_SIZE SCN_SIZE
#elif UNIC_SIZE_MAX == UNIC_INT_MAX
# define UNIC_SCN_SIZE
#elif UNIC_SIZE_MAX > UNIC_LONG_MAX
# define UNIC_SCN_SIZE "ll"
#else
# define UNIC_SCN_SIZE "l"
#endif

#define UNIC_PRIiSIZE UNIC_PRI_SIZE "i"
#define UNIC_PRIoSIZE UNIC_PRI_SIZE "o"
#define UNIC_PRIuSIZE UNIC_PRI_SIZE "u"
#define UNIC_PRIxSIZE UNIC_PRI_SIZE "x"
#define UNIC_PRIXSIZE UNIC_PRI_SIZE "X"

#define UNIC_SCNiSIZE UNIC_SCN_SIZE "i"
#define UNIC_SCNoSIZE UNIC_SCN_SIZE "o"
#define UNIC_SCNuSIZE UNIC_SCN_SIZE "u"
#define UNIC_SCNxSIZE UNIC_SCN_SIZE "x"
#define UNIC_SCNXSIZE UNIC_SCN_SIZE "X"

#ifdef UNIC_FALLBACK

# ifndef __size_t_defined
#  define __size_t_defined
typedef unic_size_t size_t;
# endif

#ifndef SIZE_MAX
# define SIZE_MAX UNIC_SIZE_MAX
#endif

#ifndef SIZEOF_SIZE
# define SIZEOF_SIZE UNIC_SIZEOF_SIZE
#endif

#ifndef SIZE_WIDTH
# define SIZE_WIDTH UNIC_SIZE_WIDTH
#endif

#ifndef SIZE_TYPE
# define SIZE_TYPE UNIC_SIZE_TYPE
#endif

#ifndef SIZE_C
# define SIZE_C UNIC_SIZE_C
#endif

#ifndef PRIxSIZE
# define PRIiSIZE UNIC_PRIiSIZE
# define PRIoSIZE UNIC_PRIoSIZE
# define PRIuSIZE UNIC_PRIuSIZE
# define PRIxSIZE UNIC_PRIxSIZE
# define PRIXSIZE UNIC_PRIXSIZE
#endif

#ifndef SCNxSIZE
# define SCNiSIZE UNIC_SCNiSIZE
# define SCNoSIZE UNIC_SCNoSIZE
# define SCNuSIZE UNIC_SCNuSIZE
# define SCNxSIZE UNIC_SCNxSIZE
# define SCNXSIZE UNIC_SCNXSIZE
#endif

#endif /* UNIC_FALLBACK */

#endif
