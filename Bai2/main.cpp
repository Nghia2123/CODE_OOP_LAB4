#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include <iostream>
using namespace std;

int main() {
	Deluxe a("Deluxe", 1, 250000, 500000);
	Premium b("Premium", 1, 900000);
	Business c("Business", 1);
	Business d("Business", 1);
	Business e("Business", 3);
	
	int tongDThuDeluxe = 0;
	int tongDThuPremium = 0;
	int tongDThuBusiness = 0;

	if (a.LayTenPhong() == "Deluxe") 
		tongDThuDeluxe += a.DoanhThu();
	else
		if (a.LayTenPhong() == "Premium")
			tongDThuPremium += a.DoanhThu();
		else
			tongDThuBusiness += a.DoanhThu();

	if (b.LayTenPhong() == "Deluxe")
		tongDThuDeluxe += b.DoanhThu();
	else
		if (b.LayTenPhong() == "Premium")
			tongDThuPremium += b.DoanhThu();
		else
			tongDThuBusiness += b.DoanhThu();

	if (c.LayTenPhong() == "Deluxe")
		tongDThuDeluxe += c.DoanhThu();
	else
		if (c.LayTenPhong() == "Premium")
			tongDThuPremium += c.DoanhThu();
		else
			tongDThuBusiness += c.DoanhThu();

	if (d.LayTenPhong() == "Deluxe")
		tongDThuDeluxe += d.DoanhThu();
	else
		if (d.LayTenPhong() == "Premium")
			tongDThuPremium += d.DoanhThu();
		else
			tongDThuBusiness += d.DoanhThu();

	if (e.LayTenPhong() == "Deluxe")
		tongDThuDeluxe += e.DoanhThu();
	else
		if (e.LayTenPhong() == "Premium")
			tongDThuPremium += e.DoanhThu();
		else
			tongDThuBusiness += e.DoanhThu();

	int maxDThu = tongDThuDeluxe;
	string tenMax = "Deluxe";

	if (tongDThuPremium > maxDThu) {
		maxDThu = tongDThuPremium;
		tenMax = "Premium";
	}
	if (tongDThuBusiness > maxDThu) {
		maxDThu = tongDThuBusiness;
		tenMax = "Business";
	}

	if (tongDThuDeluxe == tongDThuPremium && tongDThuDeluxe == maxDThu) {
		tenMax = "Deluxe va Premium";
	}
	
	if (tongDThuDeluxe == tongDThuBusiness && tongDThuDeluxe == maxDThu) {
		tenMax = "Deluxe va Business";
	}
	
	if (tongDThuPremium == tongDThuBusiness && tongDThuPremium == maxDThu) {
		tenMax = "Premium va Business";
	}
	
	if (tongDThuDeluxe == tongDThuPremium && tongDThuDeluxe == tongDThuBusiness) {
		cout << "Ca 3 loai phong deu co doanh thu cao nhat" << endl;
		cout << "Doanh thu: " << tongDThuDeluxe << endl;
		return 0;
	}
	
	cout << "Loai phong co doanh thu cao nhat la: " << tenMax << endl;
	cout << "Doanh thu cua " << tenMax << " la: " << maxDThu << endl;
}