#pragma once
#include "NhanVien.h"
#include <string>
using namespace std;

class QuanLy: public NhanVien {
private:
	double dTyLeThuong;
public:
	QuanLy();
	QuanLy(string mnv, string ten, int luong, double tyle) :
		NhanVien(mnv, ten, luong), dTyLeThuong(tyle){}
	void Nhap();
	void Xuat();
	double TienThuong();
};

