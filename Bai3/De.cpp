#include "De.h"
#include <iostream>
using namespace std;

De::De() {
	soLuong = 0;
}

void De::Nhap() {
	cout << "Nhap so luong de: ";
	cin >> soLuong;
}

int De::ChoSua() {
	int tong = 0;
	for (int i = 0; i < soLuong; i++)
		tong += rand() % 11;
	return tong;
}

void De::Keu() {
	if (soLuong > 0)
		cout << "De keu: Meh...Meh..." << endl;
}