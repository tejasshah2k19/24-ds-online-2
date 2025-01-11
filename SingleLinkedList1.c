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
    struct node *tmp,*p;
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
        p =head; 

        while(p->next != NULL){
            p=p->next;
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
int main()
{
 
    

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    display();
    return 0;
}