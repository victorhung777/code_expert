#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        
       int size_a = a.size();
       int size_b = b.size();
       
       int carry = 0;
      
       // reverse string
       reverse(a.begin(),a.end());        
       reverse(b.begin(),b.end());        

       cout << "reverse(a): " << a << endl; 
       cout << "reverse(b): " << b << endl; 
      
      
      string *longStr = NULL;
      string *shortStr = NULL;
      
      string result = "";
      if(size_a >= size_b)
      {
        longStr = &a;
        shortStr = &b;
      }
      else
      {
        longStr = &b;   
        shortStr = &a;
      }
      string dummyStr(longStr->size()-shortStr->size(), '0');

        
      cout << "longStr->size(): " << longStr->size() << endl;
      cout << "shortStr->size(): " << shortStr->size() << endl;
      cout << "longStr[1]: "<< longStr[1] << endl;
      cout << "reverse(shortStr): " << *shortStr << endl;
      *shortStr += dummyStr;      
      cout << "reverse(shortStr)+dummyStr: " << *shortStr << endl;
            
      for( int i=0 ; i<longStr->size() ; i++)
      { 
          cout << "longStr[i]: "<< longStr->at(i) << " != " << "shortStr[i]: " <<  longStr->at(i) << ", carry = " << carry << endl;   
          cout << "=========== " << i << " ===============" << endl;
          if(longStr->at(i) == shortStr->at(i))
          {
              if(carry == 1)
                result += '1';
              else
                result += '0';
            
              if(longStr->at(i) == '0')
                  carry = 0;
                
              else if (longStr->at(i) == '1')
                  carry = 1;
          }        
          else if(longStr->at(i) != shortStr->at(i))
          {
            
              if(carry == 1)
              {                  
                  carry = 1;
                  result += '0';
              }
              else
              {
                  carry = 0;
                  result += '1';
              }
          }
      }

      if (carry == 1)
        result += '1';
      
      // reverse back!
      reverse(result.begin(),result.end());        
      return result;              
   }

};

int main()
{
  Solution s;
  string a = "110";
  string b = "11";
  
  cout << "addBinary( "<< a <<"," << b <<") : " << s.addBinary(a, b) << endl;
   
  b[0] = '1';
  cout << b << endl;
  cout << "b[1]: " << b[1] << endl;

}



 