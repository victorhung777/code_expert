#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int reverse(int x)
{
  int digit = 0;
  long long int result = 0;
  if(x<10 && x>=0)
  {
    return x;
  }
  
  do
  {
    digit = x%10;
    x/=10;
    result *= 10;
    result += digit;
    printf("digit: %d, result:%lld, x: %d\n", digit, result, x);
  }while(x!=0);  
  
  if(result>INT32_MAX || result<INT32_MIN) 
  {
    return 0;
  }
  else
  {
    return result;
  }
}


int main()
{
  int x = 1534236469;
  printf("reverse(%d) = %d\n", x, reverse(x));    
}
