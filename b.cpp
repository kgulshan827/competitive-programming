#include <bits/stdc++.h>
using namespace std;

int merge(int* parent, int x)
{
	if (parent[x] == x)
		return x;
	return merge(parent, parent[x]);
}

int connectedcomponents(int n, vector<vector<int> >& edges)
{
	int parent[n];
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}
	for (auto x : edges) {
		parent[merge(parent, x[0])] = merge(parent, x[1]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (parent[i] == i);
	}
	for (int i = 0; i < n; i++) {
		parent[i] = merge(parent, parent[i]);
	}
	map<int, list<int> > m;
	for (int i = 0; i < n; i++) {
		m[parent[i]].push_back(i);
	}

	return ans;
}

int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int> > e;
  for(int i=0;i<m;i++)
  {
    int a,b;
    cin>>a>>b;
    vector<int>e1;
    e1.push_back(a);
    e1.push_back(b);
    e.push_back(e1);

  }
 
	int a = connectedcomponents(n+1, e);
  cout<<a<<endl;
	return 0;
}
