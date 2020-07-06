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

class DevidedByZero
{
public:
	DevidedByZero(char *p);
	const char *description(void);

private:
	char *desp;
};

DevidedByZero::DevidedByZero(char *p):desp(p)
{

}

const char *DevidedByZero::description()
{
	return desp;
}

double devideAB(float a, float b)
{
	if(b == 0)
		throw DevidedByZero("f**k exception");
	return a/b;
}

int main(int argc, char **argv)
{
	double x = 100, y = 0;
	
	try{
		std::cout << devideAB(x, y) << std::endl;
	}
	catch(DevidedByZero & out){
		std::cerr << out.description() << std::endl;
	}

	try{
		devideAB(100, 0);
	}
	catch(...){
		std::cerr << "err output by all " << std::endl;
	}
	try{
		throw 96;
	}
	catch(int &a)
	{
		std::cerr << "throw int data:" << a << std::endl;
	}
	
	while(1){
		
	}
	return 0;
}

