//============================================================================
// Name        : pointers.cpp
// Author      : SriChakri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int var=20, *ip;
	ip = &var;

	cout <<"the address of the variable is" << ip;
	return 0;
}
