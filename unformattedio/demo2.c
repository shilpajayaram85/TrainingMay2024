
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int day, year;
	char weekday[100], month[100];
	char date[100];
	strcpy(date,"Tuesday May 28 2024");
	sscanf(date, "%s %s %d %d", weekday, month, &day, &year);
	printf("%s %d %s %d", weekday, day, month, year);
	printf("\n\n");
	return EXIT_SUCCESS;
}
