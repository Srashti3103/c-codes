#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b ;
    char opr;
    printf("Enter first number:");
    scanf ( '%d', & a);
    printf("Enter opr(+,-,*,/):");
    scanf ( ' %c', & opr);
    printf("Enter second number:");
    scanf ( '%d', & b);
    if (opr == '+')
    { printf(" sum  is : %d \n" , a + b);
    }else if (opr == '-')
    {
        printf("subtract is : %d", a-b);
    }else if (opr == '*')
    {
        printf("multiplication is : %d", a*b);
    }else if (opr == '/')
    {
        printf("division is : %f",( float)a / b );
    }
    return 0;
}