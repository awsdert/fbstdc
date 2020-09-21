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

# ifndef ___int_size_t_h
#  define ___int_size_t_h
# ifndef __size_t_defined__
#  define __size_t_defined__
# ifndef __size_t_defined
#  define __size_t_defined
# ifndef _size_t_defined_
#  define _size_t_defined_
# ifndef _size_t_defined
#  define _size_t_defined
# ifndef __SIZE_T_DEFINED__
#  define __SIZE_T_DEFINED__
# ifndef __SIZE_T_DEFINED
#  define __SIZE_T_DEFINED
# ifndef _SIZE_T_DEFINED_
#  define _SIZE_T_DEFINED_
# ifndef _SIZE_T_DEFINED
#  define _SIZE_T_DEFINED
# ifndef __size_t__
#  define __size_t__
# ifndef __size_t
/* Apparently __size_t can be a typedef,
 * avoid messing with it in that scenario then
*/
#  if !defined(__DragonFly__) \
	|| !defined(__FreeBSD__) \
	|| !defined(__FreeBSD_kernel__) \
	|| !defined(__VMS__)
#   define __size_t
#  endif
# ifndef _size_t_
#  define _size_t_
# ifndef _size_t
#  define _size_t
# ifndef __SIZE_T__
#  define __SIZE_T__
# ifndef __SIZE_T
#  define __SIZE_T
# ifndef _SIZE_T_
#  define _SIZE_T_
# ifndef _SIZE_T
#  define _SIZE_T
# ifndef __BSD_SIZE_T_DEFINED__
#  define __BSD_SIZE_T_DEFINED__
# ifndef __BSD_SIZE_T_DEFINED
#  define __BSD_SIZE_T_DEFINED
# ifndef _BSD_SIZE_T_DEFINED_
#  define _BSD_SIZE_T_DEFINED_
# ifndef _BSD_SIZE_T_DEFINED
#  define _BSD_SIZE_T_DEFINED
# ifndef __BSD_SIZE_T__
#  define __BSD_SIZE_T__
# ifndef __BSD_SIZE_T
#  define __BSD_SIZE_T
# ifndef _BSD_SIZE_T_
#  define _BSD_SIZE_T_
# ifndef _BSD_SIZE_T
#  define _BSD_SIZE_T
# ifndef __SYS_SIZE_T_DEFINED__
#  define __SYS_SIZE_T_DEFINED__
# ifndef __SYS_SIZE_T_DEFINED
#  define __SYS_SIZE_T_DEFINED
# ifndef _SYS_SIZE_T_DEFINED_
#  define _SYS_SIZE_T_DEFINED_
# ifndef _SYS_SIZE_T_DEFINED
#  define _SYS_SIZE_T_DEFINED
# ifndef __SYS_SIZE_T__
#  define __SYS_SIZE_T__
# ifndef __SYS_SIZE_T
#  define __SYS_SIZE_T
# ifndef _SYS_SIZE_T_
#  define _SYS_SIZE_T_
# ifndef _SYS_SIZE_T
#  define _SYS_SIZE_T
# ifndef __GCC_SIZE_T_DEFINED__
#  define __GCC_SIZE_T_DEFINED__
# ifndef __GCC_SIZE_T_DEFINED
#  define __GCC_SIZE_T_DEFINED
# ifndef _GCC_SIZE_T_DEFINED_
#  define _GCC_SIZE_T_DEFINED_
# ifndef _GCC_SIZE_T_DEFINED
#  define _GCC_SIZE_T_DEFINED
# ifndef __GCC_SIZE_T__
#  define __GCC_SIZE_T__
# ifndef __GCC_SIZE_T
#  define __GCC_SIZE_T
# ifndef _GCC_SIZE_T_
#  define _GCC_SIZE_T_
# ifndef _GCC_SIZE_T
#  define _GCC_SIZE_T
# ifndef __SIZET_DEFINED__
#  define __SIZET_DEFINED__
# ifndef __SIZET_DEFINED
#  define __SIZET_DEFINED
# ifndef _SIZET_DEFINED_
#  define _SIZET_DEFINED_
# ifndef _SIZET_DEFINED
#  define _SIZET_DEFINED
# ifndef __SIZET__
#  define __SIZET__
# ifndef __SIZET
#  define __SIZET
# ifndef _SIZET_
#  define _SIZET_
# ifndef _SIZET
#  define _SIZET
# ifndef __T_SIZE__
#  define __T_SIZE__
# ifndef __T_SIZE
#  define __T_SIZE
# ifndef _T_SIZE_
#  define _T_SIZE_
# ifndef _T_SIZE
#  define _T_SIZE
typedef unic_size_t size_t;
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
