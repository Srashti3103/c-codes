//GRADE CALCULATOR//
#include<stdio.h>
int main ()
{
 int marks , attend;
 printf("Enter your marks ");
 scanf("%d",&marks);
 printf("Enter your attend");
 scanf("%d",&attend);
 if(attend >=75 && marks >= 90)
 {
    printf("Grade:A");
 }
 else if (attend>=65 && marks>=75)
 {
    printf("Grade:B");
 }
 else if (attend>=75 && marks>=65)
 {
    printf("Grade:B");
 }
 else if (attend>=75 && marks>=55)
 {
    printf("Grade:C");
 }
 else if (attend>=75 && marks>=45)
 {
    printf("Grade:D");
 }
 else if (attend>=75 && marks>=33)
 {
    printf("Grade:E");
 }
 else
 {
    printf("Grade:F");
}
return 0;
}