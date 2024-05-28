#include<stdio.h>


int main()
{
	int sum, n;
	n = 1;
	loop:
		sum = sum + n ;
	if(n == 10)
		goto print;
	else
	{
		n = n+1;
		goto loop;
	}
	print:
		printf("%d",sum);
		printf("\n\n");
	return 0;
}

