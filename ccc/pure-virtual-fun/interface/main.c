/*
 * main.c
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2019 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *p1 = malloc(3*sizeof(int));
	for(int i = 0; i < 3; i++)
	{
		printf("malloc element %d \n", p1[i]);
	}

	int **pp = malloc(3*sizeof(int*));
	for(int i = 0; i < 3; i++)
	{
		printf("malloc element %p \n", pp[i]);
	}

return 0;
}
