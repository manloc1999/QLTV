#pragma once
#define auto_init(variable, value) std::decay<decltype(value)>::type variable = value
#include <string>
#include <math.h>
#include "console.h"
#include "Header.h"
using namespace std;

class BackEnd
{
protected:
	int convertToString(string dec);
	void midString(string &str1, string str2);
	unsigned int Random();
public:
	BackEnd();
	~BackEnd();
};