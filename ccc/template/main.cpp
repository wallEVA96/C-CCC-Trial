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

#include <iostream>
using namespace std;

//template <typename T>
//class temp{
//public:
//	temp(T i):num(i){cout << num << endl;};
//	T num;
//};

//template <typename T>
//temp<T>::temp(T i):num(i){std::cout << num << std::endl;}

//class temp{
//public:
//	int num;
//	temp(int i):num(i){cout << num << endl;};
//
//};
template <typename T>
void temp(T i){cout << i << endl;}
void temp(char i){cout << i << "ori"<< endl;}

int main(int argc, char **argv){
	temp(1);
	temp('2');

	int t = 0;
	++t;

return 0;
}
