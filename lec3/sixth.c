//vowel and consonant//
#include<stdio.h>
int main()
{
    char  letter;
    printf("Enter a letter");
    scanf(" %c",&letter);
    if(letter == 'A' && letter == 'E' && letter == 'I' && letter == 'O' && letter =='U' && letter == 'a' && letter == 'e' && letter == 'i' && letter == 'o' && letter == 'u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
    return 0;
}