// Chapter 2 - auto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a = 13;
	auto b = a + 7;
	std::cout << "b: " << b << " sizeof(b): " << sizeof(b) << "\n";
	auto c = sin(3.14);
	std::cout << "c: " << c << " sizeof(c): " << sizeof(c) << "\n";
	system("pause");
    return 0;
}

