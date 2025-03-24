#include <stdio.h>

int main()
{

    // Taking data from the user and storing after all the elements
    int a[50], size, i, num, pos;

    printf("\n Enter size of the array:");
    scanf("%d", &size);

    if (size >= 50) // we are checking for upper bound.
    {
        printf("\n Overflow condition! Cannot insert more elements."); // if the user enter a size above 50
        return 0;
    }

    else
    {
        printf("\n Enter element of the array:");

        for (i = 0; i < size; i++) // using this for storing element
        {
            scanf("%d", &a[i]);
        }

        printf("\n Elements of the array:"); // using this to print a statement before the store array

        for (i = 0; i < size; i++) // using this for loop traversing between the array
        {
            printf("%d ", a[i]); // printing the elements for each index
        }

        printf("\n Enter the element you want to add: "); // taking new element from the user
        scanf("%d", &num);

        a[size] = num; // here we are storing the new value to the positioin define by the user
        size++;

        printf("\n Elements of the array: "); // printing the new array

        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}