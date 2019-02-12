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
#include <typeinfo>

using namespace std;

class interface
{
private:
	virtual void intf1() = 0;
	virtual void intf2() = 0;
};

class object1:public interface
{
public:
	virtual void intf1()
	{
		cout << "ob1 intf1" << endl;
	}
	virtual void intf2()
	{
		cout << "ob1 intf2" << endl;
	}

};

class object2:public interface
{
public:
	virtual void intf1()
	{
		cout << "ob2 intf1" << endl;
	}
	virtual void intf2()
	{
		cout << "ob2 intf2" << endl;
	}

};

void CheckObj(interface &obj)
{
	cout << typeid(obj).name() << endl;
	if(typeid(obj) == typeid(object1))
	{
		cout << "is object1" << endl;
		object1 &obf = dynamic_cast<object1&>(obj);
		obf.intf1();
	}
	if(typeid(obj) == typeid(object2))
		cout << "is object2" << endl;
}


int main(int argc, char **argv)
{
	object1 ob1;
	object2 ob2;

	CheckObj(ob1);
	CheckObj(ob2);

return 0;
}

