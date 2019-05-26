#pragma once
#include "Header.h"
class CayNhiPhan
{
private:
	CayTheDocGia Goc = NULL;
	CayTheDocGia deQuySearch(CayTheDocGia root, int maThe);
public:
	void insert(TheDocGia data);
	void del(TheDocGia data);
	void fix(TheDocGia goc, TheDocGia sua);
	CayTheDocGia search(int tim);
	CayTheDocGia get();
	void set(CayTheDocGia value);
	CayNhiPhan();
	~CayNhiPhan();
};