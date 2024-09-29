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
    int location, i;
    printf("\nEnter the location");
    scanf("%d", &location);

    for (i = location - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
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
// time complexity => O(n)
void linearSearch() /// sequential search
{
    int key, i;
    int found = 0; // not found
    printf("\nEnter number");
    scanf("%d", &key); // 24 200 10
    // 10 20 30 40 50 60
    // 1  2  3  4  5  6
    // 100
    // 6
    // 10 20 30 40 50 60 70 80 90 100
    // 200
    // 10
    // n
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
        {
            printf("\nFound");
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("\n%d Not Found", key);
    }
}

int main()
{

    int choice;

    while (-1)
    {
        printf("\n1 For Add Element\n2 For Remove Element\n3 For Display\n4 For Exit\n5 For Search\n");
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
        case 5:
            linearSearch();
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }
    return 0;
}