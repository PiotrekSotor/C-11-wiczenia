#pragma once
#include "AbstractClass.h"

class ParentClass :
	public AbstractClass
{
public:
	ParentClass();
	virtual void SayHello()
	{
		std::cout << "Hi, ParentClass\n";
	}
	~ParentClass();
};

