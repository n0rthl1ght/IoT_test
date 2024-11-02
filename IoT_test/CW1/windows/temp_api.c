#include "temp_api.h"
#include <stdio.h>


void print_monthly_avg_temp(const TemperatureData* data, int size, int month) {
    printf("Среднемесячная температура для месяца %d\n", month);
}

void print_monthly_min_temp(const TemperatureData* data, int size, int month) {
    printf("Минимальная температура для месяца %d\n", month);
}

void print_monthly_max_temp(const TemperatureData* data, int size, int month) {
    printf("Максимальная температура для месяца %d\n", month);
}

void print_yearly_avg_temp(const TemperatureData* data, int size) {
    printf("Среднегодовая температура\n");
}

void print_yearly_min_temp(const TemperatureData* data, int size) {
    printf("Минимальная температура за год\n");
}

void print_yearly_max_temp(const TemperatureData* data, int size) {
    printf("Максимальная температура за год\n");
}
