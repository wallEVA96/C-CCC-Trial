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
#include "./common.hpp"
using namespace std;

class temp{
public:
	temp();
	temp(int n);
	int p;
	common t_c1;
};

temp::temp(int n):t_c1(n),p(n){
	cout << " construct fun" << endl;
}

int main(int argc, char **argv){
	temp t1(2);
	
return 0;
}

