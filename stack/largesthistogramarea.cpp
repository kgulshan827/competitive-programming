Questions:
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.
For example, consider the following histogram with 7 bars of heights {6, 2, 5, 4, 5, 1, 6}. The largest possible rectangle possible is 12.

solutions:
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
  vector<int>right(n,n),left(n,-1);
  stack<int>st;
    stack<int>st1;
  for(int i=0;i<n;i++)
  {
   

    while(!st.empty() && a[i]<a[st.top()])
    {
       right[st.top()]=i;
      st.pop();
    }
    st.push(i);

  }

  for(int i=n-1;i>=0;i--)
  {
  
    while(!st1.empty() && a[i]<a[st1.top()])
    {
       left[st1.top()]=i;
      st1.pop();
    }
    st1.push(i);

  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    
   ans=max(ans,a[i]*(right[i]-left[i]-1));
  }
 cout<<ans<<endl;
}



