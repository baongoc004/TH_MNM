#include <stdio.h>
int bangcuuchuong(int a) {
    printf("Nhap bang cuu chuong: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}
