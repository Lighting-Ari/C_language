#include<stdio.h>

//1. Calculate the sum of n no.s in an array

int main()
{
    int a[50], i,size, sum,sum1;
    sum = 0;

    printf("\n PLease enter the size of the array: ");
    scanf("%d",&size);

    if (size <0 || size >50)
    {
        printf("\n Overflow condition!");
    }

    else
    {
        //Taking the element of the array and addition of the elemet
        printf("\n Please Enter the Element of the array");

        for (i = 0; i <size; i++)
        {
            printf("\nPlease Enter Element for Position %d : ",i+1);
            scanf("%d", &a[i]);
            sum=a[i]+sum;

        }


        //printing the elemts of the array and sum
        printf("The Element of the array is: ");
        for ( i = 0; i < size; i++)
        {
            printf("%d ",a[i]);

        }
        
        printf("\n The Sum of the Array: %d", sum);
        



    }
    


    return 0;
}