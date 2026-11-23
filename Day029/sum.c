//Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the no.of elements");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of the array");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("The sum of the array is %d", sum);
    return 0;
}