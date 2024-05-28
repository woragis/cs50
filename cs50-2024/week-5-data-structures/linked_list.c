#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

struct LinkedList {};

typedef struct node {
  int value;
  struct node *next;
} node;

int main(int argc, char *argv[])
{
  node *list;
  node *n = malloc(sizeof(node));
  (*n).number = 1;
  n->next = NULL;
  list = n;

}
