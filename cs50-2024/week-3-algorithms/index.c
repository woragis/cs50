#include <stdio.h>
#include <cs50.h>

int linearSearch(int target, int numbers[], int numbers_length);int binarySearch(int target, int numbers[], int numbers_length);

int main(void)
{
  int numbers[] = {1, 2, 3, 5, 10, 13, 15, 30, 40, 80};
  int n = 40;
  int lresult = linearSearch(n, numbers, 11);
  int bresult = binarySearch(n, numbers, 11);
  printf("Linear Search Position: %i\n", lresult);
  printf("Binary Search Position: %i\n", bresult);

  return 0;
}

int linearSearch(int target, int numbers[], int numbers_length) {
  for (int i = 0; i < numbers_length; i++) {
    if (target == numbers[i]) {
      return i;
    }
  }
  return -1;
}


int binarySearch(int target, int numbers[], int numbers_length) {
  int left = 0;
  int right = numbers_length - 1;
  int middle;
  int iterations = 0;
  string iterationCount = "Binary Iterations count";
  while (left < right) {
    iterations++;
    middle = (int) ((left + right) / 2);
    if (target > numbers[middle]) {
      left = middle + 1;
    } else if (target < numbers[middle]) {
      right = middle - 1;
    } else {
      printf("%s = %i\n",iterationCount, iterations);
      return middle;
    }
  }
  printf("%s = %i\n",iterationCount, iterations);
  return -1;
}


