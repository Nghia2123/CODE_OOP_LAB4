#pragma once
#include "PhongOSOFITEL.h"

class Business: public PhongOSOFITEL {
public:
	Business() {}
	Business(string ten, int soDem) :
		PhongOSOFITEL(ten, soDem) {}
	int DoanhThu();
};

