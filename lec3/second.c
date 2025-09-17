//even odd function 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
  {
     if( num % 2 == 0)
    printf("num is even");
    else if (num % 2 ==1)
    printf("num is odd");
  }
    return 0 ;
}