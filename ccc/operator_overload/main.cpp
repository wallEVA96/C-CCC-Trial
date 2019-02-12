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

#include<iostream>
using namespace std;

class numeric_cal{
public:
	int num;
	int mun;
	numeric_cal(int n);
	numeric_cal& operator+();
	numeric_cal& operator+(numeric_cal rv);
	numeric_cal& operator%(int n);
};

numeric_cal& numeric_cal::operator%(int n)
{
	num %= n; 	
	return *this;
}

numeric_cal::numeric_cal(int n):num(n)
{
	cout << num << endl;
}

numeric_cal& numeric_cal::operator+()
{
	cout << num << endl;
}

numeric_cal& numeric_cal::operator+(numeric_cal rv)
{
	cout << num << endl;
}

int main(int argc,char **argv)
{

	numeric_cal t1(1);
	numeric_cal t2(2);

	+t1;
return 0;
}

