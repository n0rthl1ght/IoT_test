#include <stdio.h>


int main() {
    int arr[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    double average = sum / 5.0;
    printf("%.3f\n", average);
    return 0;
}
