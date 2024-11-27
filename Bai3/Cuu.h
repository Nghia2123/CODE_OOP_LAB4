#pragma once
#include "GiaSuc.h"
class Cuu : public GiaSuc {
public:
	Cuu();
	Cuu(int sl) : GiaSuc(sl) {}
	void Nhap();
	int ChoSua();
	void Keu();
};

