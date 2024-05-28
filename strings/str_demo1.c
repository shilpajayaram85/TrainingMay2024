#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{	
	char name[2];
	char fname [] = "Jhon"; //5(4 + nullchar
	char lname [] ={'M','a', 'r', 'k', '\0'}; //5 (4+\0)

	printf("%s\t",fname);
	printf("%s\n",lname);

	//scanf("%[^\n]s", name);
	gets(name
	//printf("%s\n", name);
	return EXIT_SUCCESS;
}

