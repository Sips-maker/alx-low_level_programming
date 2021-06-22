#include <stdio.h>

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
  char letter = 'a';

  for(letter = 'a'; <= 'z'; letter++)

    putchar(letter);

	putchar('\n');

    return 0;
}
