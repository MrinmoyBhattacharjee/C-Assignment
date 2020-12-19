//6. Write a function to find whether a given no. is prime or not. Use the same to generate the prime
//numbers less than 100.
#include <stdio.h>
#include <conio.h>

void isprime(int n)
{
  int i,j,c=0;
  for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
		printf("\n%d is a Prime Number\n",n);
	else
		printf("\n%d is not a Prime Number\n",n);

   printf("\nPrime Numbers less than 100 are=\n");

  	for(i=1;i<=100;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==2)
			printf(" %d ",i);
	}
}

 main()
{
	int n;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&n);
   isprime(n);
	getch();
}

