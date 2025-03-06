#include <stdio.h>
#include<math.h>
int main() {
    int i, n, k, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &k);

    // Count occurrences of the specified element
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            count++;
        }
    }

    printf("Element %d occurs %d times in the array.\n", k, count);

    return 0;
}
