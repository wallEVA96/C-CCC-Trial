/*
 * base.cpp
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
#include "base.hpp"

void base::bp()
{
	std::cout << pri << std::endl;	
	std::cout << "qq" << std::endl;	
}

char base::prif()
{
	std::cout << "base prif" << std::endl;
	return 0;
}

base::base()
{
	q = 19;
	std::cout << "base construct:" << q << std::endl;
	std::cout << "base construct p:" << &q << std::endl;
}
//base::base(const base & temp){
//	std::cout << "base class construct:" << q << std::endl;
//}
//
base::~base()
{
	std::cout << "base deconstruct" << std::endl;
}
int base::f = 12;
