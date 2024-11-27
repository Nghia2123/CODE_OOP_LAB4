#pragma once
class GiaSuc {
protected:
	int soLuong;
public:
	GiaSuc();
	GiaSuc(int sl) : soLuong(sl) {}
	int LaySoLuong();
	void SinhCon();
	int ChoSua();
	void Keu();
};

