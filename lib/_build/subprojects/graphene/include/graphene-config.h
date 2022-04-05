/* graphene-config.h
 *
 * This is a generated file, DO NOT EDIT.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __GI_SCANNER__
# ifndef GRAPHENE_SIMD_BENCHMARK

#  if defined(__SSE__) || \
   (defined(_M_X64) && (_M_X64 > 0))
#define GRAPHENE_HAS_SSE 1
# endif

#  if defined(__ARM_NEON__) || defined (_M_ARM64) || defined (__aarch64__)
/* #undef GRAPHENE_HAS_ARM_NEON */
#  endif

#  if defined(__GNUC__) && (__GNUC__ >= 5 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 9)) && !defined(__arm__)
#define GRAPHENE_HAS_GCC 1
#define GRAPHENE_HAS_INTRINSICS 1
#  endif

#  if defined(__clang__) && !defined(__arm__)
#define GRAPHENE_HAS_INTRINSICS 1
#  endif

#  define GRAPHENE_HAS_SCALAR 1
# endif /* GRAPHENE_SIMD_BENCHMARK */

# if defined(GRAPHENE_HAS_SSE)
#  define GRAPHENE_USE_SSE
#  define GRAPHENE_SIMD_S "sse"
# elif defined(GRAPHENE_HAS_ARM_NEON)
#  define GRAPHENE_USE_ARM_NEON
#  define GRAPHENE_SIMD_S "neon"
# elif defined(GRAPHENE_HAS_INTRINSICS)
#  if defined(GRAPHENE_HAS_GCC)
#    define GRAPHENE_USE_GCC
#  endif
#  define GRAPHENE_USE_INTRINSICS
#  define GRAPHENE_SIMD_S "intrinsics"
# elif defined(GRAPHENE_HAS_SCALAR)
#  define GRAPHENE_USE_SCALAR
#  define GRAPHENE_SIMD_S "scalar"
# else
#  error "Unsupported platform."
# endif

# if defined(GRAPHENE_USE_SSE)
#  include <xmmintrin.h>
#  include <emmintrin.h>
#  if defined(_M_IX86_FP)
#   if _M_IX86_FP >= 2
#    define GRAPHENE_USE_SSE4_1
#   endif
#  elif defined(__SSE4_1__)
#   define GRAPHENE_USE_SSE4_1
#  elif defined(_MSC_VER)
#   define GRAPHENE_USE_SSE4_1
#  endif
#  if defined(GRAPHENE_USE_SSE4_1)
#   include <smmintrin.h>
#  endif
typedef __m128 graphene_simd4f_t;
# elif defined(GRAPHENE_USE_ARM_NEON)
#  if defined (_MSC_VER) && (_MSC_VER < 1920) && defined (_M_ARM64)
#   include <arm64_neon.h>
#  else
#   include <arm_neon.h>
#  endif
typedef float32x4_t graphene_simd4f_t;
# elif defined(GRAPHENE_USE_INTRINSICS)
typedef float graphene_simd4f_t __attribute__((vector_size(16)));
# elif defined(GRAPHENE_USE_SCALAR)
typedef struct {
  /*< private >*/
  float x, y, z, w;
} graphene_simd4f_t;
# else
#  error "Unsupported platform."
# endif
#else /* __GI_SCANNER__ */
/* The gobject-introspection scanner has issues parsing the
 * system headers with SIMD built-ins, so we fall back to
 * scalars; it does not really matter, as we wrap them in
 * our public API, and introspection cannot use the SIMD API
 * directly anyway.
 */
# define GRAPHENE_USE_SCALAR

typedef struct {
  /*< private >*/
  float x, y, z, w;
} graphene_simd4f_t;
#endif /* __GI_SCANNER__ */

typedef struct {
  /*< private >*/
  graphene_simd4f_t x, y, z, w;
} graphene_simd4x4f_t;

#ifdef __cplusplus
}
#endif
