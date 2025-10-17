//
#include<stdio.h.>
int main()
{
    int arr[7]={-3,2,4,-7,-1,1,5};
    int neg[7];
    int pos[7];
    int ans[7];
    for(int i=0;i<7;i++){
        if(arr[i]<0){
            int j=0;
            arr[i]=neg[j];
            j++;
        }
        else{
            int k= 0;
            pos[k]=arr[i];
            k++;
        }
    }
    int index =0;
    for(int i=0;i<3;i++){
        ans[index]=neg[i];
        index++;
        for(int j=0;j<4;j++){
            ans[index]=pos[j];
            index++;
        }
    }
    printf()
}