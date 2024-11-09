#include<stdio.h>

int main(){
    
    char x[30];
    int i; 


    printf("\nEnter name");
    //scanf("%s",&x);//royal 
    gets(x); 

    printf("\n%s",x);//royal 

    printf("\nCharacter =>");
    for(i=0;x[i] != '\0' ;i++){
        printf("\n%c",x[i]);
    }
    //
    // royal 
    //layor 
    
    return 0;
}