#include <stdio.h>

void tangLuong(int *namBatDau, float *luongHienTai) {
    int namLamViec = 2024 - *namBatDau;
    int soLanTangLuong = namLamViec / 3;
    float tiLeTang = 0.01;
	int i;
    for ( i = 0; i < soLanTangLuong; i++) {
        *luongHienTai += *luongHienTai * tiLeTang;
    }
}

int main() {
    int n = 5; // So luong nhan vien
    int namBatDau[] = {2010, 2015, 2018, 2017, 2019};
    float luongHienTai[] = {1000.0, 1500.0, 1200.0, 1300.0, 1400.0};
	int i;
    for ( i = 0; i < n; i++) {
        tangLuong(&namBatDau[i], &luongHienTai[i]);
        printf("Nhan vien %d sau khi tang luong: %.2f\n", i, luongHienTai[i]);
    }

    return 0;
}
