/*
 * main.cpp
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2019 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class car
{
public:
	friend void printCar(car &c);
private:
	int tires;
	int windows;
};

void printCar(car &c)
{
	cout <<  c.tires << endl;
	cout <<  c.windows << endl;
}

int main(int argc, char **argv)
{
	car fiary;
	printCar(fiary);
	return 0;
}
