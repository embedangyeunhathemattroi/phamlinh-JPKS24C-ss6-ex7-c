#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so nguyen: ");
    scanf("%d", &n);

    printf("so uoc la: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf("%d ", i);
        }
    }
    return 0;
}

