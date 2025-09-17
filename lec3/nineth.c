//PASSWORD CHECK//
#include<stdio.h>
int main ()
{
    int pass;
    printf("Enter a password");
    scanf(" %d",&pass);
    if(pass == 1234 )
    {
        printf("ACCESS GRANTED");
    }
    else 
    {
    printf("TRY AGAIN");
    }
    return 0;
}