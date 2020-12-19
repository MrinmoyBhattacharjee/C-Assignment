//4. Write a program to compute the sum of the first n terms of the following series
//S =1-2+3-4+5…………….

#include<stdio.h>
#include<conio.h>
main()
{

int n,i,s=0;

printf("Enter the value of n=");
scanf("%d",&n);

for(i=1;i<=n;i++)
 if(n%2!=0)
  s=s+i;
 else 
  s=s-i;

printf("\nsum of the series =%d",s);


getch();
}


