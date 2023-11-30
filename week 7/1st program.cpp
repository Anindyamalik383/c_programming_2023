#include <stdio.h>

float findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    float avg = findAverage(arr, n);

    printf("The average of the array elements is: %.2f\n", avg);

    return 0;
}
