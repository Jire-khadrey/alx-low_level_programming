#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number to int n
 * and checks if it is greater than or equal
 * to or less than 0 and prints it
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf("%d is positive\n", n);
  else if (n == 0)
    printf("%d is zero\n", n);
  else if  (n < 0)
    printf("%d is negative\n", n);
  return (0);
}
