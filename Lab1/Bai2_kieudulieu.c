#include <stdio.h>
int main () {
    char mssv[10] = "PS51483";
    char fullname[30] = "Nguyen Ho Bao Kha"; 
    int year = 2008;
    float dtb = 9.4;

    int age = 2026 - year;

    printf("mssv: %s\n", mssv);
    printf("fullname: %s\n", fullname);
    printf("Nam Sinh: %d\n", year);
    printf("tuoi: %d\n", age);
    printf("Diem Trung Binh: %1.2f\n", dtb);
    
    return 0;
}
