#include "CayNhiPhan.h"



CayTheDocGia CayNhiPhan::deQuySearch(CayTheDocGia root, int maThe)
{
	if (root != NULL) {
		if (root->data.MATHE < maThe) {
			deQuySearch(root->left, maThe);
		}
		else if (root->data.MATHE > maThe) {
			deQuySearch(root->right, maThe);
		}
		else if (root->data.MATHE == maThe) {
			return root;
		}
	}
	return NULL;
}

void CayNhiPhan::insert(TheDocGia data)
{
	CayTheDocGia temp = deQuySearch(Goc, data.MATHE);
 	if (Goc == NULL) {
		CayTheDocGia p = new DanhSachTheDocGia;
		p->data = data;
		Goc = p;
	}
	else {
		CayTheDocGia run = Goc;
		while (run->left != NULL && run->right != NULL)
		{
			if (run->data.MATHE < data.MATHE) {
				run = run->right;
			}
			else if (run->data.MATHE > data.MATHE) {
				run = run->left;
			}
		}
		CayTheDocGia p = new DanhSachTheDocGia;
		p->data = data;
		if (run->data.MATHE < data.MATHE) {
			run->right = p;
		}
		else if (run->data.MATHE > data.MATHE) {
			run->left = p;
		}
		Goc = run;
	}
}

void CayNhiPhan::del(TheDocGia data)
{
}

void CayNhiPhan::fix(TheDocGia goc, TheDocGia sua)
{
}

CayTheDocGia CayNhiPhan::search(int tim)
{
	return deQuySearch(Goc, tim);
}

CayTheDocGia CayNhiPhan::get()
{
	return Goc;
}

void CayNhiPhan::set(CayTheDocGia value)
{
}

CayNhiPhan::CayNhiPhan()
{
}


CayNhiPhan::~CayNhiPhan()
{
}
