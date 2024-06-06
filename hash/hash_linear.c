
#include<stdio.h>

#define size 7

int arr[size];


void init()
{   
    int i;
    for(i = 0; i < size; i++)
        arr[i] = -1;
}
int hashfunction(int value)
{
	return value %size;
}
void insert(int value)
{   
    int key = hashfunction(value);
    
    if(arr[key] == -1)
    {   
        arr[key] = value;
        printf("%d inserted at arr[%d]\n", value,key);
    }
    else
    {
		for(int i = 1; i < size; i++)
		{
			int key = (key +1) % size;
			if(arr[key] == -1)
			{
				arr[key] = value;
				printf("collision\n");
        		printf("%d inserted at arr[%d]\n", value,key);
				break;
			}
		}
    }
}

void del(int value)
{
    int key = hashfunction(value);
    if(arr[key] == value)
        arr[key] = -1;
    else
        printf("%d not present in the hash table\n",value);
}

void search(int value)
{
    int key = hashfunction(value);
    if(arr[key] == value)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}

int main()
{
    init();
    insert(10); //key = 10 % 7 ==> 3
    insert(4);  //key = 4 % 7  ==> 4
    insert(2);  //key = 2 % 7  ==> 2
    insert(3);  //key = 3 % 7  ==> 3 (collision)

    printf("Hash table\n");
    print();
    printf("\n");

    printf("Deleting value 10..\n");
    del(10);
    printf("After the deletion hash table\n");
    print();
    printf("\n");

    printf("Deleting value 5..\n");
    del(5);
    printf("After the deletion hash table\n");
    print();
    printf("\n");

    printf("Searching value 4..\n");
    search(4);
    printf("Searching value 10..\n");
    search(10);

    printf("Searching value 3..\n");
    search(3);

    return 0;
}
