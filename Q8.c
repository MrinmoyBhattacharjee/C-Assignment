//8. Write a macro that swaps two numbers. Write a program to use it.

#include<stdio.h>
#include<conio.h>
#define swaptwo(x,y) int t;t=x;x=y;y=t;
main()
{
	int a,b;

	printf("\n Enter two number");
	scanf("%d%d",&a,&b);
	printf("\n Before swaping the Value of a=%d and b=%d",a,b);
	swaptwo(a,b);
	printf("\n After swap value of a=%d and b=%d",a,b);
	getch();
}
