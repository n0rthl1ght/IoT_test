#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char str[1001];
    int length;

    inputFile = fopen("input.txt", "r");

    fgets(str, 1001, inputFile);
    fclose(inputFile);

    str[strcspn(str, "\r\n")] = 0;

    length = strlen(str);
    char last_char = str[length - 1];

    outputFile = fopen("output.txt", "w");

    for (int i = 0; i < length - 1; i++) {
        if (str[i] == last_char) {
            fprintf(outputFile, "%d ", i);
        }
    }
    fclose(outputFile);

    return 0;
}
