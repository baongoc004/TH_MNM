#include <stdio.h>

void kiemtra_nhuan(int nam) {
    if ((nam%400==0) || (nam%4==0 && nam%100!=0))
        printf("Nam nhuan\n");
    else
        printf("Khong nhuan\n");
}

int main() {
    int nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    kiemtra_nhuan(nam);
}

