#pragma once
#include "GiaSuc.h"
class Bo: public GiaSuc {
public:
	Bo();
	Bo(int sl) : GiaSuc(sl) {}
	void Nhap();
	int ChoSua();
	void Keu();
};

