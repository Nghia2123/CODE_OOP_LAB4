#pragma once
#include <string>
using namespace std;

class NhanVien {
protected:
	string maSoNV;
	string tenNV;
	int iLuongCB;
public:
	NhanVien();
	NhanVien(string mnv, string ten, int luong):
		maSoNV(mnv), tenNV(ten), iLuongCB(luong) {}
	void Nhap();
	void Xuat();
};

