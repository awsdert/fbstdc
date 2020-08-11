#ifndef FBARCH_H
#define FBARCH_H

#if defined( __GNUC__ )
# define FB_CC_GNU
# ifdef __clang__
#  define FB_CC_CLANG
# endif
# ifdef __MINGW64__
#  define FB_CC_MGW64
# endif
# ifdef __MINGW32__
#  define FB_CC_MGW64
# endif
#elif defined( _MSC_VER )
# define FB_CC_MSC
#else
# define FB_CC_OTHER
#endif

#if defined(__aarch64__)
# define FB_ARCH_ARM64
#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) \
	|| defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
# define FB_ARCH_ARM
#elif defined(__amd64__) || defined(__amd64) \
	|| defined(__x86_64__) || defined(__x86_64) || defined(_M_AMD64)
# define FB_ARCH_AMD64
#elif defined(__ia64__) || defined(__ia64__) \
	|| defined(__IA64__) || defined(_M_IA64) || defined(__itanium__)
# define FB_ARCH_IA64
#elif defined(__x86__) || defined(__x86) || defined(_M_IX86)
# define FB_ARCH_X86
#else
# ifdef FB_CC_OTHER
/* Assuming Primeval C Compiler which started with PDP */
#  define FB_ARCH_PDP
# else
#  define FB_ARCH_X16
# endif
#endif

#if defined( FB_ARCH_ARM64 ) || defined( FB_ARCH_AMD64 ) \
	|| defined( FB_ARCH_IA64 )
# define FB_ARCH_CHAR_WIDTH 8
# define FB_ARCH_WORD_WIDTH 64
#elif defined( FB_ARCH_X86 )
# define FB_ARCH_CHAR_WIDTH 8
# define FB_ARCH_WORD_WIDTH 32
#elif ~0 << 15
# define FB_ARCH_CHAR_WIDTH 8
# define FB_ARCH_WORD_WIDTH 16
#elif ~0 << 7
# define FB_ARCH_CHAR_WIDTH 8
# define FB_ARCH_WORD_WIDTH 8
#elif ~0 << 6
# define FB_ARCH_CHAR_WIDTH 7
# define FB_ARCH_WORD_WIDTH 7
#elif ~0 << 5
# define FB_ARCH_CHAR_WIDTH 6
# define FB_ARCH_WORD_WIDTH 6
#else
# define FB_ARCH_CHAR_WIDTH 4
# define FB_ARCH_WORD_WIDTH 4
#endif

#endif /* FBARCH_H */
