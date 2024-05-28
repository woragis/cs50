#include <stdio.h>

int len(char s[]);

void main(void)
{
  char name[10] = "Jezreel";
  int name_length = len(name);
  printf("My name: %s\nMy name length: %i", name, name_length);
}
int len(char s[])
{
  int length = 0;
  while (s[length] != '\0')
  {
    length++;
  }
  return length;
}
