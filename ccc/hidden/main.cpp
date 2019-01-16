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
	int pri;
	static int f;
	virtual void prif(){
		pri = 666;
		std::cout << "1112" << std::endl;
	}
	void dep(){
		std::cout << "dep" << std::endl;
	}
	derive(){
		std::cout << "derive construct" << std::endl;
	}
	derive(const base& temp){
		std::cout << "derive base construct" << std::endl;
	}
	~derive(){
		std::cout << "derive deconstruct" << std::endl;
	}
};
int derive::f = 2;

using namespace std;
int main(int argc, char **argv)
{
	typedef void (*fun)();
	derive ee;
	
	std::cout << &ee << std::endl;
	std::cout << ((void*)(&ee)) << std::endl;
	std::cout << (void*)(*(long*)(&ee)) << std::endl;
	std::cout << (void*)(*(long*)*(long*)(&ee)) << std::endl;
	std::cout << (void*)(**(long**)(&ee)) << std::endl;
	std::cout << (void*)((fun**)(&ee)) << std::endl;
	std::cout << (void*)(*(fun*)(&ee)) << std::endl;
	std::cout << (void*)*(fun*)(*(fun*)(&ee)) << std::endl;
	std::cout << (void*)**(fun**)(&ee) << std::endl;
	std::cout << "fffun p " << **(int***)(&ee) << std::endl;
	std::cout << "fffun p " << (*(int***)(&ee))[6] << std::endl;

	std::cout << sizeof(long *) << std::endl;
	std::cout << sizeof(long) << std::endl;

	int ****p;

	fun f_pi = ((fun)(**(long*****)&ee));
	std::cout << "fun p " << (void*)f_pi << std::endl;
	f_pi();
	return 0;
}

