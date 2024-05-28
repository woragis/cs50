#include <stdio.h>
// not available
// #include <cs50.h>

int main(void)
{
  char name[20];
  printf("Whats your name? \n");
  scanf("%s", name);
  // how it is on the class
  // string name = get_string("Whats your name? ");
  printf("Hello, %s!\n", name);
}

int comparison(int x, int y) {
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
  return 0;
}

int get_int(char[50] prompt)
{
  int number;
  printf("%s", prompt);
  scanf("%i", number);
  return number;
}
