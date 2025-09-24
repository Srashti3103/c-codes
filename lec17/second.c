//call by reference 
#include<stdio.h>
int sum(int *x , int *y){
    *x=50;
    *y=50;
    int c= (*x)+(*y);
    return c;
}
int main ()
{
    int x= 10;
    int y=20;
    int data = sum(&x,&y);
    printf("%d\n",data );
    printf("%d\n",x+y);
}