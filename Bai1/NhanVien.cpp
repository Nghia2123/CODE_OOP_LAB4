#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;

NhanVien::NhanVien() {
	maSoNV = "";
	tenNV = "";
	iLuongCB = 0;
}

void NhanVien::Nhap() {
	cout << "+ Nhap ma so nhan vien: ";
	getline(cin, maSoNV);
	cout << "+ Nhap ten nhan vien: ";
	getline(cin, tenNV);
	cout << "+ Nhap luong co ban (VND): ";
	cin >> iLuongCB;
}

void NhanVien::Xuat() {
	cout << "+ Ma so nhan vien: " << maSoNV << endl;
	cout << "+ Ten nhan vien: " << tenNV << endl;
	cout << "+ Luong co ban (VND): " << iLuongCB << endl;
}
