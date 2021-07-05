// //encoding string by changing the ascii value

// #include <stdio.h>
// #include <conio.h>


// // int encode(char str[], char str1[])
// // {
// //     int i = 0;

// //     while (str[i] != '\0')
// //     {
// //         str[i] = str[i] - 30; // Subtract 30 From Charcter
// //         i++;
// //     }
// //     str1 = str;
// //     return (str1);
// // }

// void main()
// {

//     char str[100];
//     char str1[100];

//     printf("\nEnter the String to be Encode : ");
//     scanf("%[^\n]", &str);

//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i] = str[i] +1  ; // Subtract 30 From Charcter
//         i++;
//     }

//     printf("%s", str);

//     getch();
// }

#include <stdio.h>
#include <conio.h>

char *encode(char *str)
{
    int i = 0;
    // str = " hello";
    while (str[i] != '\0')
    {
        str[i] = str[i] + 1; // Subtract 30 From Charcter
        i++;
    }
    printf("%s", str);
}

void main()
{

    char *str;
    // str = "hell";
    printf("\nEnter the String to be Encode : ");
    scanf("%[^\n]", &str);

    encode(*str);
    // printf("\nEncoded String : %s", encode(str));

    getch();
}