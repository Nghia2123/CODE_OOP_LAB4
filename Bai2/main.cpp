#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include <iostream>
using namespace std;

int main() {
	Deluxe a("Deluxe", 3, 100000, 200000);
	Deluxe b("Deluxe", 2, 50000, 100000);
	Premium c("Premium", 2, 50000);
	Premium d("Premium", 3, 100000);
	Business e("Business", 1);
	
	int tongDThuDeluxe = a.DoanhThu() + b.DoanhThu();
	int tongDThuPremium = c.DoanhThu() + d.DoanhThu();
	int tongDThuBusiness = e.DoanhThu();

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
	else
	if (tongDThuDeluxe == tongDThuBusiness && tongDThuDeluxe == maxDThu) {
		tenMax = "Deluxe va Business";
	}
	else
	if (tongDThuPremium == tongDThuBusiness && tongDThuPremium == maxDThu) {
		tenMax = "Premium va Business";
	}
	else
	if (tongDThuDeluxe == tongDThuPremium && tongDThuDeluxe == tongDThuBusiness) {
		cout << "Ca 3 loai phong deu co doanh thu cao nhat" << endl;
		cout << "Doanh thu: " << tongDThuDeluxe << endl;
		return 0;
	}
	
	cout << "Loai phong co doanh thu cao nhat la: " << tenMax << endl;
	cout << "Doanh thu cua " << tenMax << " la: " << maxDThu << endl;
}