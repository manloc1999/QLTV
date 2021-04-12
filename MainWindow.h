#pragma once
#include <conio.h>
#include "ConnectFile.h"
#include "MangConTro.h"
#include "CayNhiPhan.h"
#include "Button.h"
#include "Label.h"
#include "TextBox.h"


class MainWindow
{
private:
	ConnectFile *conn = new ConnectFile();
	MangConTro *pointerArr = new MangConTro();
	CayNhiPhan *bitTree = new CayNhiPhan();
	void menu();
public:
	MainWindow();
	~MainWindow();
};

