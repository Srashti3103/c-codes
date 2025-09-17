#include<stdio.h>
int main ()
{
     int num;
scanf("%d",&num);
   int original=num;
    int res=0;
 while (num!=0)
 {
   int lastDigit=num%10;
     res=  res*10+  lastDigit;
     num=num/10;

 }
 if(original==res){
   printf("p");
 }else{
 printf("not");
 }
}