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
class temp
{
public:
	explicit temp(int a = 5);
};

temp::temp(int a)
{
	cout << a << endl;
}

int main(int argc, char **argv)
{
	temp t1 = 0x12333;
	temp t3(6);
return 0;
}

