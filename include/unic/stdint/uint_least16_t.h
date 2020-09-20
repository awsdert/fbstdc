#if !defined( UNIC_UINT_LEAST16_C ) && UNIC_SHRT_WIDTH >= 16
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT_LEAST16_MAX
# define UNIC_UINT_LEAST16_MAX UINT_LEAST16_MAX
#else
# define UNIC_UINT_LEAST16_MAX UCHAR_MAX
#endif

#ifdef UINT_LEAST16_END_BIT
# define UNIC_UINT_LEAST16_END_BIT UINT_LEAST16_END_BIT
#else
# define UNIC_UINT_LEAST16_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT_LEAST16
# define UNIC_SIZEOF_UINT_LEAST16 SIZEOF_UINT_LEAST16
#else
# define UNIC_SIZEOF_UINT_LEAST16 UNIC_SIZEOF_SHRT
#endif

#ifdef UINT_LEAST16_WIDTH
# define UNIC_UINT_LEAST16_WIDTH UINT_LEAST16_WIDTH
#else
# define UNIC_UINT_LEAST16_WIDTH (UNIC_SIZEOF_UINT_LEAST16 * UNIC_CHAR_BIT)
#endif

#ifdef UINT_LEAST16_TYPE
# define UNIC_UINT_LEAST16_TYPE UINT_LEAST16_TYPE
#else
# define UNIC_UINT_LEAST16_TYPE unsigned short
#endif

typedef UNIC_UINT_LEAST16_TYPE unic_uint_least16_t;

#ifdef UINT_LEAST16_C
# define UNIC_UINT_LEAST16_C UINT_LEAST16_C
#else
# define UNIC_UINT_LEAST16_C(VAL) VAL
#endif

#ifdef PRI_UINT_LEAST16
# define UNIC_PRI_UINT_LEAST16 PRI_UINT_LEAST16
#else
# define UNIC_PRI_UINT_LEAST16
#endif

#ifdef SCN_UINT_LEAST16
# define UNIC_SCN_UINT_LEAST16 SCN_UINT_LEAST16
#else
# define UNIC_SCN_UINT_LEAST16 "h"
#endif

#define UNIC_PRIiUINT_LEAST16 UNIC_PRI_UINT_LEAST16 "i"
#define UNIC_PRIoUINT_LEAST16 UNIC_PRI_UINT_LEAST16 "o"
#define UNIC_PRIuUINT_LEAST16 UNIC_PRI_UINT_LEAST16 "u"
#define UNIC_PRIxUINT_LEAST16 UNIC_PRI_UINT_LEAST16 "x"
#define UNIC_PRIXUINT_LEAST16 UNIC_PRI_UINT_LEAST16 "X"

#define UNIC_SCNiUINT_LEAST16 UNIC_SCN_UINT_LEAST16 "i"
#define UNIC_SCNoUINT_LEAST16 UNIC_SCN_UINT_LEAST16 "o"
#define UNIC_SCNuUINT_LEAST16 UNIC_SCN_UINT_LEAST16 "u"
#define UNIC_SCNxUINT_LEAST16 UNIC_SCN_UINT_LEAST16 "x"
#define UNIC_SCNXUINT_LEAST16 UNIC_SCN_UINT_LEAST16 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint_least16_t_defined
#  define __uint_least16_t_defined
typedef unic_uint_least16_t uint_least16_t;
# endif

#ifndef UINT_LEAST16_MAX
# define UINT_LEAST16_MAX UNIC_UINT_LEAST16_MAX
#endif

#ifndef SIZEOF_UINT_LEAST16
# define SIZEOF_UINT_LEAST16 UNIC_SIZEOF_UINT_LEAST16
#endif

#ifndef UINT_LEAST16_WIDTH
# define UINT_LEAST16_WIDTH UNIC_UINT_LEAST16_WIDTH
#endif

#ifndef UINT_LEAST16_TYPE
# define UINT_LEAST16_TYPE UNIC_UINT_LEAST16_TYPE
#endif

#ifndef UINT_LEAST16_C
# define UINT_LEAST16_C UNIC_UINT_LEAST16_C
#endif

#ifndef PRIxUINT_LEAST16
# define PRIiUINT_LEAST16 UNIC_PRIiUINT_LEAST16
# define PRIoUINT_LEAST16 UNIC_PRIoUINT_LEAST16
# define PRIuUINT_LEAST16 UNIC_PRIuUINT_LEAST16
# define PRIxUINT_LEAST16 UNIC_PRIxUINT_LEAST16
# define PRIXUINT_LEAST16 UNIC_PRIXUINT_LEAST16
#endif

#ifndef SCNxUINT_LEAST16
# define SCNiUINT_LEAST16 UNIC_SCNiUINT_LEAST16
# define SCNoUINT_LEAST16 UNIC_SCNoUINT_LEAST16
# define SCNuUINT_LEAST16 UNIC_SCNuUINT_LEAST16
# define SCNxUINT_LEAST16 UNIC_SCNxUINT_LEAST16
# define SCNXUINT_LEAST16 UNIC_SCNXUINT_LEAST16
#endif

#endif /* UNIC_FALLBACK */

#endif
