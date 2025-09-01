#include<stdio.h>
int main ()
{
    char days;
    printf("enter name of days");
    scanf("%c",&days);
    switch ("days")
    {
    case 1: printf("monday ") ;
     break;
    case 2: printf("tuesday");
    break;
    case 3: printf("wednesday");
    break;
    case 4: printf("thursday");
    break;
    case 5: printf("friday");
    break;
    case 6: printf("saturday");
    break;
    case 7: printf("sunday");
    break;
    default
    }
    return 0;
}