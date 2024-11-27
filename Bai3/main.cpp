#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include <iostream>
using namespace std;

int main() {
	Bo bo;
	Cuu cuu;
	De de;

	bo.Nhap();
	cuu.Nhap();
	de.Nhap();
	cout << endl;

	// Tieng keu cua cac gia suc trong nong trai
	cout << "Nhung tieng keu nghe duoc trong nong trai la:" << endl;
	bo.Keu();
	cuu.Keu();
	de.Keu();
	cout << endl;

	srand(time(NULL));

	// Tong so lit sua cua tat ca gia suc sau mot luot cho sua
	int tongSua = bo.ChoSua() + cuu.ChoSua() + de.ChoSua();
	
	// Mot lua sinh
	bo.SinhCon();
	cuu.SinhCon();
	de.SinhCon();	
	cout << "So luong moi loai gia suc sau mot lua sinh la: " << endl;
	cout << "Bo: " << bo.LaySoLuong() << endl;
	cout << "Cuu: " << cuu.LaySoLuong() << endl;
	cout << "De: " << de.LaySoLuong() << endl;
	cout << endl;


	cout << "Tong so lit sua cua tat ca gia suc sau mot luot cho sua la: ";
	cout << tongSua << " lit" << endl;
}