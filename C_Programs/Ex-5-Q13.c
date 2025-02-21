#include <stdio.h>

int main() {
    int i, n, index;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the index to delete (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index! Please enter an index between 0 and %d.\n", n - 1);
        return 1; 
    }

    for (i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
