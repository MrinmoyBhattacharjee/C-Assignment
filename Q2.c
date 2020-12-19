//Q2. Write a program to reverse a number.

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
s=s*10+r;
n=n/10;

}
printf("\nReverse of a number=%d",s);


getch();
}
