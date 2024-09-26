#include <stdio.h>


void printRev(int n) {
    if (n == 0)
        return;
    printf("%d ", n % 10);
    printRev(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("0\n");
    else
        printRev(n);
    printf("\n");

    return 0;
}
