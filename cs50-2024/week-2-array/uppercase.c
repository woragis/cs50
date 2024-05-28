#include <cs50.h>
#include <string.h>
#include <stdio.h>

void main(void)
{
  // string s = scanf("%d");
  // printf("The string: %s", s);
  printf("Before: %s\n", s);
  printf("After: ");
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    // if lowercase
    /*
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      printf("%c", s[i] - 32);
    }
    else {
      printf("%c", s[i]);
    }
       */
    printf("%s", toupper(s[i]));
  }
  printf("\n");
}

