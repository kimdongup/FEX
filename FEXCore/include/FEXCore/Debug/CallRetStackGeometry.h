// SPDX-License-Identifier: MIT
#pragma once

/* Shared with the native iOS diagnostics. Keep reservation, generated guards,
 * resets and diagnostic interpretation on the same compile-time geometry. */
#if (defined(FEX_IOS_HOST) && defined(ARCHITECTURE_arm64ec)) || defined(WINE_IOS)
#define FEX_CALLRET_STACK_SIZE 0x100000u
#else
#define FEX_CALLRET_STACK_SIZE 0x800000u
#endif
#define FEX_CALLRET_DEFAULT_OFFSET (FEX_CALLRET_STACK_SIZE / 2)
#define FEX_CALLRET_LIVE_OFFSET (FEX_CALLRET_STACK_SIZE / 4)
#define FEX_CALLRET_LIVE_SIZE (FEX_CALLRET_STACK_SIZE / 2)
