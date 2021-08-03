#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 * Return: Always 0
 * Handle the following conversion specifiers: c, s, %
 */

int main(void)
{
   char * my_pointer;
   my_pointer = "Siphiwe";
   int age;
   age = 27;
    printf("%s is %s\n", "My name", my_pointer);
    printf("I am %d years old\n", age);

    return 0;
}
