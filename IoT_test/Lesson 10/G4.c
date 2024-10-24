#include <stdio.h>
#include <string.h>


void find_unique_common_chars(const char* word1, const char* word2, char* result) {
    int count1[26] = {0};
    int count2[26] = {0};
    int result_index = 0;

    for (int i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[result_index++] = 'a' + i;
            result[result_index++] = ' ';
        }
    }

    if (result_index > 0) {
        result[result_index - 1] = '\0';
    } else {
        result[result_index] = '\0';
    }
}


int main() {
    FILE *inputFile, *outputFile;
    char word1[101], word2[101], result[53];

    inputFile = fopen("input.txt", "r");

    fscanf(inputFile, "%100s %100s", word1, word2);
    fclose(inputFile);

    find_unique_common_chars(word1, word2, result);

    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%s\n", result);
    fclose(outputFile);

    return 0;
}
