#include "MangConTro.h"
#include "BackEnd.h"
#include "ConnectFile.h"
#include "Button.h"
#include "TextBox.h"
#include "CayNhiPhan.h"
#include "MainWindow.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESC 27
#define BACKSPACE 8
#define Bell 7

void inCay(CayTheDocGia  tree) {
	if (tree != NULL) {
		cout << tree->data.MATHE << " ";
		inCay(tree->left);
		inCay(tree->right);
	}
}
int main() {
//	MainWindow *p = new MainWindow();
//	p->~MainWindow();
//	delete p;
//	CayNhiPhan *tree = new CayNhiPhan();
//	TheDocGia a, b, c, d;
//	a.MATHE = 2;
//	a.ho = "fsdf";
//	b.MATHE = 5;
//	b.ho = "sfrasf";
//	c.MATHE = 1;
//	c.ho = "ajsdna";
//	c.MATHE = 2;
//	d.ho = "phgfg";
//	d.MATHE = 7;
//	tree->insert(a);
//	tree->insert(b);
//	tree->insert(c);
//	tree->insert(d);
//	inCay(tree->get());

	/*system("color 5f");*/
	//MangConTro *p = new MangConTro();
	//ConTroDauSach a, b, c, d, e;
	//a = new DauSach;
	//b = new DauSach;
	//c = new DauSach;
	//d = new DauSach;
	//e = new DauSach;
	//a->ISBN = "jdansd";
	//a->namXuatBan = 2001;
	//a->soTrang = 12;
	//a->tacGia = "sadasd";
	//a->tenSach = "zfszdf";
	//a->theLoai = "sdkad";
	//p->insert(a);
	//b->ISBN = "jdansd";
	//b->namXuatBan = 2001;
	//b->soTrang = 10;
	//b->tacGia = "sadasd";
	//b->tenSach = "jkhk";
	//b->theLoai = "sdkad";
	//p->insert(b);
	//c->ISBN = "jdansd";
	//c->namXuatBan = 2001;
	//c->soTrang = 15;
	//c->tacGia = "sadasd";
	//c->tenSach = "ytutyj";
	//c->theLoai = "sdkad";
	//p->insert(c);
	//d->ISBN = "jdansd";
	//d->namXuatBan = 2001;
	//d->soTrang = 17;
	//d->tacGia = "sadasd";
	//d->tenSach = "ghfh";
	//d->theLoai = "sdkad";
	//p->insert(d);
	//e->ISBN = "jdansd";
	//e->namXuatBan = 221;
	//e->soTrang = 23;
	//e->tacGia = "hgjghjzzz";
	//e->tenSach = "ghfh";
	//e->theLoai = "llll";
	//p->insert(e);
	//p->Full(p->~MangConTro);

	//for (int i = 0;i < p->get().soLuongSach;i++) {
	//	cout << p->get().data[i]->tenSach << " - ";
	//}
	//cout << endl;
	///*p->del(2);
	//for (int i = 0;i < p->get().soLuongSach;i++) {
	//	cout << p->get().data[i]->tenSach << " - ";
	//}*/
	///*cout << p->search("ghfh");*/
	/*ConnectFile *conn = new ConnectFile();
	MangConTroDauSach a = conn->getMangConTroDauSach();
	for (int i = 0;i < a.soLuongSach;i++) {
		cout << a.data[i]->ISBN << endl;
	}*/
	/*MangConTroDauSach a = conn->getMangConTroDauSach();
	if (a.soLuongSach != 0) {
		cout << a.data[a.soLuongSach - 1]->ISBN;
	}*/
	Button *b[4];
	for (int i = 0;i < 4;i++) {
		b[i] = new Button();
		b[i]->content += "button ";
		b[i]->height = 3;
		b[i]->width = 20;
		b[i]->x = i * 21;
		b[i]->y = 2;
	}
	TextBox *t = new TextBox();
	t->height = 2;
	t->width = 50;
	t->x = 30;
	t->y = 10;
	int n = 2;
	int k = 0;
	while (true)
	{
		switch (n)
		{
		case 0:
			b[0]->check = true;
			break;
		case 1:
			b[1]->check = true;
			break;
		case 2:
			b[2]->check = true;
			break;
		case 3:
			b[3]->check = true;
			break;
		case 4:
			t->check = true;
			break;
		}
		for (int i = 0;i < 4;i++) {
			b[i]->show();
		}
		t->show();
		k = _getch();
		if (k == 224) {
			k = _getch();
			if (k == KEY_RIGHT) {
				if (n < 3) {
					n++;
				}
				else {
					n = 0;
				}

			}
			else if (k == KEY_LEFT) {
				if (n == 0) {
					n = 3;
				}
				else {
					n--;
				}
			}
			else if (k == KEY_UP) {
				n = 0;
			}
			else if (k == KEY_DOWN) {
				n = 4;
			}
		}
	}
	///*	else if (k == 13) {
	//		switch (n)
	//		{
	//		case 0:
	//			t->check = true;
	//			break;
	//		case 1:
	//			t->check = false;
	//			break;
	//		case 2:
	//			t->check = false;
	//			break;
	//		case 3:
	//			t->check = false;
	//			break;
	//		case 4:
	//			t->check = 
	//		}
	//	}*/
	//	else {
	//		t->keyhit = k;
	//	}
	//	for (int i = 0;i < 4;i++) {
	//		if (b[i]->enter) {
	//			gotoXY(20, 5);
	//			cout << n;
	//		}
	//	}
	//	for (int i = 0;i < 4;i++) {
	//		b[i]->check = false;
	//	}
	//	t->check = false;
	//}
	_getch();
	//system("pause");
}
