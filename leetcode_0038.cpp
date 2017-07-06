#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {      
      int tag = 0;
      int count = 0;
      int strlen = 0; // To record the real length of str
      string str = "1";      
      string result(str);
      if( 1==n)
      {
        return "1";
      }
      
      for( int idx = 1; idx < n; ++idx)
      {
        count = 1;
        str = result;
        strlen = str.length();
        str += "x"; // Add dummy char to 
        tag = str[0];
        
        result = "";
        //cout << "[" << idx << "] str: " << str << ", result: " << result << endl;
        for( int i = 0; i < strlen; i++)
        {
          //cout << "   string handling! ["<< i+1 << "/" << strlen << "] "<< endl;
          if (tag == str[i+1])
          {
            count++;
          }
          else
          {
            //cout << "   tag changed, count: " << count << endl;
            result += count+48; // Convert int to char by adding the different between 0 and '0'
            result += str[i];
            tag = str[i+1];
            count = 1; 
          }
          
        }
        //cout << "n: " << idx+1 << ", result: " << result << endl;
      }      
      return result;
        
    }
};



int main()
{
  Solution s;
  int a = 10;

  
  cout << "countAndSay( " << a <<" ): " << s.countAndSay(a) << endl;
  

}



 