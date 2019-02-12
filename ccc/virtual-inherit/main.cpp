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
#include <list>
using namespace std;

class shape
{
public:
	virtual double CalcArea()
	{
		cout << "CalcArea" << endl;	
		return 0;
	}
	virtual double PrintA()
	{
		cout << "PrintA" << endl;	
		return 0;
	}
	virtual ~shape()
	{
		cout << "~shape" << endl;
	}
	shape()
	{
		cout << "shape" << endl;
	}
	int a;
};
//
//class circle:public shape
//{
//public:
//	circle(double t_r):c_R(t_r)
//	{
//		cout << "circle" << endl;
//	}
//	~circle()
//	{
//		cout << "~circle" << endl;
//	}
//	double CalcArea()
//	{
//		cout << "circle area:" << 3.14*c_R*c_R << endl;
//		return 3.14*c_R*c_R;
//	}
//protected:
//	double c_R;
//};
//
//class rectangle:public shape
//{
//public:
//	rectangle(double t_h, double t_w):height(t_h), wideth(t_w)
//	{
//		cout << "rectangle" << endl;
//	}
//	~rectangle()
//	{
//		cout << "~rectangle" << endl;
//	}
//	double CalcArea()
//	{
//		cout << "rectangle area:" << height*wideth << endl;
//		return height*wideth;
//	}
//protected:
//	double height;
//	double wideth;
//};
//
//int fun(int a, int b, int c)
//{
//	cout << "fun print" << endl;
//return 0;
//}
//
typedef void (*fun_p)();

int main(int argc, char **argv)
{
	shape *s1 = new shape;
	cout << "||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << (void*)s1 << endl;
	cout << *(fun_p**)s1 << endl;
	cout << (void*)(*(fun_p**)s1)[0] << endl;
	cout << (void*)(*(fun_p**)s1)[1] << endl;
	cout << (void*)(*(fun_p**)s1)[2] << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||" << endl;
	fun_p t_fp = NULL;
	t_fp = (*(fun_p**)s1)[0];
	t_fp();
	t_fp = (*(fun_p**)s1)[1];
	t_fp();
	//t_fp = (*(fun_p**)s1)[2];
	//t_fp();
	cout << "||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << (long*)s1 << endl;
	cout << *(long**)s1 << endl;
	cout << *(*(long***)s1) << endl;
	cout << *(*(long***)s1+1) << endl;
	((fun_p)(*(*(long**)s1)))();
	((fun_p)(*(*(long**)s1+1)))();
	cout << "||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << (long**)(*(long**)s1)[0] << endl;
	cout << (long**)(*(long**)s1)[1] << endl;

	cout << "||||||||||||||||||||||||||||||||||||||||||||" << endl;
	shape *o1 = new shape;
	shape *o2 = new shape;

	cout << "function pointer is same" << endl;
	cout << o1 << endl;
	cout << (*(long***)o1)[0] << endl;
	cout << (*(long***)o1)[1] << endl;
	cout << o2 << endl;
	cout << (*(long***)o2)[0] << endl;
	cout << (*(long***)o2)[1] << endl;

	return 0;
}
