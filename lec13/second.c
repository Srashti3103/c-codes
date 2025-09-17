//check array is pallindrome//
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,2,1};
    int check=1;
    for(int i=0;i<5/2;i++){
    if(arr[i]=arr[5-1-i]){
        check=0;
        break;
    }
    }
    if(check =1){
        printf("it is a pallindrome");
    }else{
        printf("it is not a pallindrome");
    }

}
