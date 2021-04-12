#include "Button.h"





void Button::show()
{
	string *b = new string[height];
	for (int i = 0;i < height;i++) {
		b[i].resize(width, ' ');
	}
	BackEnd::midString(b[height / 2], content);
	if (check == true) {
		TextColor(47);
	}
	else
	{
		TextColor(29);
	}
	for (int i = 0;i < height;i++) {
		gotoXY(x, y + i);
		cout << b[i];
	}
}

Button::Button()
{
}


Button::~Button()
{
}
