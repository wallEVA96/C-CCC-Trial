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

class b
{
public:
	b()
	{
		cout << "b construct" << endl;
	}
protected:

};

class bb:public b
{
public:
	bb()
	{
		cout << "bb consteuct" << endl;
	}
protected:

};

class bbb:public bb
{
public:
	bbb(char a)
	{
		cout << "bbb construct" << endl;
	}
	~bbb()
	{
		cout << "bbb desctruct" << endl;
	}
protected:

};

int main(int argc, char **argv)
{
	int *p = new int(96);
	bbb *a_p = new bbb[2]{('a'), ('a')};
	delete[] a_p;
}
