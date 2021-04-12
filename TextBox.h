#pragma once
#include "BackEnd.h"
class TextBox :public BackEnd
{
private:
public:
	string content = "";
	int x = 0;
	int y = 0;
	int width = 0;
	int height = 0;
	bool check = 0;
	int keyhit = 0;
	void show();
	TextBox();
	~TextBox();
};

