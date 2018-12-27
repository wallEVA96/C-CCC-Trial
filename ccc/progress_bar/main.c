/*
 * main.c
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2018 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

inline void ProgressBar(int percent);

int main(int argc, char **argv)
{
	srand(time(NULL));
	for(int i = 0; i < 100; i++)
	{
		//ProgressBar(rand());
		ProgressBar(i);
		usleep(500000);
	}
return 0;
}

void ProgressBar(int percent)
{
	printf("\r");
	printf("[ ");
	percent %= 100;
	for(int i = 0; i < percent; i++)
		printf("+");
	for(int i = 0; i < 100-percent; i++)
		printf(" ");
	printf(" ]");
	fflush(stdout);
}
