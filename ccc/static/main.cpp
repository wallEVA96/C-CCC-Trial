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

class tree
{
public:
	static int num;
	char quan;
	tree();
	~tree();
	static void printTree();
private:

};

int tree::num = 0;
tree::tree()
{
	cout << ++num << endl;
}

tree::~tree()
{
	cout << --num << endl;
}

void tree::printTree()
{
//	++quan;
	++num;
	cout << "I'm a tree" << endl;
}

int main(int argc, char **argv){
	tree *t1 = new tree;
	new tree;
	
	cout << tree::num << endl;
	t1->printTree();
	//cout << tree::quan << endl;
	
	delete t1;
return 0;
}

