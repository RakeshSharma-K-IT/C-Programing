//Program for insert an element in array;

#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
  
    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert val at the specified position
    arr[pos] = val;

    // Increase the current size
    (*n)++;
}

int main() {
    int i,n;
    printf("Enter the number of elements =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    int p,v,s,m;
    printf("Do you want to insert an Element(1 or 0):");
    scanf("%d",&s);
    if(s)
    {
      do{
        printf("Enter the Position of the Element :");
        scanf("%d",&p);
        printf("Enter the Value  :");
        scanf("%d",&v);
        int val = 25;
    
        insert(a, &n, p, v);

        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);

        printf("Do you want to continue 1 or 0 ");
        scanf("%d",&m);
      }while(m==1);
    }

    else{
        printf("Thank you\n ");

    }
    printf("See You Again");
    return 0;
}
