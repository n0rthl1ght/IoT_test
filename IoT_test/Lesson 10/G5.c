#include <stdio.h>
#include <string.h>


void replace_a_b(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
        } else if (str[i] == 'b') {
            str[i] = 'a';
        } else if (str[i] == 'A') {
            str[i] = 'B';
        } else if (str[i] == 'B') {
            str[i] = 'A';
        }
    }
}


int main() {
    FILE *inputFile, *outputFile;
    char str[1001];

    inputFile = fopen("input.txt", "r");

    fgets(str, 1001, inputFile);
    fclose(inputFile);

    str[strcspn(str, "\r\n")] = 0;

    replace_a_b(str);

    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%s\n", str);
    fclose(outputFile);

    return 0;
}
