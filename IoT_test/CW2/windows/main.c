#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_api.h"


void print_help() {
    printf("Usage: main [-m <month>] [-h]\n");
    printf("Options:\n");
    printf("  -h                 Show this help message.\n");
    printf("  -m <month>         Show statistics for the specified month.\n");
}


int main(int argc, char* argv[]) {
    int month = -1;
    int show_help_flag = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            show_help_flag = 1;
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        }
    }

    if (show_help_flag) {
        print_help();
        return 0;
    }

    TemperatureData* data = NULL;
    int size = 0;

    add_record(&data, &size, (TemperatureData){2021, 1, 1, 12, 0, -5});
    add_record(&data, &size, (TemperatureData){2021, 1, 2, 14, 30, -3});
    add_record(&data, &size, (TemperatureData){2021, 2, 1, 11, 0, 0});
    add_record(&data, &size, (TemperatureData){2022, 6, 10, 22, 0, 23});
    add_record(&data, &size, (TemperatureData){2022, 6, 11, 15, 0, 30});
    add_record(&data, &size, (TemperatureData){2022, 6, 12, 9, 0, 15});
    

    if (month != -1) {
        print_monthly_avg_temp(data, size, month);
        print_monthly_min_temp(data, size, month);
        print_monthly_max_temp(data, size, month);
    } else {
        print_yearly_avg_temp(data, size);
        print_yearly_min_temp(data, size);
        print_yearly_max_temp(data, size);
    }

    TemperatureData new_record = {2023, 4, 1, 10, 0, 15};
    add_record(&data, &size, new_record);
    delete_record(&data, &size, 2);
    sort_records(data, size);

    print_records(data, size);

    free(data);

    return 0;
}
