// nth smallest number 
#include<stdio.h>
int main()
{
     int m;
    //size of array
    printf("Enter number of element :");
    scanf("%d",&m);
    int arr[m];
    //Input element of array
    printf("Enter elements :");
    for(int i=0; i<m;i++){
        scanf("%d",&arr[i]);       
    }
    for(int i=0; i<m; i++){
    int temp =0;
    for(int j=i+1;j<6;j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf(" %d  smallest number  %d",n,arr[6-n]);

}