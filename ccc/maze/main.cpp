/*
 * main.cpp
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2018 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <unistd.h>

using namespace std;

enum queue_list{
	A=0, B, C, D
};

int main(int argc, char **argv)
{
	cout << "\033[0;0H";
	cout << "\033[2J";
	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 20; ++j)
		{
			cout << '+';
		}
		cout << endl;
	}
	cout << "\033[0;10H";
	cout << 'T';
	cout << "\033[0;10H";
	cout.flush();
	sleep(1);
	cout << '+';
	cout << "\033[0;11H";
	cout << 'T';
	cout << "\033[0;11H";
	cout.flush();
	cout << "\033[0;11H";
	cout << 'T';
	cout << "\033[0;11H";
	cout.flush();
	sleep(1);
	cout << '+';
	cout << "\033[0;12H";
	cout << 'T';
	cout << "\033[0;12H";
	cout.flush();

	while(1);
	return 0;
}

