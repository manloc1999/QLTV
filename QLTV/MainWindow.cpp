#include "MainWindow.h"



void MainWindow::menu()
{
	Button *b[6];
	for (int i = 0;i < 6;i++) {
		b[i] = new Button();
		b[i]->height = 3;
		b[i]->width = 20;
		b[i]->x = 2;
		b[i]->y = 4 + (4 * i);
		b[i]->show();
	}
}

MainWindow::MainWindow()
{
	system("color f0");
	pointerArr->set(conn->getMangConTroDauSach());
	bitTree->set(conn->getCayTheDocGia());
	cout << "a";
	while (true)
	{
		this->menu();
		_getch();
	}
}


MainWindow::~MainWindow()
{
	conn->setMangConTroDauSach(pointerArr->get());
	conn->setCayTheDocGia(bitTree->get());
	delete pointerArr;
	delete bitTree;
	delete conn;
}