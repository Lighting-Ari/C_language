#include <stdio.h>

int main()
{
    int row, array1[50], *p, pos, n_value;

    printf("\n Please Enter the row size of the array: ");
    scanf("%d", &row);

    if (row <= 0 || row > 50)
    {
        printf("\n Memory overflow!");
    }

    else
    {
        printf("\n Please enter the elements of the array: "); // storing the value in the array 1
        for (int i = 0; i < row; i++)
        {
            scanf("%d", &array1[i]);
        }
        p = array1; // storing the array base address in the pointer

        printf("\n Element of the array: "); // giving out of the array 1
        for (int i = 0; i < row; i++)
        {
            printf("%d ", *(p + i));
        }

        printf("\n Please enter the position of the element you want to change: ");
        scanf("%d", &pos);

        pos=pos-1;

        printf("\n Please enter the new value: ");
        scanf("%d", &n_value);

        if (pos > row)
        {
            printf("\n Invalid location!");
        }
        
        else
        {
            
            for (int i = 0; i < row; i++)
            {
                
                if (i== pos)
                {
                    array1[i]=n_value;
                }
                
            }
            
        }

        printf("\n Element of the array: "); // giving out of the array 1
        for (int i = 0; i < row; i++)
        {
            printf("%d ", *(p + i));
        }
        

    }

    return 0;
}









/*

#include <stdio.h>

int main()
{
    int row, col, array1[50][50], *p;

    printf("\n Please Enter the row size of the array: ");
    scanf("%d", &row);

    printf("\n Please Enter the col size of the array: ");
    scanf("%d", &col);

    if (row <= 0 || row > 50 && col <= 0 || col > 50)
    {
        printf("\n Memory overflow!");
    }

    else
    {
        printf("\n Please enter the elements of the array: "); // storing the value in the array 1
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &array1[i][j]);
            }
        }
        p = array1; // storing the array base address in the pointer

        printf("\n Element of the array: "); // giving out of the array 1
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", *(*(p + i) + j));
            }

            printf("\n");
        }

        printf("");
    }

    return 0;
}
    */