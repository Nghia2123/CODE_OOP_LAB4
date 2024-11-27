#pragma once
#include "PhongOSOFITEL.h"

class Deluxe: public PhongOSOFITEL {
private:
	int phiDichVu, phiPhucVu;
public:
	Deluxe();
	Deluxe(string ten, int soDem, int phiDV, int phiPV):
		PhongOSOFITEL(ten, soDem), phiDichVu(phiDV), phiPhucVu(phiPV) {}
	int DoanhThu();
};

