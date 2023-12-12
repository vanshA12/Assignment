// Write a C program to find the sum of elements in an array.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of elements in the array is: %d\n", sum);

    return 0;
}