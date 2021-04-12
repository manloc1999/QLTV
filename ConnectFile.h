#pragma once
#include <fstream>
#include "CayNhiPhan.h"
#include "DanhSachLienKetDon.h"
#include "DanhSachLienKetKep.h"
#include "MangConTro.h"
#include "BackEnd.h"
class ConnectFile :public BackEnd
{
private:
	MangConTro danhSachDauSach;
	CayNhiPhan danhSachTheDocGia;
	ifstream inputFile;
	ofstream outputFile;
	void importDauSach(string line, ConTroDauSach &data);
	void importDocGia(string line, TheDocGia &data);
public:
	void readFile();
	void wirteFile();
	MangConTroDauSach getMangConTroDauSach();
	void setMangConTroDauSach(MangConTroDauSach value);
	CayTheDocGia getCayTheDocGia();
	void setCayTheDocGia(CayTheDocGia value);
	ConnectFile();
	~ConnectFile();
};

