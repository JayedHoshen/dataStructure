#include<stdio.h>
#define rows 5
#define columns 5

int main()
{
    int row, column, product[rows][columns];
    int i, j;

    printf("\n multiplication tables\n\n");

    for(j = 1; j <= columns; j++) {
        printf("%4d", j);
    }
    printf("\n................................\n");

    for(i = 0; i < rows; i++) {
        row = i + 1;
    }
    printf("%d", row);

    for(j = 1; j <= columns; j++) {
        column = j;
        product[i][j] = row
    }

    return 0;
}
