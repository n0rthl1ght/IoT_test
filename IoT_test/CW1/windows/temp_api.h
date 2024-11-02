#ifndef TEMP_API_H
#define TEMP_API_H


typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureData;


void print_monthly_avg_temp(const TemperatureData* data, int size, int month);
void print_monthly_min_temp(const TemperatureData* data, int size, int month);
void print_monthly_max_temp(const TemperatureData* data, int size, int month);
void print_yearly_avg_temp(const TemperatureData* data, int size);
void print_yearly_min_temp(const TemperatureData* data, int size);
void print_yearly_max_temp(const TemperatureData* data, int size);

#endif
