problem:
find all the  minimum element in subarray of length k of an array of length n
eg:
n=9,k=3;
1 2 3 4 5 6 7 8 9
a
output:
1 2 3 4 5 6 7 8 9
 

soln:
#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1];
        deque<int>dq;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i;
        for(int i=0;i<m;i++)
        {
             while(!dq.empty()  && a[dq.back()]>a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        for(;i<n;i++)
        {
            v.push_back(a[dq.front()]);
              while(!dq.empty() && dq.front()<=i-m)
            {
                dq.pop_front();
            }

            while(!dq.empty()  && a[dq.back()]>a[i])
            {
                dq.pop_back();
            }
          
            dq.push_back(i);
            
        
        }
          v.push_back(a[dq.front()]);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
    }
}

