#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i = 8;
  int j = 8;
  char *s = get_string("Give me: \n");
  char *t = get_string("Give me: \n");

  if (i == j)
  {
    printf("Same\n");
  }
  else
  {
    printf("Different\n");
  }

}
