#pragma once
#include "Header.h"
class MangConTro
{
	MangConTroDauSach mangConTro;
public:
	void insert(ConTroDauSach data);
	void del(int index);
	int search(string tenSach);
	MangConTroDauSach get();
	void set(MangConTroDauSach value);
	MangConTro();
	~MangConTro();
};

