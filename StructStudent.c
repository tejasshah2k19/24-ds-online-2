// #include <stdio.h>

// struct student
// {
//     char name[20];
//     int id;
//     int maths;
//     int sci;
//     int eng;
//     float perc;
//     char grade;
// };

// int main()
// {

//     struct student s; // id name maths sci eng perc grade
//     printf("\nEnter id and name");
//     scanf("%d%s", &s.id, &s.name);

//     printf("\nEnter marks of maths sci and eng");
//     scanf("%d%d%d", &s.maths, &s.sci, &s.eng);

//     s.perc = (s.maths + s.eng + s.sci) / 3.0;

//     if (s.perc > 90)
//     {
//         s.grade = 'A';
//     }
//     else if (s.perc > 70)
//     {
//         s.grade = 'B';
//     }
//     else if (s.perc >= 35)
//     {
//         s.grade = 'C';
//     }
//     else
//     {
//         s.grade = 'F';
//     }

//     printf("\nId = %d Name  = %s Maths = %d Sci = %d  Eng = %d  Perc = %f  Grade = %c", s.id, s.name, s.maths, s.sci, s.eng, s.perc, s.grade);
//     return 0;
// }


#include <stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int id;
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{

    struct student *s; // id name maths sci eng perc grade

    s = malloc(sizeof(struct student));

    printf("\nEnter id and name");
    scanf("%d%s", &s->id, &s->name);

    printf("\nEnter marks of maths sci and eng");
    scanf("%d%d%d", &s->maths, &s->sci, &s->eng);

    s->perc = (s->maths + s->eng + s->sci) / 3.0;

    if (s->perc > 90)
    {
        s->grade = 'A';
    }
    else if (s->perc > 70)
    {
        s->grade = 'B';
    }
    else if (s->perc >= 35)
    {
        s->grade = 'C';
    }
    else
    {
        s->grade = 'F';
    }

    printf("\nId = %d Name  = %s Maths = %d Sci = %d  Eng = %d  Perc = %f  Grade = %c", s->id, s->name, s->maths, s->sci, s->eng, s->perc, s->grade);
    
    free(s);
    return 0;
}