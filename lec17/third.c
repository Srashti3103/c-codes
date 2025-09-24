//print element of array
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("%d\n",*(p));
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
}