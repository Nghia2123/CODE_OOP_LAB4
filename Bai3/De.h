#pragma once
#include "GiaSuc.h"
class De: public GiaSuc {
public:
	De();
	De(int sl) : GiaSuc(sl) {}
	void Nhap();
	int ChoSua();
	void Keu();
};

