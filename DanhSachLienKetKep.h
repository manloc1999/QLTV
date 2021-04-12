#pragma once
#include "Header.h"
class DanhSachLienKetKep
{
private:
	DauCuoi danhSach;
public:
	void insert(MUONTRA muonTra);
	void del(MUONTRA muonTra);
	void fix(MUONTRA dau, MUONTRA sua);
	DSLKKMuonTra search(string maSach);
	DauCuoi get();
	void set(DauCuoi value);
	DanhSachLienKetKep();
	~DanhSachLienKetKep();
};

