/*The Binary number system only uses two digits, 0 and 1 and number system can be called binary string.
The function accepts a string str as its argument. The string str consists of binary digits eparated with an alphabet as follows:

– A denotes AND operation
– B denotes OR operation
– C denotes XOR Operation */

#include <stdio.h>
#include <string.h>  

int OperationsBinaryString (char *str)
{
  if (str == NULL)
    return -1;
  int i = 1;
  int a = *str - '0';
  str++;
  while (*str != '\0')
    {
      char p = *str;
      str++;
      if (p == 'A')
	a &= (*str - '0');
      else if (p == 'B')
	a |= (*str - '0');
      else
	a ^= (*str - '0');
      str++;
    }
  return a;
}

int main ()
{
  char str[100];
  fgets (str, sizeof (str), stdin);
  int len = strlen (str);
  if (str[len - 1] == '\n')
    {
      str[len - 1] = '\0';	
      len--;			
    }
  int result = OperationsBinaryString (str);
  printf ("%d\n", result);
  return 0;
}
