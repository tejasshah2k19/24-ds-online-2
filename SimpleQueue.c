#include <stdio.h>
#define SIZE 5

int q[SIZE];

int f = -1; // empty
int r = -1; // empty

void insert(int num)
{
}

int removeElement()
{

    return 0;
}

int main()
{

    int choice;
    int num;

    while (1)
    {

        printf("\n0 For Exit\n1 For insert\n2 For Remove");
        printf("\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEntern number");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            removeElement();
            break;
        default:
            break;
        }
    }

    return 0;
}