// Q17.
// Write a program to:
// . Read a string
// . Check whether it is a palindrome
// . Convert the string to uppercase
// (without using built-in string functions)
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input

    // 1. Calculate length manually
    while (str[length] != '\0')
    
    {
        length++;
    }

    // FIX: Remove the newline character if it exists
    // fgets() includes '\n' at the end, which breaks palindrome logic
    if (length > 0 && str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';
        length--; 
    }

    // 2. Check for Palindrome
    // Compare characters from start and end moving inwards
    for (i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - 1 - i])
         {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) 
    {
        printf("The string is a Palindrome.\n");
    } else
     {
        printf("The string is NOT a Palindrome.\n");
    }

    // 3. Convert to Uppercase manually
    // In ASCII, 'a' is 97 and 'A' is 65. Difference is 32.
    for (i = 0; i < length; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
          {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}