//calculator//
#include<stdio.h>
#include<math.h>
int main ()
{
    char oper;
    int a, b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("enter an operator");
    scanf(" %c",&oper);
    if (oper == '+')
    {
        printf("%d",a+b);
    }else if(oper=='-')
    {
        printf("%d",a-b);
    }else if (oper =='*')
    {
        printf("%d",a*b);
    }else if(oper =='/')
    {
        if(b==0)
        {
            printf("invalidvalue ");
        }else {
            printf("%d",a/b);
        }
    }
    return 0;
}