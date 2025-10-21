#include <stdio.h>

void so_ngay(int thang) {
    if (thang == 2)
        printf("28 hoac 29 ngay\n");
    else if (thang==4 || thang==6 || thang==9 || thang==11)
        printf("30 ngay\n");
    else if (thang>=1 && thang<=12)
        printf("31 ngay\n");
    else
        printf("Thang khong hop le\n");
}

int main() {
    int thang;
    printf("Nhap thang: ");
    scanf("%d", &thang);
    so_ngay(thang);
}

