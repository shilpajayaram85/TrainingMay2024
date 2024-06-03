/********************** Header File Inclusions ********************************/
#include <stdio.h>
#include<stdlib.h>


typedef  struct node_list
{
    int data;
    struct node_list *next;
}node;


//Global variable


//node *temp_head;

node * insert_first(node *head,int number);
node * insert_last(node *head, int number);
void display(node *head);
void free_list(node *head);
