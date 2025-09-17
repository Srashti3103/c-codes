//FIZZBUZZ//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("FIZZBUZZ");
    }
    else if(n % 3 ==0)
    {
        printf("FIZZ");
    }
    else if(n % 5 == 0)
    {
        printf("BUZZ");
    }
    else
    {
        printf("number is not divisible ");
    }
    return 0;
}