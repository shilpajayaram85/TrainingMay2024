#include <stdio.h>
#include <string.h>

#define MAX 20

int main()
{
 FILE *infile = NULL; 
 char str[MAX]; 
 int num = 0; 
 int ret = 0;

 memset(str, 0, MAX); 


 infile = fopen("data", "w");

 if(NULL == infile) 
 {
  printf("File can not be opened\n");
  return 0;
 }


 fprintf(infile, "%s", "ABC 123 XY");
 fprintf(infile, "\n%s", "PQR 345 LM");

*ret = fclose(infile);
 if(0 != ret)
 {
  printf("fclose failed\n");
  return 0;
 }

 /* Opens the file for reading */
 infile = fopen("data", "r");
 if(NULL == infile)
 {
  printf("File can not be opened\n");
  return 0;
 }


 fprintf(stdout,"%s\n", str);
 fscanf(infile, "%s", str);

 fscanf(infile, "%d", &num);
 fprintf(stdout,"%d\n", num);

 fscanf(infile,"%s", str);
 fprintf(stdout,"%s\n" , str);
 
 ret = fclose(infile);
 if(0 != ret)
 {
  printf("fclose failed\n");
  return 0;
 }
 return 0;
}

