#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp;

int ch;

void Newlinkedlist()
{
    struct node *newnode;
    head = 0;
    int choice;

    choice = ch;

    while (choice)
    {

        newnode = (struct node *)malloc(sizeof(struct node));

        printf("\n Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("\n Do you want to continue (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

            if (choice != 1 || choice != 0)
            {
                printf("\n Incorrect input");

                while (choice >= 1)
                {
                printf("\n Do you want to continue (1 = Yes, 0 = No): ");
                scanf("%d", &choice);
                }
                
            }

            else
            {
                printf("\n Do you want to continue (1 = Yes, 0 = No): ");
                scanf("%d", &choice);
            }
        
    }
}

void Inatbeg()
{
}

void Inatend()
{
}

void Inatpos()
{
}

void Display()
{
    temp = head;
    while (temp != 0)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}

int main()
{

    do
    {
        printf("\n Options: 1(insert New Linked list), 2(insert a data at beginning), 3(insert at the end), 4(inset at any pos) ");
        printf("\n Options: 5(insert Link list), 6(delete a data at beginning), 7(delete at the end), 8(delete at any pos) ");
        printf("\n Options: 6(Display The Linked list), 0(Close the manu)");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Newlinkedlist();

            break;

        case 2:
            Inatbeg();

            break;

        case 3:
            Inatend();

            break;

        case 4:
            Inatpos();

            break;

        case 6:
            Display();

            break;

        case 5:

            break;

        default:
            break;
        }

    } while (ch != 0);

    return 0;
}