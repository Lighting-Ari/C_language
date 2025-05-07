#include<stdio.h>

//2. Calculate the sum of even no.s in an array

int main()
{
    
    int a[50], i, size, sum;
    sum=0;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);

    if (size<= 0 || size> 50)
    {
        printf("\n Overflow condition");
    }

    else
    {
        printf("Enter the Element of the array\n");
        for ( i = 0; i < size; i++)
        {
            printf("\n Position %d : ", i+1);
            scanf("%d", &a[i]);

            //for checking the even number
            if (a[i]%2==0)
            {
                sum=a[i]+sum;
            }
            
        }


        // priting the array and sum of even number
        printf("\n The Element of the Array: ");
        for ( i = 0; i < size; i++)
        {
           printf("%d ", a[i]);
        }

        printf("\nsum of the even number : %d ", sum);
        


        
    }
    
    



    return 0;
}
