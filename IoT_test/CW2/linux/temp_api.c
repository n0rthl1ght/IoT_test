#include "temp_api.h"
#include <stdio.h>
#include <stdlib.h>


void print_monthly_avg_temp(const TemperatureData* data, int size, int month) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month) {
            sum += data[i].temperature;
            count++;
        }
    }

    if (count > 0) {
        printf("Среднемесячная температура для месяца %d: %.2f\n", month, sum / (double)count);
    } else {
        printf("Нет данных для месяца %d\n", month);
    }
}


void print_monthly_min_temp(const TemperatureData* data, int size, int month) {
    int min_temp = 100;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month) {
            if (data[i].temperature < min_temp) {
                min_temp = data[i].temperature;
            }
            found = 1;
        }
    }

    if (found) {
        printf("Минимальная температура для месяца %d: %d\n", month, min_temp);
    } else {
        printf("Нет данных для месяца %d\n", month);
    }
}


void print_monthly_max_temp(const TemperatureData* data, int size, int month) {
    int max_temp = -100;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month) {
            if (data[i].temperature > max_temp) {
                max_temp = data[i].temperature;
            }
            found = 1;
        }
    }

    if (found) {
        printf("Максимальная температура для месяца %d: %d\n", month, max_temp);
    } else {
        printf("Нет данных для месяца %d\n", month);
    }
}


void print_yearly_avg_temp(const TemperatureData* data, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += data[i].temperature;
    }

    if (size > 0) {
        printf("Среднегодовая температура: %.2f\n", sum / (double)size);
    } else {
        printf("Нет данных для года\n");
    }
}


void print_yearly_min_temp(const TemperatureData* data, int size) {
    int min_temp = 100;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature < min_temp) {
            min_temp = data[i].temperature;
        }
    }

    if (size > 0) {
        printf("Минимальная температура за год: %d\n", min_temp);
    } else {
        printf("Нет данных для года\n");
    }
}


void print_yearly_max_temp(const TemperatureData* data, int size) {
    int max_temp = -100;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature > max_temp) {
            max_temp = data[i].temperature;
        }
    }

    if (size > 0) {
        printf("Максимальная температура за год: %d\n", max_temp);
    } else {
        printf("Нет данных для года\n");
    }
}


void add_record(TemperatureData** data, int* size, TemperatureData record) {
    *data = realloc(*data, (*size + 1) * sizeof(TemperatureData));
    (*data)[*size] = record;
    (*size)++;
}


void delete_record(TemperatureData** data, int* size, int index) {
    if (index < 0 || index >= *size) {
        printf("Неверный индекс для удаления\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        (*data)[i] = (*data)[i + 1];
    }
    *data = realloc(*data, (*size - 1) * sizeof(TemperatureData));
    (*size)--;
}


void sort_records(TemperatureData* data, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j].temperature > data[j + 1].temperature) {
                TemperatureData temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}


void print_records(const TemperatureData* data, int size) {
    for (int i = 0; i < size; i++) {
        printf("%04d-%02d-%02d %02d:%02d %d\n",
               data[i].year, data[i].month, data[i].day,
               data[i].hour, data[i].minute, data[i].temperature);
    }
}
