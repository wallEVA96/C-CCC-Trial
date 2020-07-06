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
#include <vector>
#include <map>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	vector<int> arr(3);
	arr[0] = 9;
	arr[1] = 10;
	arr[2] = 6;
	vector<int>::iterator c_iter = arr.begin();
	for(;c_iter != arr.end(); c_iter++)
	{
		cout << *c_iter << endl;
	}
	//map<string,string> m;
	//pair<string,string> p1("SH","Shanghai");
	//pair<string,string> p2("BJ","Beijing");

	//m.insert(p1);
	//m.insert(p2);

	//cout << m["BJ"] << endl;
return 0;
}

