//Q7.Write a program to compute the factors of a given number

#include<stdio.h>
#include<conio.h>
main()
{

int n,i,s=0;

printf("Enter a number=");
scanf("%d",&n);
printf("\nFactors of %d are=",n);
for(i=1;i<=n;i++)
 if(n%i==0)
  printf("  %d",i);
getch();
}
