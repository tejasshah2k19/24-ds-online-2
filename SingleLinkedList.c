#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void addNode(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        head->next = tmp; // logic
    }
}

int main()
{

    int choice;
    int num;

    printf("\n1 for Insert\n2 For List\n0 for exit\nEnter choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter number");
        scanf("%d", &num);
        addNode(num); // 10 20 30
        break;
    case 2:
        printf("\n %d ", head->data);             // 10
        printf("\n %d ", head->next->data);       // 20
        printf("\n %d ", head->next->next->data); // 30
        break;
    case 0:
        exit(0);
    default:
        break;
    }

    // // new node
    // head = malloc(sizeof(struct node));
    // head->data = 10;
    // head->next = NULL;

    // struct node *tmp;
    // tmp = malloc(sizeof(struct node));
    // tmp->data = 20;
    // tmp->next = NULL;
    // head->next = tmp;

    // tmp = malloc(sizeof(struct node));
    // tmp->data = 30;
    // tmp->next = NULL;
    // head->next->next = tmp;

    // tmp = malloc(sizeof(struct node));
    // tmp->data = 40;
    // tmp->next = NULL;
    // head->next->next->next = tmp;

    // printf("\n %d ",head->data);
    // printf("\n %d ",head->next->data);
    // printf("\n %d ",head->next->next->data);
    // printf("\n %d ",head->next->next->next->data);

    return 0;
}