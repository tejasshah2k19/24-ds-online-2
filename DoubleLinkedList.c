#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        tmp->prev = last;
        last = tmp;
    }
}

void display()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf(" %d", p->data);
        p = p->next;
    }
}

void addBeg(int num){

}
void addAny(int src,int num){

}

int main()
{
    int ch;
    int num;
    while (1)
    {
        printf("\n0 For Exit\n1 For Add Node\n2 For Display\n3 for add beg\n4 for add any\n5 for del beg\n6 for del last\n7 for del any\nEnter choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            display();
            break;

        default:
            break;
        }
    }
    return 0;
}