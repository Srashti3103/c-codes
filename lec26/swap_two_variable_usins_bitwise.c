//swap two variable without using third variable and with the use of bitwise operator
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter first variable :");
    scanf("%d",&n);
    printf("Enter second variable :");
    scanf("%d",&m);
    n=n^m;
    m=n^m;
    n=n^m;
    printf(" first number :%d\n",n);
    printf("Second number : %d\n", m);
}