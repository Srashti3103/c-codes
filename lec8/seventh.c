// right triangle 
#include<stdio.h>
int main ()
{
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j= 1; j<=i+1; j++){
            printf("%d",j);    
        }
        printf("\n");
    }
}