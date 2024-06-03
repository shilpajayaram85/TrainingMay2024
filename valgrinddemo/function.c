 
#include"head.h"



void display(node *head) 
{

while(head!=NULL)
{
  printf("%d ->", head->data);
  head=head->next;
}
}

node * insert_first(node *head, int number) 
{
    node *newnode;
    newnode = (node*) malloc (sizeof(node));

    if (NULL ==newnode)
    {
        printf("Memory not available");
        exit(EXIT_FAILURE);
    }
    else
    {
        newnode->data = number; 

      
        newnode->next = head;
        head = newnode;
        return head;
    }
}

node * insert_last(node *head, int number) 
{
    node *temp = head;

    node *newnode;

    newnode = (node*)malloc(sizeof(node));

    if(NULL == newnode)
    {
        printf("\nMemory allocation failed \n");
        exit(EXIT_FAILURE);
    }
    if(NULL == head)
    {
         
        newnode->data = number; /* Assigning data */
        newnode->next = head;
        head = newnode;
	return head;  
    }		
    while(NULL != temp->next)
    {
        temp = temp->next;
    }

    newnode->data = number;

    newnode->next = temp->next;

    temp->next = newnode;

    return head;


}



void free_list(node *head)
{
        node *temp = NULL;
        while(NULL != head)
        {
                temp = head;
                head = head->next;
                free(temp);
        }
}

