#include <stdio.h>
#include <stdlib.h> 
#include <CUnit.h> // for CU_ASSERT
#include <min_max.h> 
void Mytestfunction_min(void)
 {
 int arr[] = {10, 90, 7, 8};
 //invoke the test function 
int min = getMin(arr, 4); 
//check if min is as expected
 CU_ASSERT(min == 7) 
printf("\n min:%d\n", min); 
}


void Mytestfunction_max(void)
{
	int arr[]={10,90,7,8};
	int max = getMax(arr, 4);

	CU_ASSERT(max == 90)
	printf("\n max:%d", max);

}
