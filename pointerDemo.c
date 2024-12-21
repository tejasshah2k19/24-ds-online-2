#include <stdio.h>

int main()
{
    int a = 10;

    printf("\n a  = %d", a); // 10

    printf("\n address of  a  = %d", &a); // address ->%d => %u 
    //& ==> address of 
    //how to print size of a variable 
    //how to print how many bytes allocated by int data type 

    printf("\n sizeof a => %d ",sizeof(a));     
    printf("\n sizeof int => %d ",sizeof(int));     

    return 0;
}