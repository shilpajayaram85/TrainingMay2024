#include<stdio.h>

#define size 7

int hash[size];


void init()
{   
    int i;
    for(i = 0; i < size; i++)
        hash[i] = -1;
}
int hashfunction(int value)
{
	return value %size;
}
void insert(int value)
{   
    int key = hashfunction(value);
    
    if(hash[key] == -1)
    {   
        hash[key] = value;
        printf("%d inserted at hash[%d]\n", value,key);
    }
    else
    {   
        printf("Collision : hash[%d] has element %d already!\n",key,hash[key]);
        printf("Unable to insert %d\n",value);
    }
}

void del(int value)
{
    int key = hashfunction(value);
    if(hash[key] == value)
        hash[key] = -1;
    else
        printf("%d not present in the hash table\n",value);
}

void search(int value)
{
    int key = hashfunction(value);
    if(hash[key] == value)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
        printf("hash[%d] = %d\n",i,hash[i]);
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

    return 0;
}
