/*
 * main.c
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2020 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>

#define NUM_THREADS 2

void reboot_fork(void)
{
	printf("pthread  reboot start \r\n");
}

void* print_thr_msg(void* ptr)
{
	printf("Thr msg: %s \r\n", (char*)(ptr));

	if(pthread_atfork(NULL, reboot_fork, reboot_fork) == 0)
	{
		printf("fork child thread normally\r\n");
		pid_t pid_thr = fork();
//		if(pid_thr == 0){
//			sleep(1);
//			printf("fork child normally\r\n");
//		}
	}
	printf("Thread  End\r\n");
}

struct glb_struct{
	char *name;
	int  index;
};

int main(int argc, char **argv)
{
	printf("val: %d \r\n", index);

}

