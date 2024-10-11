#include <stdio.h>


void count_and_sort_digits() {
    int digit_count[10] = {0};
    int digit;
    
    while ((digit = getchar()) != '\n') {
        if (digit >= '0' && digit <= '9') {
            digit_count[digit - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 0) {
            printf("%d %d\n", i, digit_count[i]);
        }
    }
}

int main() {
	count_and_sort_digits();
	return 0;
}

