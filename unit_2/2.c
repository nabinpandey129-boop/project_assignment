#include <stdio.h>
int main()  
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("ASCII value : %d\n", ch);
  if (ch >= 'a' && ch <= 'z')
  {
    printf("uppercase = %c\n", ch - 32);
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    printf("lowercase = %c\n", ch + 32);
  }
  else
  {
    printf("INVALID\n");
  }
  return 0;
}