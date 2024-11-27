#include "Deluxe.h"

Deluxe::Deluxe() {
	phiDichVu = 0;
	phiPhucVu = 0;
}

int Deluxe::DoanhThu() {
	return iSoDem * 750000 + phiDichVu + phiPhucVu;
}
