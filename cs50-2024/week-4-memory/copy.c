#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
  char *s = "Hi!";
  char *t = malloc(strlen(s) + 1);
  printf("S: %s\tAddress: %p\n", s, &s);
  printf("T: %s\tAddress: %p\n", t, &t);
  return 0;
}
