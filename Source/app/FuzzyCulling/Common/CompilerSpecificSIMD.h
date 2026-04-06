//============================================================================================================
//
//
//                  Copyright (c) 2023, Qualcomm Innovation Center, Inc. All rights reserved.
//                              SPDX-License-Identifier: BSD-3-Clause
//
//============================================================================================================

#if defined(SDOC_ENABLE_NEON) || defined(__aarch64__)
#include "Common/SSE2NEON.h"
#elif defined(SDOC_NATIVE)
#include "SSE2NEON_Win.h"

#endif

