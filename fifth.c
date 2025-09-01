#include<stdio.h>
int main ()
{
    char pass ;
    printf("enter your pass");
    scanf("%c", pass);
    if (pass == '1234')
    {
        printf("welcome :%c");        
    }else{
        printf("try again : %c");
    }
    return 0;
}