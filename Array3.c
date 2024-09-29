#include <stdio.h>
#define S 5

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int i;
    int tmp;
    int count;
    int x; 
    printf("\nHow many times you want to shift?");
    scanf("%d", &count);

    for (x = 1; x <= count; x++)
    {
        for (i = 0; i < S; i++)
        {
            printf(" %d", a[i]);
        }

        // 10 20 30 40 50
        // 50 10 20 30 40
        tmp = a[S - 1];

        for (i = S - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = tmp;
    }
}