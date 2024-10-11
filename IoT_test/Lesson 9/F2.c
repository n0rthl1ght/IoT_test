#include <stdio.h>


void sort_even_odd(int n, int a[]) {
    int temp[n];
    int even_index = 0;
    int odd_index = n - 1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[even_index++] = a[i];
        } else {
            temp[odd_index--] = a[i];
        }
    }

    int j = 0;
    for (int i = 0; i < even_index; i++) {
        a[j++] = temp[i];
    }
    for (int i = n - 1; i > odd_index; i--) {
        a[j++] = temp[i];
    }
}

int main() {
	return 0;
}
