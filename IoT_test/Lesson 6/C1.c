#include <stdio.h>


int abs(int number) {
    if (number < 0)
        return -number;
    return number;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", abs(number));

    return 0;
}
