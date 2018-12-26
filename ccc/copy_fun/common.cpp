/*
 * common.cpp
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2018 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include "./common.hpp"
#include <iostream>
using namespace std;
struct flower{
	int leaf;
	char *name;
};

common::common(int a){
	cout << "common:" << a << endl;
} 
void common::print_c(){
	cout << " common print, :)" << endl;
}
