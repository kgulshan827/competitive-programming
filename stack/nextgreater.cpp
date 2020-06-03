problem:
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

eg:
For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.
 4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1


soln:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  stack<int>st;
  for(int i=0;i<n;i++)
  {
    if(st.empty()){
    st.push(a[i]);
    continue;
  }

    while(!st.empty() && st.top()<a[i])
    {
      cout<<st.top()<<" "<<a[i]<<endl;
      st.pop();
    }
    st.push(a[i]);

  }
  while(!st.empty())
  {
    cout<<st.top()<<" "<<-1<<endl;
    st.pop();  
}
}
