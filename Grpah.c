#include <stdio.h>
#include <stdlib.h>
struct graph
{
    int totalVertex; // 4
    int totlaEdges;  // 4
};

struct edges
{
    int src;
    int dest;
};

int main()
{

    // how many vertex? edges?
    struct graph g;
    struct edges *e;
    int i;
    int src, dest;

    printf("\nHow many vertex and edges you have?");
    scanf("%d%d", &g.totalVertex, &g.totlaEdges);
    g.totlaEdges = g.totlaEdges * 2;

    e = calloc(g.totlaEdges, sizeof(struct edges));

    for (i = 0; i < g.totlaEdges; i++)
    {
        printf("\nEnter src and dest");
        scanf("%d%d", &src, &dest);
        e[i].src = src;
        e[i].dest = dest;
        i++;
        e[i].src = dest;
        e[i].dest = src;
    }

    printf("\nEnter source :");
    scanf("%d", &src); // 2

    
    return 0;
}