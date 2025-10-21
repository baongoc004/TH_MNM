#include <stdio.h>
int tinhtiendien(int sodien) {
    int tien = 0;
    if (sodien <= 100) {
        tien = sodien * 500;
    } else if (sodien <= 350) {
        tien = 100 * 500 + (sodien - 100) * 550;
    } else if (sodien <= 650) {
        tien = 100 * 500 + 250 * 550 + (sodien - 350) * 650;
    } else {
        tien = 100 * 500 + 250 * 550 + 300 * 650 + (sodien - 650) * 700;
    }
    return tien;
}

int main() {
    int sodien;
    printf("Nhap so dien: ");
    scanf("%d", &sodien);
    int gia = tinhtiendien(sodien);
    printf("%d", gia);
    return 0;
}