#pragma once
#include "PhongOSOFITEL.h"

class Premium: public PhongOSOFITEL {
private:
	uint phiDichVu;
public: 
	Premium();
	Premium(string ten, uint soDem, uint phiDV) :
		PhongOSOFITEL(ten, soDem), phiDichVu(phiDV) {}
	uint DoanhThu();
};

