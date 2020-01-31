/* Deependra Kumar */
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 1000000007
vector<int>adj[100005];
vector<int>dis(100005,0);
vector<int>vis(100005,0);
void bfs(int s)
{
	queue<int>q;
	dis[s]=0;
	vis[s]=1;
	q.push(s);
   int 	f=1;
	while(q.size())
	{
		int v=q.front();
		      q.pop();
		for(auto u:adj[v])
		{
		    if(vis[u]&&dis[u]==dis[v])
		        { f=0;goto x;}
			if(!vis[u])
			{
				dis[u]=dis[v]^1;
				q.push(u);
				vis[u]=1;
			}
		}
	}
	x:;
	cout<<f<<"\n";
	
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
       	 adj[v].push_back(u);
       }
       bfs(1);
 	return 0;
}
