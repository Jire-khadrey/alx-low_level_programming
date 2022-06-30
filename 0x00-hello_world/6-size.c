#include <stdio.h>

/**
 * main - prints size of various data types
 * Return: 0 for success amd Not zero for otherwise
 */
int main(void)
{
  printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
  printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
  printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
  printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
  print("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
