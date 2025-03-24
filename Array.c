#include <stdio.h>

int main()
{

    int a[50], size, i;

    printf("\n Enter size of the array:"); // Size of the array
    scanf("%d", &size);                    // store the array size to size variable

    printf("\n Enter element of the array:"); // Taking elements from the using

    for (i = 0; i < size; i++) // using this for loop traversing between the array
    {
        scanf("%d", &a[i]); // storing the elements for each index
    }

    printf("\n Elements of the array:"); // using this to print a statement before the store array

    for (i = 0; i < size; i++) // using this for loop traversing between the array
    {
        printf("%d", a[i]); // printing the elements for each index
    }

    return 0;
}