#include "KySu.h"
#include "QuanLy.h"
#include <iostream>

int main() {
	QuanLy ql;
	KySu ks;
	cout << "Nhap thong tin cua quan ly: " << endl;
	ql.Nhap();
	cout << endl;

	cout << "Nhap thong tin cua ky su: " << endl;
	ks.Nhap();
	cout << endl;

	cout << "Thong tin cua quan ly: " << endl;
	ql.Xuat();

	cout << "Thong tin cua ky su: " << endl;
	ks.Xuat();

	return 0;
}