#include<stdio.h>
#include<conio.h>

int main()
{
    int a[20], k , j, n, item, i;

     // Input Array length value
    printf("\n Enter how many elements in the array (less than 20): ");
    scanf("%d", &n);
    printf("\n input %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Print Original Array
    printf("\nOriginal array contains printing here.........\n");
    for(i = 0; i < n; i++) {
        printf("\n Array[%d] = %d", i, a[i]);
    }
    printf("\n");

    //Inserting an new element of Original Array
    printf("\n\nTo insert an element witch array position (indexing 0 to start): ");
    scanf("%d", &k);
    j = n;
    while(j >= k) {
        a[j + 1] = a[j];
        j = j - 1;
    }
    printf("\nEnter witch item insert in this array: ");
    scanf("%d", &item);
    a[k] = item;
    n = n + 1;

    // Update array printing here
    printf("\nAfter inserting a new element %d th position............\n", k+1);
    for(i = 0; i < n; i++) {
        printf("\n Array [%d] = %d", i, a[i]);
    }
    printf("\n");
    getch();
    return 0;
}
