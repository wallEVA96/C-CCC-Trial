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
#include "base.hpp"
#include <string>
#include <stdio.h>
class grabase
{


};

class derive:public base, public grabase
{
public:
	int d;
	std::string b;
	int b_name;
	int pri;
	static int f;
	char prif(void){
		pri = 666;
		std::cout << "1112" << std::endl;
		return 0;
	}
	void dep(){
		std::cout << "dep" << std::endl;
	}
	derive(){
		q = 91;
		std::cout << "derive construct:" << q << std::endl;
		std::cout << "derive construct p :" << &q << std::endl;
	}
	~derive(){
		std::cout << "derive deconstruct" << std::endl;
	}
	void hey(const base & temp){
		//temp.q = 21;
		//std::cout << "hey:"<< temp.q << std::endl;
	}
};
int derive::f = 2;

#define PAUSE fgetc(stdin);
using namespace std;
int main(int argc, char **argv)
{
	derive dd;
	dd.b_name = 'a';
	dd.base::b_name = 'c';
	cout << dd.b_name << endl;
	cout << dd.base::b_name << endl;

	dd.prif();
	dd.base::prif();
	PAUSE
	return 0;
}
