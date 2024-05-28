#include <stdio.h>

int main(void)
{
  int x;
  int y;
  printf("What's X? \n");
  scanf("%i", x);
  printf("What's Y? \n");
  scanf("%i", y);
  if (x < y)
  {
    printf("X is less than Y\n");
  }
  else if (x > y)
  {
    printf("X is greater than Y\n");
  }
  else
  {
    printf("X equal to Y\n");
  }

  // char c = 
  if (c == 'y' || c == 'Y') {
    printf("Agreed!\n");
  }
  else if (c == 'n' || c == 'N') {
    printf("Not agreed.\n");
  }

  return 0;
}
