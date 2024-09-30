#pragma once
#include "checkData.h"

enum menuEnum menu();
bool menuYesOrNo();

enum menuEnum {
	randomFill = 1,
	manual,
	exitEnum
};