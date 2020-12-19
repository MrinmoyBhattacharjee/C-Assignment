//3. Write a program to compute the sum of the first n terms of the following series
//S = 1+1/2+1/3+1/4+……


#include<stdio.h>
#include<conio.h>
main()
{

float n,i,s=0;

printf("Enter the value of n=");
scanf("%f",&n);

for(i=1;i<=n;i++)
 s=s+(1/i);

printf("\nsum of the series =%f",s);


getch();
}

