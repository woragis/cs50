#include <stdio.h>
#include <cs50.h>
#include <string.h>
// hexadecimal is more covenient
// than writing all the bits
int main(void)
{
  // int n = 50;
  // int *p = &n;
  string name = "Hi!";
  string *p = &name;
  printf("String: %s\nPointer: %p\n",name, p);
  char *s = "Hello, World!"; // the same a string datatype
  printf("%s\n", s);
  return 0;
}
