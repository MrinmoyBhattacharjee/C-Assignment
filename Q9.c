/* Q9.Write a program to print a triangle of stars as follows (take number of lines from user):
*
***
*****
*******
*********

*/
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j;
printf("Enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
   for( j=1;j<=i;j++)
     printf("*");
   printf("\n");
   }
getch();
}
