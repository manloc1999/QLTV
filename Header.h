#pragma once
#include <iostream>
#include <string>
using namespace std;

#define MAXDAUSACH 2

struct Sach {
	string maSach;
	unsigned short int trangThai;
	string viTri;
};

struct DanhMucSach {
	Sach data;
	DanhMucSach *next = NULL;
};
typedef DanhMucSach *DSLKDSach;

struct DauSach
{
	string ISBN;
	string tenSach;
	unsigned int soTrang;
	string tacGia;
	unsigned int namXuatBan;
	string theLoai;
	DSLKDSach dms = NULL;
};
typedef DauSach *ConTroDauSach;

struct DanhSachDauSach {
	ConTroDauSach data[MAXDAUSACH];
	int soLuongSach = 0;
};
typedef DanhSachDauSach MangConTroDauSach;


struct	MUONTRA {
	string MASACH;
	string ngayMuon;
	string ngayTra;
	unsigned short int trangThai;
};

struct DanhSachMUONTRA {
	MUONTRA muonTra;
	DanhSachMUONTRA *next = NULL, *prev = NULL;
};
typedef DanhSachMUONTRA *DSLKKMuonTra;

struct DauCuoi {
	DSLKKMuonTra dau = NULL, cuoi = NULL;
};

struct TheDocGia {
	int MATHE;
	string ho;
	string ten;
	bool phai;
	string trangThai;
	DSLKKMuonTra danhSachMuonTra = NULL;
};

struct DanhSachTheDocGia {
	TheDocGia data;
	DanhSachTheDocGia *left = NULL, *right = NULL;
};
typedef DanhSachTheDocGia *CayTheDocGia;
