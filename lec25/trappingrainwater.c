//Traping Rain Water
#include<stdio.h>
int main()
{
    //structure with pointers
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left[n],right[n];
    left[0]=arr[0];
    for(int i=0;i<n;i++){
        left[i]=left[i-1]>arr[i]?left[i-1]:arr[i];
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]>arr[i]?right[i+1]:arr[i];
    }
    int water =0;
    for(int i=0;i<n;i++){
        water+= (left[i]<right[i]?left[i]:right[i])-arr[i];
    }
    printf("Total water trapped is %d\n",water);
    return 0;
}