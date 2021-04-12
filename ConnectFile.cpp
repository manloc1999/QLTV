#include "ConnectFile.h"



void ConnectFile::importDauSach(string line, ConTroDauSach &data)
{
	data = new DauSach;
	string temp = "";
	int n = 0;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->ISBN = temp;
	temp = "";
	n++;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->tenSach = temp;
	temp = "";
	n++;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->soTrang = BackEnd::convertToString(temp);
	temp = "";
	n++;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->tacGia = temp;
	temp = "";
	n++;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->namXuatBan = BackEnd::convertToString(temp);
	temp = "";
	n++;
	for (;line[n] != ','; n++) {
		temp += line[n];
	}
	data->theLoai = temp;
	temp = "";
	n++;
	if (n < line.size()) {
		Sach sach;
		DanhSachLienKetDon danhSachSach;
		while (n < line.size())
		{
			for (;line[n] != ','; n++) {
				temp += line[n];
			}
			sach.maSach = temp;
			temp = "";
			n++;
			sach.trangThai = line[n] - '0';
			n++;n++;
			for (;line[n] != ','; n++) {
				temp += line[n];
			}
			sach.viTri = temp;
			temp = "";
			n++;
			danhSachSach.insert(sach);
		}
		data->dms = danhSachSach.get();
	}
}

void ConnectFile::importDocGia(string line, TheDocGia & data)
{

}

void ConnectFile::readFile()
{
	if (inputFile.is_open()) {
		if (inputFile.peek() != EOF) {
			string a = "";
			getline(inputFile, a);
			int n = BackEnd::convertToString(a);
			if (n != 0) {
				ConTroDauSach dauSach;
				string dsds;
				for (int i = 0;i < n;i++) {
					dsds = "";
					getline(inputFile, dsds);
					importDauSach(dsds, dauSach);
					danhSachDauSach.insert(dauSach);
				}
			}

			if (inputFile.eof()) {
				string dsdg;
				TheDocGia theDocGia;
				while (!inputFile.eof()) {
					dsdg = "";
					getline(inputFile, dsdg);
					importDocGia(dsdg, theDocGia);
					danhSachTheDocGia.insert(theDocGia);
				}
			}
		}
	}
}

void ConnectFile::wirteFile()
{
	DanhSachDauSach p = danhSachDauSach.get();
	outputFile << p.soLuongSach << endl;
	for (int i = 0;i < p.soLuongSach;i++) {
		outputFile << p.data[i]->ISBN << ',' << p.data[i]->tenSach << ',' 
			<< p.data[i]->soTrang << ',' << p.data[i]->tacGia << ',' << p.data[i]->namXuatBan 
			<< ',' << p.data[i]->theLoai << ',';
		if (p.data[i]->dms != NULL) {
			DSLKDSach run;
			for (run = p.data[i]->dms;run != NULL;run = run->next) {
				outputFile << run->data.maSach << ',' << run->data.trangThai << ',' << run->data.viTri << ',';
			}
		}
	}
	
}

MangConTroDauSach ConnectFile::getMangConTroDauSach()
{
	return danhSachDauSach.get();
}

void ConnectFile::setMangConTroDauSach(MangConTroDauSach value)
{
	danhSachDauSach.set(value);
}

CayTheDocGia ConnectFile::getCayTheDocGia()
{
	return danhSachTheDocGia.get();
}

void ConnectFile::setCayTheDocGia(CayTheDocGia value)
{
	danhSachTheDocGia.set(value);
}

ConnectFile::ConnectFile()
{
	inputFile.open("data.txt", ios::in);
	outputFile.open("data.txt", ios::out);
	this->readFile();
}


ConnectFile::~ConnectFile()
{
	inputFile.close();
	outputFile.close();
	this->wirteFile();
}
