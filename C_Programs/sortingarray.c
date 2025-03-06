#include <stdio.h>

int main() {
    int i, j, n, temp;
    
    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    // Input array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Sorting using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) { 
                // Swap elements if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Display sorted array
    printf("The sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
