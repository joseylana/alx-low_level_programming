#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if value is upper case
 * @c: character to be checked
 * Return: 1 if c is capital, otherwise 0
 */
int _isupper(int c)
{
  if(c >= 65 && c <= 90)
  {
    return (1);
  }
   return (0);
}
