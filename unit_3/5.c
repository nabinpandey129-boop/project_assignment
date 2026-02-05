#include<stdio.h>
#include<string.h>
int main()
{
  char str1[1000];
  int i, count = 0;
  printf("Enter a string: ");
  fgets(str1, sizeof(str1), stdin);
  // counting characters in the string without counting null character
  for (i = 0; str1[i] != '\0'; i++);
  printf("Number of characters in the given string: %d\n", i - 1);
 
  // Counting spaces in the string
  for (i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] == ' ')
    {
      count++;
    }
  }
  printf("The string is: %s", str1);
  printf("Number of spaces in the given string: %d\n", count);
  return 0; 
}