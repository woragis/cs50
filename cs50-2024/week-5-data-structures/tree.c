#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *left;
  struct node *right;
} node;

bool search(node *tree, int number);

int main(int argc, char *argv[])
{

  return 0;
}

bool search(node *tree, int number)
{
  if (tree == NULL) { return false; }
  else if (number < tree->number) { return search(tree->left, number); }
  else if (number > tree->number) { return search(tree->right, number); }
  else { return true; }
}

