// print the string in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

 

 

void encoding(char str[], int shift ){
    int n = strlen(str);
    
    for (int i = 0; i < n; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){

        
        str[i] = (str[i] + shift - 97)%26 +97;
        }
        else{  //capital range strart from 65
            str[i] = (str[i] + shift - 65)%26 + 65;
        }
    }
    printf("After encoding %s ", str);
}

void decoding(char *str, int shift){
    int n = strlen(str);
    for (int  i = 0; i < n; i++)
    {

        if(str[i] >= 'a'  && str[i] <='z'){
            str[i] = (str[i] - shift - 'a') % 26 + 'a';
         }else{
             str[i] = (str[i] - shift - 'Z') % 26 + 'Z';
         }

    }
    printf("\nAfter decoding %s ", str);
}

int main()
{
    char str[100];
    printf("enter string \n");
    gets(str);
    int n = strlen(str);
    encoding(str, 1);
    decoding(str, 1);

    return 0;
}
