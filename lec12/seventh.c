//missing element//
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,4,5};
    int miss=0;
    int suma=0;
    int sumb=0;
    for(int i=0; i<5; i++){
        suma+=a[i];
        sumb+=b[i];
        }  
        miss=suma-sumb;
        printf("miss element: %d",miss);
    }