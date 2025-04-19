#include <stdio.h>

int main()

{
    int a[50][50], i, j, row = 0, col = 0, new;

    printf("\n Please enter size of row:"); // taking row size
    scanf("%d", &row);

    printf("\n Please enter size of column:"); // taking column size
    scanf("%d", &col);

    if (row >= 50 && col >= 50)
    {
        printf("\n Overflow condition! Cannot insert more elements."); // if the user enter a size above 50
        return 0;
    }

    else
    {
        printf("\n Please enter the elements: \n"); // taking the input

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }

        printf("\n Elements of the array:\n "); // printing the new array

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }

        // if user want to add a new row to the table
        printf("\n Want to a new row? Please enter 1 or enter any number to end:\n");
        scanf("%d", &new);

        if (new == 1)
        {

            for (j = 0; j < col; j++)
            {
                scanf("%d", &a[row][j]);
            }
            row++; // icrementing row count after adding

            printf("\n Elements of the array:\n "); // printing the new array

            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    printf("%d", a[i][j]);
                }
                printf("\n");
            }
            printf("\n Program Complete\n");
        }

        else
        {
            printf("\n Program Complete\n");
        }
    }
}