//swap two variable by pointer without third operator
#include<stdio.h>
int swap(int *x , int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("%d\n%d",*x,*y);
}
int main ()
{
    int x= 10;
    int y=20;
    swap(&x,&y);
}