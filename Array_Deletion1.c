#include<stdio.h>

int main()
{

//Deleting from the starting position of an array

    int a[50], i, size, item;

    printf("\n Enter the size of the array:");
    scanf("%d",&size); 

    if (size >= 50) // we are checking for upper bound.
    {
        printf("\n Overflow condition! Cannot insert more elements."); // if the user enter a size above 50
        return 0;
    }

    else
    {

    printf("\n Enter the Element of the array:");

    for ( i = 0; i < size ; i++)
    {
        scanf("%d", &a[i]); 
    }

    printf("\n Deleting the array from the starting position.");
        
        for (i = 0; i < size-1; i++)
        {
            a[i]= a[i+1];
        }
        size--;

        printf("\n New array is :");

        for (i = 0; i < size; i++)
        {
            printf("\n %d", a[i]); 
        }
    
    
}
    return 0;

}

