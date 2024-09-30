#pragma once
#include "checkData.h"

enum menuEnum menu();
bool menuYesOrNo();

enum menuEnum {
	randomFill = 1, // Случайное заполнение вектора
	manual, // Ручное заполнение вектора
	exitEnum // Выход
};