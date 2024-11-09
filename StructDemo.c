#include <stdio.h>
#include<stdlib.h>

struct movie
{
    char name[30];
    int year;
    char lang[30];
} m[50];

// struct movie m[50];
int size;

void addMovie()
{

    int i;

    printf("\nHow many movies you want to enter ? ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter movie name year and lang");
        scanf("%s%d%s", &m[i].name, &m[i].year, &m[i].lang);
    }
}

void printMovies()
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("\n%s %d %s", m[i].name, m[i].year, m[i].lang);
    }
}

void searchMovie(){

}

void sortByYear(){

}

int main()
{

    int choice;

    while (1)
    {
        printf("\n1 For Add Movie\n2 For Print All movies\n3 for Search Movie\n4 For Sory By Year\n5 for Exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMovie();
            break;
        case 2:
            printMovies();
            break;
        case 3:
            searchMovie();
            break;
        case 4:
            sortByYear();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice PTA");
            break;
        }//switch 
    }//while(1)

    return 0;
}