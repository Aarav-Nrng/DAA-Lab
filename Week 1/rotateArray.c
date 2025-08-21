#include <stdio.h>

void Rotate(int arr[], int n, int k) {
    k = k % n;   
    int temp[k]; 
    for (int i = 0; i < k; i++) 
    {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) 
    {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    Rotate(arr, n, k);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}