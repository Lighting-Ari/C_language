#include<stdio.h>

int main()
{

//Deleting from the a specific position of an array

    int a[50], i, size, pos, item;

    printf("\n Enter the size of the array:");
    scanf("%d",&size); //Issue: size is an int, so we need to pass its address (&size) to store the input.

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

    printf("\n From which position you want to delete:");
    scanf("%d",&pos );

    if (pos<=0 || pos>size)
    {
        printf("\n Invalide Position");
        return 1;  // ✅ Exit the program if position is invalid
    }
    
    else
    {
        item=a[pos-1];
        for (i = pos-1; i < size-1; i++)
        {
            a[i]= a[i+1];
        }
        size--;
        printf("\n Deleted Element :%d", item);

        printf("\n New array is :");

        for (i = 0; i < size; i++)
        {
            printf("\n %d", a[i]); // ✅ Fixed incorrect printing
        }
    
    }
}
    return 0;

}

/*

✅ Fixes and Improvements
✔ Fixed scanf("%d", &size); to correctly store user input.
✔ Fixed printf("\n %d", a[i]); to print values instead of memory addresses.
✔ Handled invalid array sizes (size <= 0 or size > 50).
✔ Program exits if an invalid position is entered, preventing unnecessary execution.

*/