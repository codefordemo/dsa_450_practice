// print the string in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// void swap(char *x ,char *y){
//     char *temp;

//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void reverseString(char *str, int start, int end){

//     for (int i = 0; i < end/2; i++)
//     {
//         swap(str[i], str[end - i]);
//     }

// }

void frequencyString(char str[], int start, int end)
{

    // bool check[26];

    // for (int i = 0; i < end; i++)
    // {
    //     check[i] = 0;
    // }
    // 'freq[]' implemented as hash table
    int check[256]; //use 256
    // int check[256 ] = {0} this can be used also
    // initialize all elements of freq[] to 0
    memset(check, 0, sizeof(check)); //We can use memset() to set all values as 0 or -1 for integral data types also

    // accumulate freqeuncy of each character in 'str'
    for (int i = 0; i < end; i++)
    {

        check[str[i] - 'a']++;
    }
    // traverse 'str' from left to rightdfgdac
    for (int i = 0; i < end; i++)
    {

        // if frequency of character str[i] is not
        // equal to 0
        if (check[str[i] - 'a'] != 0)
        {

            // print the character along with its
            // frequency
            if(check[str[i] - 'a'] > 1){

            printf("%c times %d \n", str[i], check[str[i] - 'a']);
            }
             
             
            // update frequency of str[i] to 0 so
            // that the same character is not printed
            // again
            check[str[i] - 'a'] = 0;
        }
    }
    // if(check[str[i] -'a'] > 1){
    //     printf("%s ", check[str[i] - 'a']);
    // }
}

int main()
{
    char str[100];
    printf("enter string \n");
    gets(str);
    int n = strlen(str);
    frequencyString(str, 0, n);
    // int i
    // printf("%s", str[str[1] - 'a']);

    return 0;
}
