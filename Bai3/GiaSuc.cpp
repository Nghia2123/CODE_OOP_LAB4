#include "GiaSuc.h"
#include <random>
#include <iostream>
using namespace std;

GiaSuc::GiaSuc() {
	soLuong = 0;
}

int GiaSuc::laySoLuong() {
	return soLuong;
}

void GiaSuc::SinhCon() {
	int sl = 0;
	for (int i = 0; i < soLuong; i++) {
		sl += rand() % 3 + 1;
	}
	soLuong += sl;
}

int GiaSuc::ChoSua() {
	return 0;
}

void GiaSuc::Keu() {
	cout << "Gia Suc keu" << endl;
}