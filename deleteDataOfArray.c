#include<stdio.h>

int main()
{
    int a[10], k, i, j, n, item;

    // Input Array length and value
    printf("\n Enter how many elements in the array (<10): ");
    scanf("%d", &n);
    printf("\n input %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Print Original Array
    printf("\n Original array contains.........");
    for(i = 0; i < n; i++) {
        printf("\n Array[%d] = %d", i, a[i]);
    }

    // Delete an element of Original Array
    printf("\n\n To delete an element...........");
    printf("\n Enter which array position:");
    scanf("%d", &k);
    item = a[k];
    for(j = k; j <= n-1; j++){
        a[j] = a[j + 1];
    }
    n = n - 1;
    printf("\n After delete the element (%d) \n", item);

    // Update array printing here
    printf("\n The array contains..........");
    for(i = 0; i < n; i++) {
        printf("\n Array [%d] = %d", i, a[i]);
    }

    getch();
    return 0;
}
