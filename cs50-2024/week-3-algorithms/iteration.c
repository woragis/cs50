#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  int N = 3;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
