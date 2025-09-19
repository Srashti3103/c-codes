#include<stdio.h>
int main()
{
    int n=4;
    for(int i=0;i<n;i++){//outter loop for lines 
        for(int j=0;j<i+1;j++){//inner loop elemwnts in line
            printf("*");
        }
        printf("\n");
    }
}