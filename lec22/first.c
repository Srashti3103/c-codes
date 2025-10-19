//max frequency element
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "abcdabbbaa";
    int freq[256]={0}; 
    int ln = strlen(str);
    int max=0;
    char result;
    for(int i=0; i<ln; i++)
    {
        freq[str[i]]++;
    }
    for(int i=0; i<ln; i++)
    {
        if(max<freq[str[i]])
        {
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("%c",result);

}