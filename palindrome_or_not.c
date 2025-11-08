#include <stdio.h>

int main() {
    int num,reversednum = 0,remainder,originalnum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalnum = num;
    while (num != 0) 
    {
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num /= 10;
    }
    if (originalnum == reversednum) 
    {
        printf("%d is a palindrome.\n", originalnum);
    } else {
        printf("%d is not a palindrome.\n", originalnum);
    }
    return 0;
}