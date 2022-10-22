// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
vector<int> solve( int friends,long time)
{
	vector<int>ans;
long long int x=(time)/(friends-1);
 if(x%2!=0)
{
	long long int a=friends-(time%(friends-1));
ans.push_back(a);
ans.push_back(a-1);
}
else{
long long int a=(time%(friends-1));
ans.push_back(a);
ans.push_back(a+1);
}
return ans;
}
static bool compare(vector<int>& a, vector<int>& b)
    {
        if(a[1] == b[1])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }
    
    int intersectionSizeTwo(vector<int>start,vector<int>end) {
        
		vector<vector<int>>intervals;
		for(int i=0;i<end.size();i++)
		{
     vector<int>x;
	 x.push_back(start[i]);
	 x.push_back(end[i]);
	 intervals.push_back(x);
		}
        int n = intervals.size();
        
        // sort the array
        
        sort(intervals.begin(), intervals.end(), compare);
        
        vector<int> res;
        
        res.push_back(intervals[0][1] - 1);
        
        res.push_back(intervals[0][1]);
        
        for(int i = 1; i < n; i++)
        {
            int start = intervals[i][0];
            
            int end = intervals[i][1];
            
            if(start > res.back())
            {
                res.push_back(end - 1);
                
                res.push_back(end);
            }
            else if(start == res.back())
            {
                res.push_back(end);
            }
            else if(start > res[res.size() - 2])
            {
                res.push_back(end);
            }
        }
        
        return res.size();
    }
int main()
{
vector<int>ans;
ans=solve(4,8);
cout<<ans[0]<<" "<<ans[1]<<endl;
}
