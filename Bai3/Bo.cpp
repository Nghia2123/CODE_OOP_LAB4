#include "Bo.h"
#include <iostream>
using namespace std;

Bo::Bo() {
	soLuong = 0;
}

void Bo::Nhap() {
	cout << "Nhap so luong bo: ";
	cin >> soLuong;
}

int Bo::ChoSua() {
	int tong = 0;
	for (int i = 0; i < soLuong; i++)
		tong += rand() % 21;
	return tong;
}

void Bo::Keu() {
	if (soLuong > 0)
		cout << "Bo keu: Moo...Moo..." << endl;
}
