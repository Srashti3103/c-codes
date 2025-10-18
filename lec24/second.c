//structure with pointers
#include<stdio.h>
#include<string.h>
struct Adressssssss{
    int pincode;
};
struct student{
    char name[50];
    int rollno;
    int age;
    //struct Adressssssss s2;
};
int main()
{
    struct student s1[3];
    for(int i=0;i<3;i++){
        printf("Enter your name %d",i);
        scanf("%s",s1[i].name);
    }
    for(int i=0;i<3;i++){
        printf("%s\n",s1[i].name);
    }
//     s1.rollno=101;
//     s1.age=20;
//     printf("%d\n",s1.rollno);
//     strcpy(s1.name,"Srashti");
//     printf("%s\n",s1.name);
//     printf("%d\n",s1.age);
//     s1.s2.pincode=123456;
//     printf("%d\n",s1.s2.pincode);
//     return 0;
//
 }