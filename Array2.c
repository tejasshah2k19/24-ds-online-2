#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int arr[SIZE];

void insertElement()
{
    int data, location, index, i;
    printf("\nEnter data");
    scanf("%d", &data);

    printf("\nEnter location");
    scanf("%d", &location);

    index = location - 1;

    for (i = SIZE - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = data;
}

void removeElement()
{
}

void display()
{
    int i;
    printf("\nElements in the array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{

    int choice;

    while (-1)
    {
        printf("\n1 For Add Element\n2 For Remove Element\n3 For Display\n4 For Exit\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertElement();
            break;
        case 2:
            removeElement();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice");
            break;
        }
    }
    return 0;
}