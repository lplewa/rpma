/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright 2019-2020, Intel Corporation
 */

/*
 * librpma.c -- entry points for librpma
 */

#include "librpma.h"

/*
 * librpma_init -- load-time initialization for librpma
 *
 * Called automatically by the run-time loader.
 */
__attribute__((constructor)) static void
librpma_init(void)
{
}

/*
 * librpma_fini -- librpma cleanup routine
 *
 * Called automatically when the process terminates.
 */
__attribute__((destructor)) static void
librpma_fini(void)
{
}
