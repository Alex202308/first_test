#include <stdio.h>

int result(int n)
{	
	
	if (n > 1)
	{
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{	
				return 2;
			}
		}
		return 1;	
	}
      	else
	{
		return 3;
	}	
}

int main()
{
	int n;
	printf("Input a number: ");
	scanf("%i", &n);
	int answer = result(n);
	if (answer == 2)
	{
		answer = printf("Number %i is complex\n", n);
	}
	else if(answer == 1)
	{
		answer = printf("Number %i is prime\n", n);
	}
	else
	{
		answer = printf("Number %i is neither prime nor complex\n", n);
	}
	
}
