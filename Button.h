#pragma once
#include <iostream>
#include <string>
#include "BackEnd.h"
using namespace std;
class Button :public BackEnd
{
private:
public:
	string content = "";
	int x = 0;
	int y = 0;
	int width = 0;
	int height = 0;
	bool check = 0;
	bool enter = 0;
	void show();
	Button();
	~Button();
};

