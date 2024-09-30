#include "menu.h"
#include <iostream>

// Меню выбора случайным или ручным заполнением вектора и выходом
enum menuEnum menu() { 
	std::cout << "Press: \n1 - Random fill array\n2 - Manual fill array\n3 - Exit\n";
	return static_cast<menuEnum>(checkData());
}

// Меню выбора да / нет
bool menuYesOrNo() { 
	std::cout << "Do you want to save result in file? \n0-No, another number - Yes\n";
	return static_cast<bool>(checkData());
}