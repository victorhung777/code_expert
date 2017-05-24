#include <iostream>
#include <limits>
using namespace std;

/*
  Refer to leetcode_0007
  Direct method
*/
class Solution {
public:
    bool isPalindrome(int x) {     
      int imin = std::numeric_limits<int>::min(); // minimum value
      int imax = std::numeric_limits<int>::max();      
      
      int digit = 0;
      long long int org = x;
      long long int result = 0;

      if(x<0)
        return false;
        
      do
      {
        digit = x%10;
        x/=10;
        result *= 10;
        result += digit;
        //cout<<"digit: %d, result:%lld, x: %d\n", digit, result, x
      }while(x!=0);  

      cout<< "min = " << imin << endl;

      if( org == result)
        return true;
      else
        return false;
  }        
};

/*
  Refer to leetcode_0007
  Actually no need to get full-reversed int...
*/



int main()
{
  int x = -2147447412;
  Solution s;
  cout<<"isPalindrome(" << x << ") : " << s.isPalindrome(x) << endl;
  
}




 