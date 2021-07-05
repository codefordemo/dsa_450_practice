// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <limits.h>
// #include <stdbool.h>
// #include <string.h>
// ;

// int anagram(char str[], char str1[])
// {
//   const int CHARS = 26;
//   int count[CHARS] = {0};
//   int count1[CHARS] = {0};
//   for (int i = 0; str[i]; i++)
//   {
//     count[str[i] - 'a']++;
//   }

//   for (int i = 0; str1[i]; i++)
//   {
//     count[str1[i] - 'a']++;
//   }
//   // printf("%d ", count1);

//   int result = 0;
//   for (int i = 0; i < 26; i++)
//   {
//     result +=  abs(count[i] - count1[i]);
//   }
//     // printf("%d ", result);
//   return result;
// }

// // Driver program to test above function
// int main()
// {
//   char str[] = "bcadeh";
//   char str1[] = "hea";
//   anagram(str, str1);
// }

// C++ program to find minimum number of characters
// to be removed to make two strings anagram.

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(char str1[], char str2[])
{
  // make hash array for both string and calculate
  // frequency of each character
  int count1[26] = {0};
 int  count2[26] = {0};

  // count frequency of each character in first string
  for (int i = 0; str1[i] != '\0'; i++)
    count1[str1[i] - 'a']++;

  // count frequency of each character in second string
  for (int i = 0; str2[i] != '\0'; i++)
    count2[str2[i] - 'a']++;

  // traverse count arrays to find number of characters
  // to be removed
  int result = 0;
  for (int i = 0; i < 26; i++)
    result += abs(count1[i] - count2[i]);
  return result;
}

// Driver program to run the case
int main()
{
  char str1[] = "bcadeh", str2[] = "hea";
  printf("%d ",remAnagram(str1, str2));
  return 0;
}
