#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);

void main(void)
{
  int x; int y;
  scanf("%i\n", x);
  printf("hi\n");
  scanf("%i\n", y);
  int z = add(x, y);
  printf("%i", z);
}

int add(int a, int b)
{
  return a + b;
}
