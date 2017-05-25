#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    string intToRoman(int num) 
    {
      string lut[4][10] =
      { {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM"}
      };
      
      string result = "";

      int remainder = 0;
      int quotient  = 0; 
      int divisor   = 0; 
      
      for(int idx=3; idx > 0; idx--)
      {
        divisor = pow(10, idx);
        remainder = num % divisor; 
        quotient  = num / divisor;
        num %= divisor;
        //cout << "remainder: " << remainder << ", quotient: " << quotient  << "=> " << lut[idx][quotient] << endl;

        cout << "=> " << lut[idx][quotient] << endl;
        if(quotient > 0)
          result += lut[idx][quotient];          
      }  
      // Handle the digit in ones
      result += lut[0][remainder];
      return result;
    }
};    


int main()
{
  int x = 3496;
  Solution s;
  cout<<"intToRoman(" << x << ") : " << s.intToRoman(x) << endl;
  //cout<<"10^3" << x << ") : " <<  << endl;
  
}




 