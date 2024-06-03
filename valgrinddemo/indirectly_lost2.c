//Demo code snippet to show indirectly lost memory - example 2

#include <stdio.h>
#include <stdlib.h>

//Employee structure
typedef struct emp
{
    int data;
    struct emp *next;
}EMP;


//case 1:
//Root->N1->N2--> causes 2 definitely(root, N2) and 1 indirect(for N1)
EMP *ftest2()
{
    EMP *nextnode = NULL;

    EMP *nextnode2 = NULL;
    EMP *root = (struct emp*)malloc(sizeof(struct emp));
    root->data = 10;

    root->next = (struct emp*)malloc(sizeof(struct emp));
    root->next->data = 20;
    root->next->next = NULL;

    nextnode = root->next;
    nextnode->next = (struct emp*)malloc(sizeof(struct emp));
    nextnode->data = 20;
    nextnode->next = NULL;
	free(root->next);
    return root;
}

int main(int argc, char *argv[])
{
    int i = 0;
    EMP *ptr = ftest2();
    printf("\n Test hello");
	free(ptr);
    return 0;
}

