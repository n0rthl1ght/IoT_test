#include <stdio.h>


void print_digit(char s[]) {
    int digit_count[10] = {0};


    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            digit_count[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 0) {
            printf("%d %d\n", i, digit_count[i]);
        }
    }
}

int main() {
	return 0;
}

