#ifndef WEBP_EXAMPLES_CWEBP_H_
#define WEBP_EXAMPLES_CWEBP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#ifndef WEBP_EXTERN
// This explicitly marks library functions and allows for changing the
// signature for e.g., Windows DLL builds.
# if defined(_WIN32) && defined(WEBP_DLL)
#  define WEBP_EXTERN __declspec(dllexport)
# elif defined(__GNUC__) && __GNUC__ >= 4
#  define WEBP_EXTERN extern __attribute__ ((visibility ("default")))
# else
#  define WEBP_EXTERN extern
# endif  /* defined(_WIN32) && defined(WEBP_DLL) */
#endif  /* WEBP_EXTERN */

WEBP_EXTERN int cwebp_main(int argc, char* argv[]);

#ifdef __cplusplus
}
#endif

#endif  // WEBP_EXAMPLES_CWEBP_H_
