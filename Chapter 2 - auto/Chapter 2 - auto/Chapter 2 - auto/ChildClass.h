#pragma once
#include "ParentClass.h"
class ChildClass :
	public ParentClass
{
public:
	ChildClass();
	void SayHello()
	{
		std::cout << "Hi, ChildClass\n";
	}
	~ChildClass();
};

