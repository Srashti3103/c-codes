#include <stdio.h>
int main ()
{
    int a;
    char fizz , buzz , fizzbuzz;
    printf("Enter a integer");
    scanf('%d', &a);
    if(a % 3 == 0)
    { printf("fizz");
    }else if (a % 5 == 0)
    {
        printf("buzz");
    }else if (a % 3 == 0 && a % 5 == 0)
    {
        printf("fizzbuzz");
    }
    return 0 ;

}