#pragma once
#include "NhanVien.h"
#include <string>
using namespace std;

class KySu: public NhanVien {
private:
	int iGioLamThem;
public:
	KySu();
	KySu(string mnv, string ten, int luong, int gio) :
		NhanVien(mnv, ten, luong), iGioLamThem(gio) {}
	void Nhap();
	void Xuat();
	double TienThuong();
};

