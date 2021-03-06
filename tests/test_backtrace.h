/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright 2015-2020, Intel Corporation
 */

#ifndef TEST_BACKTRACE_H
#define TEST_BACKTRACE_H

void test_dump_backtrace(void);
void test_sighandler(int sig);
void test_register_sighandlers(void);

#endif
