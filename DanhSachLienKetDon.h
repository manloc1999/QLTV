#pragma once
#include "Header.h"
class DanhSachLienKetDon
{
	DSLKDSach Dau = NULL;
public:
	void insert(Sach data);
	void del(Sach data);
	void fix(Sach dau, Sach sua);
	DSLKDSach search(string maSach);
	DSLKDSach get();
	void set(DSLKDSach value);
	DanhSachLienKetDon();
	~DanhSachLienKetDon();
};

