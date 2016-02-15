// Chapter 2 - auto.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include "ChildClass.h"

void f2_1()
{
	int a = 13;
	auto b = a + 7;
	std::cout << "b: " << b << " sizeof(b): " << sizeof(b) << "\n";
	auto c = sin(3.14);
	std::cout << "c: " << c << " sizeof(c): " << sizeof(c) << "\n";

}

void f2_2()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(rand() % 20);
	int suma = 0;
	for (auto it : vec)
	{
		suma += it;
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
		std::cout << "it: " << *it << "\n";
	std::cout << "suma: " << suma << "\n";
}

void f2_3()
{
	auto *tab = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		std::cout << &tab[i] << "\n";
	}
}

void f2_5()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(rand() % 10);
	auto res = std::find(vec.begin(), vec.end(), 5);
	if (res != vec.end())
		std::cout << "Found\n\tPosition: " << res - vec.begin() << "\n";
	else
		std::cout << "Not found\n";                                                                                                                     	
}

void f_polimorfizm()
{
	AbstractClass* ref;
	ref = new ParentClass;
	auto ref_1 = ref;
	ref = new ChildClass;
	auto ref_2 = ref;
	ref_1->SayHello();
	ref_2->SayHello();


}
int main()
{
	srand(time(0));
	f_polimorfizm();
	system("pause");
    return 0;
}

