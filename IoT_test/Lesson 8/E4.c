#include <stdio.h>


int main() {
    int arr[10];
    int max1 = -2147483648, max2 = -2147483648;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if(arr[i] > max1) {
			max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
			max2 = arr[i];
		}
    }

    printf("%d\n", max1 + max2);
    return 0;
}
