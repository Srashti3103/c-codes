// right triangle 
#include<stdio.h>
int main()
{
    int n =5 ;
    int num =1;
    for( int i=0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            printf("%d",num);
            num = num + 1;
        }
        printf("\n");
    }
}