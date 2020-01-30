/* Deependra Kumar */
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>adj[100000];
vector<int>adjr[100000];
vector<int>visited(100000,0);
stack<int>st;
void dfs1(int s)
{
   visited[s]=1;
  for(auto u:adj[s])
  {
     if(!visited[u])
     	dfs1(u);
  }
  st.push(s);
}

void dfs2(int s)
{
	visited[s]=1;
	for(auto u:adjr[s])
  {
     if(!visited[u])
     	dfs2(u);
  }
}


int main() 
{ 
	  fastio;
	 int n,m;
	 cin>>n>>m;
	 int u,v;
	 for(int i=0;i<m;i++)
	 {
	 	cin>>u>>v;
	 	adj[u].push_back(v);
	 	adjr[v].push_back(u);
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	if(!visited[i])
	 		dfs1(i);
	 }
   visited.assign(100000,0);
   lld scc=0;
    while(!st.empty())
    {

    	int s=st.top();
    	st.pop();
    	if(!visited[s])
    	{
    		dfs2(s);
    		scc++;
    	}
    }
    cout<<scc<<"\n";







	

 	return 0;
}
