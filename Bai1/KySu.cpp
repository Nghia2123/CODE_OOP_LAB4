#include "KySu.h"
#include <iostream>
#include <iomanip>
using namespace std;

KySu::KySu() {
	iGioLamThem = 0;
}

void KySu::Nhap() {
	NhanVien::Nhap();
	cout << "+ Nhap so gio lam them: ";
	cin >> iGioLamThem;
	cin.ignore();
}

void KySu::Xuat() {
	NhanVien::Xuat();
	cout << "+ So gio lam them: " << iGioLamThem << endl;
	cout << "+ Tien thuong (VND): " << setprecision(0) << fixed << TienThuong() << endl;
	cout << endl;
}

double KySu::TienThuong() {
	return iGioLamThem * 100000;
}