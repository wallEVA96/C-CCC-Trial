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

class abstract
{
public:
	virtual void pr_info() = 0;
	virtual void record()
	{
		cout << "abstract info" << endl;
	}
};

class object:public abstract
{
	virtual void pr_info()
	{
		cout << "pr info" << endl;
	}

};

int main(int argc, char **argv)
{
	object a1;
return 0;
}

