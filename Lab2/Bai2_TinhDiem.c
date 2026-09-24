
#include <stdio.h>
int main () {

    float toan, ly, hoa;
    float Diemtrungbinh;

    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    printf("Nhap diem ly: ");
    scanf("%f", &ly);

    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    Diemtrungbinh = (toan * 3 + ly * 2 + hoa) / (float)6;

    printf("Diem trung binh: %.2f\n", Diemtrungbinh);

    return 0;
}