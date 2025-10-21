#include <stdio.h>
int bangcuuchuong(int a) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}

int main() {
    int n;
    printf("Nhap bang cuu chuong: ");
    scanf("%d", &n);
    bangcuuchuong(n);
    return 0;
}