#include "Premium.h"

Premium::Premium() {
	phiDichVu = 0;
}

int Premium::DoanhThu() {
	return iSoDem * 500000 + phiDichVu;
}

