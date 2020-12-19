//Q5. Write a function that checks whether a given string is Palindrome or not.
// Use this function to find whether the string entered by user is Palindrome or not.


#include <stdio.h>
#include<conio.h>
#include <string.h>


void checkPalindrome(char str[])
{
    int l,m;
    l = 0;
    m = strlen(str) - 1;
    while (m > l)
    {
        if (str[l++] != str[m--])
        {
            printf("\n%s is Not Palindrome", str);
            return;
         }
    }
    printf("\n%s is palindrome", str);
}

 main()
{
 char str[50];
 printf("Enter a string=");
 gets(str);
 checkPalindrome(str);
 getch();

}
