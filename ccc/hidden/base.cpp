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

void base::prif()
{
	std::cout << "prif" << std::endl;
}

base::base()
{
	std::cout << "base construct" << std::endl;
}

base::~base()
{
	std::cout << "base deconstruct" << std::endl;
}
int base::f = 12;
