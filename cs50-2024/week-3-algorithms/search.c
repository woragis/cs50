#include <stdio.h>
#include <cs50.h>
#include <string.h>

// creating data structure
// is it a class? maybe
typedef struct // declare struct
{
  string name;
  string number;
} person;

int main(void)
{
  person people[3];
  people[0].name = "Carter";
  people[0].number = "+1-617-495-1000";

  people[1].name = "David";
  people[1].number = "+1-617-495-1000";

  people[2].name = "John";
  people[2].number = "+1-649-498-2758";

  string chosen_person = "David"

  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, chosen_person) == 0)  {
      printf("%s was Found %s\n",people[i].name, people[i].number);
      return 0;
    }
  }
  printf("%s was Not Found\n", chosen_person);
  return 1;
}

