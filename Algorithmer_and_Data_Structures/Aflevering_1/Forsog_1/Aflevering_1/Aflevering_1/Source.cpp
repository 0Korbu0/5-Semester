#pragma once

#include <iostream>

#include "AvlTree.h"


int main()
{
	std::cout << "Hej" << endl;
	AvlTree test;

	test.insert(1);

	test.insert(2);

	test.remove(1);

	test.printTree();

	std::cout << "Hej" << endl;

	return 0;
}