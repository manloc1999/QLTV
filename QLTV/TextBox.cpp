#include "TextBox.h"



void TextBox::show()
{
	if (check == true) {
		if (keyhit <= 'z'  && keyhit >= 'a' ) {
			content.push_back((char)keyhit);
		}
		else if (keyhit == 8) {
			if (content.size() > 0) {
				content = content.substr(0, content.size() - 1);
			}
		}
	}
	if (check == true) {
		TextColor(15);
	}
	else
	{
		TextColor(12);
	}
	for (int i = 0;i < width + 1;i++) {
		gotoXY(x + i, y);
		cout << char(219);
		gotoXY(x + i, y + height);
		cout << char(219);
	}
	for (int i = 0;i < height;i++) {
		gotoXY(x, y + i);
		cout << char(219);
		gotoXY(x +width + 1, y + i);
		cout << char(219);
	}
	gotoXY(x + width + 1, y + height);
	cout << char(219);
	
	TextColor(15);
	for (int i = 0;i < height - 2;i++) {
		for (int j = 0;j < width - 2;j++) {
			gotoXY(j + x + 1, i + y + 1);
			cout << " ";
		}
	}

	if (content.size() < width) {
		gotoXY(x + 1, y + height / 2);
		cout << content;
		gotoXY(x + 1 + content.size(), y + height / 2);
		for (int i = content.size();i < width - 1;i++) {
			cout << " ";
		}
	}
	else {
		gotoXY(x + 1, y + height / 2);
		for (int i = content.size() - width + 1 ;i < content.size();i++) {
			cout << content[i];
		}
	}
	
	if (check) {
		if (content.size() < width) {
			gotoXY(x + content.size() + 1, height / 2 + y);
		}
		else {
			gotoXY(x + width, height / 2 + y);
		}
	}
	keyhit = 0;
}

TextBox::TextBox()
{
	
}


TextBox::~TextBox()
{
}
