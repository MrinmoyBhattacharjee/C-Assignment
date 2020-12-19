//Q1.Write a program to print the sum and product of digits of an integer.
#include<stdio.h>
#include<conio.h>
main()
{

int n,s=0,p=1,r;
printf("Enter a number=");
scanf("%d",&n);
while(n>0)
{

r=n%10;
s=s+r;
p=p*r;
n=n/10;
}
printf("\nSum of digits=%d",s);
printf("\nProduct of digits=%d",p);

getch();
}
