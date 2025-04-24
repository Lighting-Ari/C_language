#include<stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

struct Student s[20];


void main()
{
    int size, i;
    printf("please enter how many student: ");
    scanf("%d", &size);

    struct Student *ptr;
    ptr = s;

    for ( i = 0; i < size; i++)
    {
        printf("Please Enter Details for Student: Roll Name Marks :");
        scanf("%d %s %f", &ptr->roll, ptr->name, &ptr->marks );
        ptr= *(ptr+i);
    }

    for ( i = 0; i < size; i++)
    {
        printf("\n Roll %d Name %s Marks %.2f", ptr->roll, ptr->name, ptr->marks );
        ptr= *(ptr+i);
    }
    
    



}