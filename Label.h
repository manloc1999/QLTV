#pragma once
#include "BackEnd.h"
class Label :public BackEnd
{
private:
public:
	string content = "";
	int x = 0;
	int y = 0;
	int width = 0;
	bool check = 0;
	bool enter = 0;
	void show();
	Label();
	~Label();
};

