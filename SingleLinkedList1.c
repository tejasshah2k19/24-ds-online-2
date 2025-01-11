#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

// ds -> c ?
// ds -> stack queue linked list tree graph
// implementation -> c lang -> c++ java python
//  self ref structure

void addNode(int num)
{
    struct node *tmp, *p;
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
        p = head;

        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
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

void search(int num)
{
    struct node *p;
    p = head;
    int found = 0;
    while (p != NULL)
    {
        if (p->data == num)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        printf("\n%d Found", num);
    }
    else
    {
        printf("\n%d not Found", num);
    }
}

void addNodeBeg(int num)
{
    struct node *tmp;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}
int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    addNodeBeg(15);

    addNodeBeg(25);

    display();

    search(50);
    return 0;
}