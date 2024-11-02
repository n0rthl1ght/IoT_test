#include <stdio.h>
#include "temp_api.h"


int main() {
    TemperatureData data[] = {
        {2021, 1, 1, 12, 0, -5},
        {2021, 1, 2, 14, 30, -3},
        {2021, 2, 1, 11, 0, 0},
        {2022, 6, 10, 22, 0, 23},
        {2022, 6, 11, 15, 0, 30},
        {2022, 6, 12, 9, 0, 15},
    };
    int size = sizeof(data) / sizeof(data[0]);

    print_monthly_avg_temp(data, size, 1);
    print_monthly_min_temp(data, size, 1);
    print_monthly_max_temp(data, size, 1);
    print_yearly_avg_temp(data, size);
    print_yearly_min_temp(data, size);
    print_yearly_max_temp(data, size);

    return 0;
}
