#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int *p;
    int i;

    a = malloc(sizeof(int));    // gcc : 4 , tc: 2
    p = calloc(5, sizeof(int)); // 5,4 :20byte

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter value");
        scanf("%d", &p[i]);
    }

    printf("\nElements in the array : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", p[i]);
    }

    // no need
    free(a);
    free(p);

    //
    //
    //

    //
}