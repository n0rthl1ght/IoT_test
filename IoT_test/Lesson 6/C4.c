#include <stdio.h>


int f(int x) {
    if (x >= -2 && x < 2) {
        return x * x;
    } else if (x >= 2) {
        return x * x + 4 * x + 5;
    } else {
        return 4;
    }
}

int main() {
    int x, max_value = 0;

    while (1) {
        scanf("%d", &x);
        if (x == 0) break;

        int result = f(x);
        if (result > max_value) {
            max_value = result;
        }
    }

    printf("%d\n", max_value);

    return 0;
}
