//missing number using xor operator 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int xor1 =0;
    int xor2 =0;
    for(int i=1; i<=n+1; i++)
    {
       xor1 = xor1^i; 
    }
    for(int i=0; i<n; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    printf("%d",xor1^xor2);

}