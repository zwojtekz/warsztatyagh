// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "HelloWorldClass.h"
#include <iostream>


void HelloWorldClass::writeHello()
{
	std::cout << "Hello World" << std::endl;
}

void HelloWorldClass::waitForAnyKey()
{
	char c;
	std::cin >> c;
}

int HelloWorldClass::calculate(int x, int y)
{
	return x+y;
}

void HelloWorldClass::showResult(int val)
{
	std::cout << "result is " << val << std::endl;
}
