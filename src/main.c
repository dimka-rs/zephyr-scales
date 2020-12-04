/* main.c - Application main entry point */

/*
 * Copyright (c) 2015-2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/types.h>
#include <stddef.h>
#include <sys/printk.h>
#include <sys/util.h>
#include <zephyr.h>

#define MY_STACK_SIZE 500
#define MY_PRIORITY 5

extern void ble_thread(void *, void *, void *);
extern void led_thread(void *, void *, void *);

K_THREAD_DEFINE(ble_tid, MY_STACK_SIZE,
		ble_thread, NULL, NULL, NULL,
		MY_PRIORITY, 0, 0);

K_THREAD_DEFINE(led_tid, MY_STACK_SIZE,
		led_thread, NULL, NULL, NULL,
		MY_PRIORITY, 0, 0);

void main(void)
{
	while(1)
	{
		k_sleep(K_FOREVER);
	}
}
