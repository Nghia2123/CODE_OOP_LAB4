#pragma once
#include "PhongOSOFITEL.h"

class Premium: public PhongOSOFITEL {
private:
	int phiDichVu;
public: 
	Premium();
	Premium(string ten, int soDem, int phiDV) :
		PhongOSOFITEL(ten, soDem), phiDichVu(phiDV) {}
	int DoanhThu();
};

