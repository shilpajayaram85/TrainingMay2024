#include<stdio.h>
#include<stdlib.h>

#define size 7

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void init()
{
    int i;
    for(i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    //create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
    int key = value % size;

    //check if chain[key] is empty
    if(chain[key] == NULL)
        chain[key] = newNode;
    //collision
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int search(int value)
{
    int key = value % size;
    struct node *temp = chain[key];
    while(temp)
    {
        if(temp->data == value)
            return 1;
        temp = temp->next;
    }
    return 0;
}
int main()
{
    //init array of list to NULL
    init();

    insert(7);
    insert(0);
    insert(3);
    insert(10);
    insert(4);
    insert(5);

    print();
	printf("Searching element 10\n");

    if(search(10))
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
    return 0;
}

