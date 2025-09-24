//convert 2D array into 1D array
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int ar[9] ;
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ar[k] = arr[i][j];
            k++;
        }
    }
    for(int i=0;i<9;i++){
        printf("%d ",ar[i]);
    }
}