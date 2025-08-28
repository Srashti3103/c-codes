#include<stdio.h>
int main()
{
int a=76;
int m=64;
if (a>75 && m> 75)
{
    printf("A");
} else if (a>75 && m<75 && m>65){
    printf("B");
} else if (a>75 && m<65 && m>45){
    printf("C");
}else if (a>75 && m<45 && m>33){
    printf("D"); 
}else if (a>75 && m<33){
    printf("f");
}
}