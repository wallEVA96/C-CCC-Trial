/*
 * main1.cpp
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

class leaf;
class tree
{
public:
	void printShape(leaf &l);

};

class leaf
{
friend void tree::printShape(leaf &l);
public:
	static long l_num;
private:
	char shape;
};

long leaf::l_num = 1333;

void tree::printShape(leaf &l)
{
	cout << l.shape << endl;

}

int main(int argc, char **argv)
{
	leaf ln;
	cout << sizeof(ln) << endl;
	cout << ln.l_num << endl;
return 0;
}

