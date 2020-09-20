#ifndef UNIC_UINTPTR_C
#include "ssize_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINTPTR_MAX
# define UNIC_UINTPTR_MAX UINTPTR_MAX
#else
# define UNIC_UINTPTR_MAX UNIC___MAX(UNIC_SSIZE_MAX)
#endif

#ifdef UINTPTR_END_BIT
# define UNIC_UINTPTR_END_BIT UINTPTR_END_BIT
#else
# define UNIC_UINTPTR_END_BIT (~(SIZE_MAX>>1))
#endif

#ifdef SIZEOF_UINTPTR
# define UNIC_SIZEOF_UINTPTR SIZEOF_UINTPTR
#else
# define UNIC_SIZEOF_UINTPTR UNIC_SIZEOF_SSIZE
#endif

#ifdef UINTPTR_WIDTH
# define UNIC_UINTPTR_WIDTH UINTPTR_WIDTH
#else
# define UNIC_UINTPTR_WIDTH (UNIC_SIZEOF_UINTPTR * UNIC_CHAR_BIT)
#endif

#ifdef UINTPTR_TYPE
# define UNIC_UINTPTR_TYPE UINTPTR_TYPE
#elif UNIC_UINTPTR_MAX == UNIC_INT_MAX
# define UNIC_UINTPTR_TYPE int
#elif UNIC_UINTPTR_MAX > UNIC_LONG_MAX
# define UNIC_UINTPTR_TYPE long long int
#else
# define UNIC_UINTPTR_TYPE long int
#endif

typedef UNIC_UINTPTR_TYPE unic_uintptr_t;

#ifdef UINTPTR_C
# define UNIC_UINTPTR_C UINTPTR_C
#elif UNIC_UINTPTR_MAX == UNIC_INT_MAX
# define UNIC_UINTPTR_C(VAL) VAL
#elif UNIC_UINTPTR_MAX > UNIC_LONG_MAX
# define UNIC_UINTPTR_C(VAL) VAL##LL
#else
# define UNIC_UINTPTR_C(VAL) VAL##L
#endif

#ifdef PRI_UINTPTR
# define UNIC_PRI_UINTPTR PRI_UINTPTR
#elif UNIC_UINTPTR_MAX == UNIC_INT_MAX
# define UNIC_PRI_UINTPTR
#elif UNIC_UINTPTR_MAX > UNIC_LONG_MAX
# define UNIC_PRI_UINTPTR "ll"
#else
# define UNIC_PRI_UINTPTR "l"
#endif

#ifdef SCN_UINTPTR
# define UNIC_SCN_UINTPTR SCN_UINTPTR
#elif UNIC_UINTPTR_MAX == UNIC_INT_MAX
# define UNIC_SCN_UINTPTR
#elif UNIC_UINTPTR_MAX > UNIC_LONG_MAX
# define UNIC_SCN_UINTPTR "ll"
#else
# define UNIC_SCN_UINTPTR "l"
#endif

#define UNIC_PRIiUINTPTR UNIC_PRI_UINTPTR "i"
#define UNIC_PRIoUINTPTR UNIC_PRI_UINTPTR "o"
#define UNIC_PRIuUINTPTR UNIC_PRI_UINTPTR "u"
#define UNIC_PRIxUINTPTR UNIC_PRI_UINTPTR "x"
#define UNIC_PRIXUINTPTR UNIC_PRI_UINTPTR "X"

#define UNIC_SCNiUINTPTR UNIC_SCN_UINTPTR "i"
#define UNIC_SCNoUINTPTR UNIC_SCN_UINTPTR "o"
#define UNIC_SCNuUINTPTR UNIC_SCN_UINTPTR "u"
#define UNIC_SCNxUINTPTR UNIC_SCN_UINTPTR "x"
#define UNIC_SCNXUINTPTR UNIC_SCN_UINTPTR "X"

#ifdef UNIC_FALLBACK

# ifndef __uintptr_t_defined
#  define __uintptr_t_defined
typedef unic_uintptr_t uintptr_t;
# endif

#ifndef UINTPTR_MAX
# define UINTPTR_MAX UNIC_UINTPTR_MAX
#endif

#ifndef SIZEOF_UINTPTR
# define SIZEOF_UINTPTR UNIC_SIZEOF_UINTPTR
#endif

#ifndef UINTPTR_WIDTH
# define UINTPTR_WIDTH UNIC_UINTPTR_WIDTH
#endif

#ifndef UINTPTR_TYPE
# define UINTPTR_TYPE UNIC_UINTPTR_TYPE
#endif

#ifndef UINTPTR_C
# define UINTPTR_C UNIC_UINTPTR_C
#endif

#ifndef PRIxSIZE
# define PRIiUINTPTR UNIC_PRIiSIZE
# define PRIoUINTPTR UNIC_PRIoSIZE
# define PRIuUINTPTR UNIC_PRIuSIZE
# define PRIxUINTPTR UNIC_PRIxSIZE
# define PRIXUINTPTR UNIC_PRIXSIZE
#endif

#ifndef SCNxSIZE
# define SCNiUINTPTR UNIC_SCNiSIZE
# define SCNoUINTPTR UNIC_SCNoSIZE
# define SCNuUINTPTR UNIC_SCNuSIZE
# define SCNxUINTPTR UNIC_SCNxSIZE
# define SCNXUINTPTR UNIC_SCNXSIZE
#endif

#endif /* UNIC_FALLBACK */

#endif
