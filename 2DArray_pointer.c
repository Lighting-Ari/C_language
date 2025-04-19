#include<stdio.h>

int main ()
{
    int a[3][3]={6,2,5,0,1,3,4,9,8};
    int *p;
    p=a[0];
    printf("\n%p", a+1);
    printf("\n%p", *(a+1));

    printf("\n%d", *(*a+1));

    printf("\n%p", *(a+1)+2);

    printf("\n%d", *(*(a+1)+2));
    printf("\n%d", a[1][2]);

    printf("\n%d", **a);
   // printf("\n%d", **p);

   printf("\n%p", a[1]+1);
   printf("\n%p", &a[1]+1);

}