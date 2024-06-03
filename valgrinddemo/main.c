#include<head.h>

int main(void)
{
    node * head; /* Head node for the list */

    head =NULL;



    head=insert_first(head,2);

    head=insert_last(head,12);
    head=insert_last(head,13);
    head=insert_last(head,23);
    head=insert_last(head,43);
    head=insert_last(head,44);
    head=insert_last(head,50);

    head=insert_first(head,2);
    head=insert_first(head,1);

    display(head);
	//free_list(head);
    return 0;


}
