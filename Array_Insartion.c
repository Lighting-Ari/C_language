#include <stdio.h>

int main()
{

    int a[50], size, i, num, pos;

    printf("\n Enter size of the array:");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("\n Over flow condition");
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
            printf("%d", a[i]); // printing the elements for each index
        }

        printf("\n Enter the element you want to add: ");
        scanf("%d", &num);
        printf("\n Enter the position for the element: ");
        scanf("%d", &pos);

        for (i = size - 1; i > pos - 1; i--) // for swaping the already storeelements
        {
            a[i + 1] = a[i]; // swaping the pos of the elements
        }

        a[pos - 1] = num;
        size++;

        printf("\n Elements of the array: ");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
    }

    return 0;
}