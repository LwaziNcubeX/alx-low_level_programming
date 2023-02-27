#include "main.h"
/**
 * rev_string - Entry Point
 * @s: pointer of an character
 * Return: void
 */

void rev_string(char *s)
{
	int len, i; 
  char *start, *end, temp; 
  len = str_len (s); 
  start = s; 
  end = s; 

  for (i = 0; i < len - 1; i++) 
  end++; 

  for (i = 0; i < len/2; i++) 
  { 
    temp = *end; 
    *end = *start; 
    *start = temp; 

    start++; 
    end--; 
   } 
}
