#include <stdio.h>
#define SIZE 5

int q[SIZE];

int f = -1; // empty
int r = -1; // empty

void insert(int num)
{

    if (r == SIZE - 1)
    {
        printf("\nQ is Full");
    }
    else
    {
        r++;
        q[r] = num;
        if (f == -1)
        {
            f = 0; // first time insertion
        }
    }
}

int removeElement()
{
    int del = q[f];
    if (f == -1)
    {
        return -1;
    }
    else
    {
        f++;
        return del;
    }
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
            num = removeElement();
            if (num == -1)
            {
                printf("\nQ is empty");
            }
            else
            {
                printf("\n%d removed", num);
            }
            break;
        default:
            break;
        }
    }

    return 0;
}