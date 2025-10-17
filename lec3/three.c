//print greater number through if else 
#include<stdio.h>
int main()
{
    int a, b ,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    {
        if(a>= b && a>=c)
       { 
        printf("a is greater number");
        scanf("%d",&a);
       } 
       else if (b>=a && b>=c)
       {
        printf("b is greater number");
        scanf("%d",&b);
       }
       else
       {
        printf("c is greaterr number");
        scanf("%d",&c);
       }
       return 0;
    }
}