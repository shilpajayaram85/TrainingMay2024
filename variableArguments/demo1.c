#include<stdio.h>
#include<stdarg.h>

int sum(int n, ...)
{
	int res = 0;
	int i;
	va_list ap;

	va_start(ap, n);
	res =va_arg(ap, int);
	for(i = 1; i < n; i++)
	{
		int temp = va_arg(ap,int);
	    res = res > temp ? res : temp;
	}

	va_end(ap);
	return res;
}

int main()
{

	printf("Sum = %d\n",  sum(2, 10, 20));

	printf("Sum = %d\n",  sum(3, 10, 20, 30));

	return 0;
}
