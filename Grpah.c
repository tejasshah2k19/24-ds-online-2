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
    int cost;
};

int main()
{

    // how many vertex? edges?
    struct graph g;
    struct edges *e;
    int i;
    int src, dest,cost;

    printf("\nHow many vertex and edges you have?");
    scanf("%d%d", &g.totalVertex, &g.totlaEdges);//6,9 
    g.totlaEdges = g.totlaEdges * 2;

    e = calloc(g.totlaEdges, sizeof(struct edges));//18

    for (i = 0; i < g.totlaEdges; i++)
    {
        printf("\nEnter src and dest and cost");
        scanf("%d%d%d", &src, &dest,&cost);
        e[i].src = src;
        e[i].dest = dest;
        e[i].cost = cost;

        
        i++;
        e[i].src = dest;
        e[i].dest = src;
        e[i].cost = cost;
       
    }

    printf("\nEnter source :");
    scanf("%d", &src); // 2

    
    return 0;
}