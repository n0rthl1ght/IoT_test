#include <stdio.h>


void generate_string(int n, char result[]) {
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char even_digits[] = "2468246824682468";
    int letter_index = 0;
    int digit_index = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = letters[letter_index++];
        } else {
            result[i] = even_digits[digit_index++];
        }
    }
    result[n] = '\0';
}

int main() {
    FILE *inputFile, *outputFile;
    int n;
    char result[27];

    inputFile = fopen("input.txt", "r");

    fscanf(inputFile, "%d", &n);
    fclose(inputFile);
    
    generate_string(n, result);
    
    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%s\n", result);
    fclose(outputFile);

    return 0;
}
