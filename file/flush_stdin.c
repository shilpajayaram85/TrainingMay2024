#include <stdio.h>

void dump_line( 
		FILE *fp_arg  
	      )
{
  int dummy; 
  dummy = fgetc(fp_arg); 

  while(1) 
  {
    if(EOF == dummy)  
   {
   return;
  }
  
  printf("%c", dummy);
   if(dummy == '\n')
   {
    break;
   }
   dummy = fgetc(fp_arg);
  } 
  printf("\n");
  return;
}

int main()
{

 FILE *file_ptr = NULL;
 char ch = '\0';
 int num = 0; 
 
 printf("Enter an integer\n");
 scanf("%d", &num);

 printf("Enter a character\n");

 //dump_line(stdin); 
 scanf(" %c", &ch);
 printf("Number Entered is: %d , Character Entered is %c\n", num ,ch );


 file_ptr = fopen("input", "r");
 if(NULL == file_ptr) 
 {
  printf("'input' can not be open\n");
  return 0;
 }
 
 dump_line(file_ptr);
 fclose(file_ptr); 

 
 file_ptr = fopen("test", "r");
 if(NULL == file_ptr) 
 {
  printf("'test' can not be open\n");
  return 0;
 }
 
 dump_line(file_ptr);
 fclose(file_ptr); 
 
 return 0;
}

