#include "BackEnd.h"



int BackEnd::convertToString(string dec)
{
	int so = 0;
	for (int i = 0;i < dec.size();i++) {
		so += pow(10, dec.size() - i - 1) * (dec[i] - '0');
	}
	return so;
}

void BackEnd::midString(string & str1, string str2)
{
	int n = (str1.size() - str2.size()) / 2;
	for (int i = 0;i < str2.size();i++) {
		str1[i + n] = str2[i];
	}
}


BackEnd::BackEnd()
{
}


BackEnd::~BackEnd()
{
}
