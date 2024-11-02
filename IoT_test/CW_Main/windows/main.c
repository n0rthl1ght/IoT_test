#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"


void print_help() {
    printf("Usage: main -f <filename.csv> [-m <month>] [-h]\n");
    printf("Options:\n");
    printf("  -h                 Show this help message.\n");
    printf("  -f <filename.csv>  Specify the input CSV file to process.\n");
    printf("  -m <month>         Show statistics for the specified month.\n");
}


TemperatureData* read_csv_file(const char* filename, int* size) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file %s\n", filename);
        return NULL;
    }

    TemperatureData* data = NULL;
    char line[256];
    *size = 0;
    int line_number = 0;


    while (fgets(line, sizeof(line), file)) {
        line_number++;
        TemperatureData temp;
        if (sscanf(line, "%d;%d;%d;%d;%d;%d",
                   &temp.year, &temp.month, &temp.day,
                   &temp.hour, &temp.minute, &temp.temperature) == 6) {
            add_record(&data, size, temp);
        } else {
            printf("Неверный формат в строке %d: %s", line_number, line);
        }
    }

    fclose(file);
    return data;
}


int main(int argc, char* argv[]) {
    char* filename = NULL;
    int month = -1;
    int show_help_flag = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            show_help_flag = 1;
        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            filename = argv[++i];
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        }
    }

    if (show_help_flag || !filename) {
        print_help();
        return 0;
    }

    int size = 0;
    TemperatureData* data = read_csv_file(filename, &size);
    if (!data) {
        return 1;
    }

    if (month != -1) {
        print_monthly_avg_temp(data, size, month);
        print_monthly_min_temp(data, size, month);
        print_monthly_max_temp(data, size, month);
    } else {
        for (int m = 1; m <= 12; m++) {
			printf("\n");
            printf("Статистика для месяца %d:\n", m);
            print_monthly_avg_temp(data, size, m);
            print_monthly_min_temp(data, size, m);
            print_monthly_max_temp(data, size, m);
        }
        printf("\n");
        print_yearly_avg_temp(data, size);
        print_yearly_min_temp(data, size);
        print_yearly_max_temp(data, size);
    }

    free(data);

    return 0;
}
