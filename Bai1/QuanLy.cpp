#include "QuanLy.h"
#include <iostream>	
#include <iomanip>
using namespace std;

QuanLy::QuanLy() {
	dTyLeThuong = 0;
}

void QuanLy::Nhap() {
	NhanVien::Nhap();
	cout << "+ Nhap ty le thuong: ";
	cin >> dTyLeThuong;
	cin.ignore();
}

void QuanLy::Xuat() {
	NhanVien::Xuat();
	cout << "+ Ty le thuong: " << dTyLeThuong << endl;
	cout << "+ Tien thuong (VND): " << setprecision(0) << fixed << TienThuong() << endl;
	cout << endl;
}

double QuanLy::TienThuong() {
	return iLuongCB * dTyLeThuong;
}

