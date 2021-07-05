

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void checkPalindrome(char *str, int a, int n)
{
    int l = a;
    int h = n;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf(" the string is not palindrome \n");
            return;
        }
    }
    printf("\n String is palindrome");
}

int main()
{
    char str[100];
    printf("enter string \n");
    gets(str);
    int n = strlen(str);
    checkPalindrome(str, 0, n-1);

    return 0;
}
