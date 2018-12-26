/*
 * main.cpp
 * Copyright (C) 2018 exbot <exbot@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class Temp{
public:
	Temp(int a);
	void T_print(void);
private:
	int b;
};

Temp::Temp(int a):b{2121}{
}

void Temp::T_print(){
	cout << "list para: " << b << endl;
}
int main(){
	
	Temp t1(222);
	t1.T_print();

return 0;
}
