#include <stdio.h>

int main() {
    int num, rev = 0, rem, real;

    printf("Enter a number: ");
    scanf("%d", &num);

    real = num;  

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (real == rev)
        printf("It is a palindrome number.\n");
    else
        printf("It is not a palindrome number.\n");

    return 0;
}