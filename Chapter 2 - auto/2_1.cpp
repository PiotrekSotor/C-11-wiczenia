#include<ctslib>
#include<iostream>
#include<cmath>

int main (int argc, char* argv[])
{
	int a=13;
	auto b = a+7;
	cout<<"b: "<<b<<"  b.size: " << sizeof(b)<<"\n";
	auto c = sin(3.14);
	cout<<"c: "<<c<<"  c.size: " << sizeof(c)<<"\n";
	return 0;
}
