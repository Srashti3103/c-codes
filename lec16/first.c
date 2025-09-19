#include<stdio.h>
int main()
{
    int arr[5]={2,3,1,6,9};
    int n= sizeof(arr)/sizeof(int);
    for(int i= 0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    printf("sorted array");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}