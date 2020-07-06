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
#include <typeinfo>
#include <cxxabi.h>

class temp
{
public:
	temp()
	{
		cout << "temp" << endl;
	}

};

int main(int argc, char **argv)
{
	double t;
	int num;
	temp *tp;
	cout << "data type:" << typeid(t).name() << endl;
	cout << "data type:" << typeid(*tp).name() << endl;
	char *chrp = abi::__cxa_demangle(typeid(t).name(), 0, 0, &num);
	cout << chrp << "  " << t << endl;

return 0;
}
