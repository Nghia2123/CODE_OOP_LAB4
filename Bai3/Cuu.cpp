#include "Cuu.h"
#include <iostream>
using namespace std;

Cuu::Cuu() {
	soLuong = 0;
}

void Cuu::Nhap() {
	cout << "Nhap so luong cuu: ";
	cin >> soLuong;
}

int Cuu::ChoSua() {
	int tong = 0;
	for (int i = 0; i < soLuong; i++)
		tong += rand() % 6;
	return tong;
}

void Cuu::Keu() {
	if (soLuong > 0)
		cout << "Cuu keu: Bee...Bee..." << endl;
}