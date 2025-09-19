#include<stdio.h>
int main()
{   
    int n=5;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",ch);
            ch=ch +1;
        }
        printf("\n");
    }
}