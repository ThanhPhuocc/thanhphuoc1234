#include <stdio.h>

int kiemTraChanLe(int n) {
    // Chia cho 2 de xac dinh tinh chan le cua so n
    if (n % 2 == 0) {
        return -1;
    }
    return 1;
}

int main() {

    int n;
    printf("Nhap n = ");
scanf("%d",&n);
    int kQ = kiemTraChanLe(n);
    if (kQ == -1) {
        printf("%d la so chan.\n", n);
    } else{
        printf("%d la so le.\n", n);
    }
    return 0;
}
