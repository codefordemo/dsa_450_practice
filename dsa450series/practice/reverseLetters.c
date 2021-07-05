//wap to rotate array cyclically

#include <stdio.h>

 

int main()
{
    char arr[] = "abcde";
    char str[] = "zyxwvutsrqponmlkjihgfedcba";
                //   abcdefghijklmnopqrstuvwxyz
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = 0; i < length; i++)
    {
        arr[i] = str[arr[i] - 'a'];
    }
    
    for (int i = 0; i < length; i++)
    {
        printf("%c ", arr[i]);
    }
    

    return 0;
}