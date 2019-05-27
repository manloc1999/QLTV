#include "MangConTro.h"



//bool MangConTro::Full(MangConTroDauSach value)
//{
//	return (value.soLuongSach == MAXDAUSACH ? true : false);
//}

void MangConTro::insert(ConTroDauSach data)
{
	mangConTro.data[mangConTro.soLuongSach++] = data;
	int index;
	for (index = 0;index < mangConTro.soLuongSach 
	&& mangConTro.data[index]->tenSach < data->tenSach;index++);
	ConTroDauSach temp;
	for (int i = mangConTro.soLuongSach - 1;i > index;i--) {
		temp = mangConTro.data[i - 1];
		mangConTro.data[i - 1] = mangConTro.data[i];
		mangConTro.data[i] = temp;
	}

}

void MangConTro::del(int index)
{
	if (index < mangConTro.soLuongSach) {
		ConTroDauSach temp = mangConTro.data[index];
		for (int i = index + 1;i < mangConTro.soLuongSach;i++)
			mangConTro.data[i - 1] = mangConTro.data[i];
		mangConTro.data[mangConTro.soLuongSach - 1] = NULL;
		mangConTro.soLuongSach--;
		delete temp;
	}
}

int MangConTro::search(string tenSach)
{
	for (int i = 0;i < mangConTro.soLuongSach;i++) {
		if (tenSach == mangConTro.data[i]->tenSach)
			return i;
	}
	return -1;
}

MangConTroDauSach MangConTro::get()
{
	return mangConTro;
}

void MangConTro::set(MangConTroDauSach value)
{
}

MangConTro::MangConTro()
{
}


MangConTro::~MangConTro()
{
}
