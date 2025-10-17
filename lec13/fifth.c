//print element those sum is maximum by two loops//
#include<stdio.h>
int main()
{
    int arr[5]={1,4,6,3,7};
    int sum=0;
    int maxsum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=j){
            sum=arr[i]+arr[j];
        }}
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    printf("maxsum is : %d",maxsum);
}