#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// C function to find the second most frequent character
// in a given string 'str'
int interleaving(char a[], char b[], char c[])
{
  while (c!= '\0')
  {
      if(*a == *c){
          a++;
      }else if(*b == *c){
          b++;
      }else{
          return false;
      }
      c++;
  }
  if(*a || *b){
      return false;
  }
  return true;
}

// Driver program to test above function
int main()
{
    char a[] = "ab";
    char b[] = "cd";
    char c[] = "abcd";

    interleaving(a, b, c);
    
}
