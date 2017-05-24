#include <stdlib.h>
#include <stdio.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
  int i, j, remain = 0;
  int *result = (int *)malloc(2*sizeof(int));
  for(i=0; i< numsSize; i++)
  {
    printf("[%d] result[0] = %d\n", i, nums[i]);
    result[0] = i;
    remain = target - nums[i];
    
    for(j=i+1; j< numsSize; j++)
    {
      printf("[%d][%d] remain %d =?= nums[1] %d\n", i, j, remain, nums[j]);
      if( remain == nums[j])
      {
        result[1] = j;
        printf("final result = %d, %d\n", result[0], result[1]);
        return result;
      }        
    }    
  }    
}



int main()
{
  int inputdata[] = {1, 4, 2, 7, 16 ,11};  
  int target = 9;
  printf("size = %d\n", sizeof(inputdata)/sizeof(inputdata[0]));
  twoSum(&inputdata[0], sizeof(inputdata)/sizeof(inputdata[0]), target);
  
  
}
