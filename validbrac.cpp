Problem:
To check whether a string is valid parenthesis is or not.
eg:
{{()}}-Valid
{(})-invalid

solution:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
 string a;
      cin>>a;
      stack<char> st;
  
      int c=0;
       for(int i=0;i<a.length();i++)
      {
        if(a[i]=='(' || a[i]=='[' || a[i]=='{')
        {

          st.push(a[i]);
        }
        else{
          if(!st.empty())
          {
            if(st.top()=='(')
            {
              if(a[i]==')')
              {
                
                st.pop();

              }
              else{
                 c=1;
                 break;
              }
            }
           else  if(st.top()=='{')
            {
              if(a[i]=='}')
              {
                st.pop();
              }
              else{
                 c=1;
                 break;
              }
            }
           else  if(st.top()=='[')
            {
              if(a[i]==']')
              {
                st.pop();
              }
              else{
                 c=1;
                 break;
              }
            }
          }
        }
      }
      if(c==0 && st.empty())
      {
        cout<<"valid"<<endl;
      }
      else{
         cout<<"invalid"<<endl;
      }
    }
  
