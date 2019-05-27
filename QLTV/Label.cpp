#include "Label.h"



void Label::show()
{
	string b;
	b.resize(width, ' ');
	BackEnd::midString(b, content);
	TextColor(29);
	gotoXY(x, y);
	cout << b;
}

Label::Label()
{
	
}


Label::~Label()
{
}
