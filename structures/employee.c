#include <stdio.h>   
#include<string.h>
#include<stdlib.h>


struct Subject  
{  
    char sub_Name[30];
    int sub_Marks;
};  

int main()  
{  
    struct Subject sub;   // declare the Subject variable  
    struct Subject *ptr;  // create a pointer variable (*ptr)   
    ptr =(struct Subject *) malloc(sizeof(struct Subject));           // ptr variable pointing to the address of the structure variable sub
      
     printf("Enter subject name and marks\n");
	 scanf("%s%d", ptr->sub_Name, &ptr->sub_Marks);
    //strcpy (sub.sub_Name, "C Programming");  
    //sub.sub_Marks =  350; //out of 500 
     printf("Enter subject name and marks\n");
	 scanf("%s%d", sub.sub_Name, &sub.sub_Marks);
  
    // print the details of the Subject (Structure pointer) 
    printf (" Subject Name: %s\n ", ptr->sub_Name);  
    printf (" Subject Marks: %d\n\n ", ptr->sub_Marks);
    
    // print the details of the Subject (Structure) 
    printf (" Subject Name: %s\n ", sub.sub_Name);  
    printf (" Subject Marks: %d\n ", sub.sub_Marks); 
    
    return 0;  
    
}
