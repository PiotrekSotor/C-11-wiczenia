#pragma once
#include <iostream>
class AbstractClass
{
public:
	AbstractClass();
	virtual void SayHello() = 0;
	~AbstractClass();
};

