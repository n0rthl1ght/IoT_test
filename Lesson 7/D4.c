#include <stdio.h>


void print_num(int n) {
    if (n == 0)
        return;
    print_num(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("0\n");
    else
        print_num(n);
    printf("\n");

    return 0;
}
