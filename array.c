#include <stdio.h>
#define SIZE 5

// global
int a[SIZE]; // 200........219
int i;

void scanArray()
{
    // local

    for (i = 0; i < SIZE; i++)
    {
        printf("\nenter the number");
        scanf("%d", &a[i]); // 1 2 3 4 5
    }
}

void printArray()
{

    printf("\nElements in the array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

int main()
{

    scanArray();
    printArray();
    return 0;
}