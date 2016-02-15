// Chapter 5 - nullptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void f5_1()
{
	int a = NULL;
	int b = (int)nullptr;
	int* c = NULL;
	int* d = nullptr;

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
	std::cout << "c: " << c << "\n";
	std::cout << "d: " << d << "\n";
}

void f5_2()
{
	int a = 10;
	if (a == NULL)
		std::cout << "a == NULL\n";
	else
		std::cout << "a != NULL\n";

	//if (a == nullptr)
		std::cout << "a == NULL\n";
	//else
		std::cout << "a != NULL\n";
}

void f5_3(int a)
{
	std::cout << "Jestem INT\n";
}

void f5_3(int * a)
{
	std::cout << "Jestem POINTER\n";
}

void f5_3()
{
	f5_3(NULL);
	f5_3(nullptr);

}

int main()
{
	f5_3();
	system("pause");
    return 0;
}

