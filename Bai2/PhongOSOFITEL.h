#pragma once
#include <string>
using namespace std;

class PhongOSOFITEL {
protected:
	string tenPhong;
	int iSoDem;
public:
	PhongOSOFITEL();
	PhongOSOFITEL(string ten, int soDem):
		tenPhong(ten), iSoDem(soDem) {}
};


