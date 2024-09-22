#include "menu.h"
#include <iostream>


enum menuEnum menu() {
	std::cout << "Press: \n1 - Random fill array\n2 - Manual fill array\n3 - Exit\n";
	return static_cast<menuEnum>(checkData());
}