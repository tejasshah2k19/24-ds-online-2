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

void addNode(int num) // Last
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

void sumOfAllNode()
{
    int sum = 0;
    struct node *p = head;

    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    printf("\nSum of all node = %d", sum);
}
// sumOfAllEven
// sumOfAllOdd
// countTotlaNode
// countEvenNode
// countOddNode

void addNodeAny(int src, int num)
{
    struct node *p = head;
    struct node *tmp;
    while (p != NULL)
    {
        if (p->data == src)
        {
            break;
        }
        p = p->next;
    }

    if (p == NULL)
    {
        printf("\nInvalid Source");
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
}
void deleteNodeLast()
{
    struct node *p = head, *q = head;

    while (p->next != NULL)
    {
        q=p; 
        p = p->next;
    }
    q->next = NULL;
    free(p); 
}

void delBeg(){
    struct node *p = head;
    head = head->next; 
    free(p); 
}

void delNodeAny(int src){
    //task 
}

int main()
{

    int choice;
    int num, src;

    while (1)
    {
        printf("\n0 For EXIT");
        printf("\n1 For Add Node Last");
        printf("\n2 For Add Node Beg");
        printf("\n3 For Add Node Any");

        printf("\n4 For Delete Node Last");
        printf("\n5 For Delete Node Beg");
        printf("\n6 For Delete Node Any");

        printf("\n7 For List All Nodes : display ");
        printf("\n8 For search");
        printf("\n9 For Sum Of All Nodes");
        printf("\nEnter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter numnber");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            printf("\nEnter numnber");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 3:
            printf("\nEnter source and numnber");
            scanf("%d%d", &src, &num);

            addNodeAny(src, num);
            break;
        case 4:
            deleteNodeLast();
            break;
<<<<<<< HEAD
        case 5:
            delBeg();break;
        case 6:
            printf("\nEnter number that you want to delete");
            scanf("%d",&src);
            delNodeAny(src);
            break;
        
=======
>>>>>>> a8e62faf57bf892419b2143a7c304e19bd4c4e38
        case 7:
            display();
            break;
        case 8:
            printf("\nEnter numnber");
            scanf("%d", &num);
            search(num);
            break;
        case 9:
            sumOfAllNode();
            break;

        default:
            break;
        }
    }

    return 0;
}