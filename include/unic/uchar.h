#ifndef INC_UNIC_UCHAR_H
#define INC_UNIC_UCHAR_H

#include "stdint.h"

#ifndef NO_STDC
# ifdef __cplusplus
#  ifndef UNIC__SYS_WIN32
#   include <uchar>
#  endif
# else
#  ifndef UNIC__SYS_WIN32
#   include <uchar.h>
#  endif
# endif
#endif

#ifdef CHAR32_TYPE
# define UNIC_CHAR32_TYPE CHAR32_TYPE
#else
# define UNIC_CHAR32_TYPE UNIC_UINT_LEAST32_TYPE
#endif

#ifdef CHAR32_MAX
# define UNIC_CHAR32_MAX CHAR32_MAX
#else
# define UNIC_CHAR32_MAX UNIC_UINT_LEAST32_MAX
#endif

typedef UNIC_CHAR32_TYPE unic_char32_t;

#ifdef UNIC_FALLBACK

#ifndef CHAR32_TYPE
# define CHAR32_TYPE UNIC_CHAR32_TYPE
#endif

#ifndef CHAR32_MAX
# define CHAR32_MAX UNIC_CHAR32_MAX
typedef CHAR32_TYPE char32_t;
#endif

#endif /* UNIC_FALLBACK */

#endif /* INC_UNIC_UCHAR_H */
