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




/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
   for( int *p=arr;*(p)<=5;*(p)++){
    printf("%d\n",*(p));
}
}*/