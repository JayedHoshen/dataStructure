#include<stdio.h>

int main()
{
    int a[20], n, i, checkArray, insert, deleteData, j, k, item;

     // Array create and input, print array values
    printf("\nEnter how many elements in the array (less than 10): ");
    scanf("%d", &n);
    printf("\nInput %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array contains printing here.........");
    for(i = 0; i < n; i++) {
        printf("\nArray[%d] = %d", i, a[i]);
    }
    printf("\n");

    while(1){
        // check witch action you need?
        printf("\nPress one(1)to insert, Two(2)to delete, three(3) to print and zero(0)to exit: ");
        scanf("%d", &checkArray);
        //Inserting a new element in Original Array
        if(checkArray == 1){
            printf("\nInsert an element witch position (0 to %d): ", n);
            scanf("%d", &insert);
            j = n;
            while(j >= insert) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            printf("\nWitch item insert in this position: ");
            scanf("%d", &item);
            a[insert] = item;
            n = n + 1;
            printf("\n%d insert is %d th position.....\n", item, insert);
        }

         // Delete an element of Original Array
        else if(checkArray == 2){
            printf("\n\nTo delete which position this array (0 to %d): ", n-1);
            scanf("%d", &deleteData);
            item = a[deleteData];
            for(k = deleteData; k <= n-1; k++){
                a[k] = a[k + 1];
            }
            n = n - 1;
            printf("\n%d delete is %d th position.\n", item, deleteData);
        }

        // Update array printing here
        else {
            if(checkArray == 0){
                break;
            }
            printf("\nThe array contains..........");
            for(i = 0; i < n; i++) {
                printf("\nArray [%d] = %d", i, a[i]);
            }
        }
    }

    return 0;
}
