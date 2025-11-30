//find unique number using bitwise operator
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int xor=0;
    for (int i=0; i<n; i++ ){
        xor = xor^arr[i];
    }
    printf("unique element : %d",xor);
}