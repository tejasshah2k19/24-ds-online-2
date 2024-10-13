#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1; // EMPTY

void push()
{
    int num;

    if (top == SIZE - 1)
    {
        printf("\nStack is Full");
    }
    else
    {
        printf("\nEnter number");
        scanf("%d", &num);

        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Empty");
    }
    else
    {
        printf("\n%d", stack[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("\nStack Empty");
    }else{
        printf("\n%d",stack[top]); 
    }
}


void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{
    int choice;

    while (11) // but not 0 -> false
    {
        printf("\n0 For Exit\n1 For Push\n2 For Pop\n3 For Display\nEnter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);

        default:
            break;
        }
    }
    return 0;
}