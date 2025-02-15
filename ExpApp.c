#include <stdio.h>
#include <stdlib.h>

struct user
{
    char name[30];
    char email[30];
    char password[30];
    struct user *next;
} *head = NULL;

struct exp
{
    int amt;        // exp amt
    char title[30]; // exp title
    struct exp *nex;
};

void signup()
{
    if (head == NULL)
    {
        head = malloc(sizeof(struct user));
        printf("\nEnter name email and password");
        scanf("%s%s%s", head->name, head->email, head->password);
        head->next = NULL;
    }
    else
    {
        struct user *tmp;

        tmp = malloc(sizeof(struct user));
        printf("\nEnter name email and password");
        scanf("%s%s%s", tmp->name, tmp->email, tmp->password);
        tmp->next = head;
        head = tmp;
    }
}

void display()
{
    struct user *p = head;
    while (p != NULL)
    {
        printf(" %s", p->name);
        p = p->next;
    }
}

void login()
{
    // valid
    // invalid
}
int main()
{

    int choice;

    while (1)
    {
        printf("\n1 For Signup\n2 For Login\n3 For Exit\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        case 3:
            display();
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}