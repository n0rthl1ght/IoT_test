#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char str[101];
    int length;

    inputFile = fopen("input.txt", "r");

    fgets(str, 101, inputFile);
    fclose(inputFile);

    str[strcspn(str, "\r\n")] = 0;
    length = strlen(str);

    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%s, %s, %s %d\n", str, str, str, length);
    fclose(outputFile);

    return 0;
}
