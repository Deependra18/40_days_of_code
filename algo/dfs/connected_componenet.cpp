#include<bits/stdc++.h>
using namespace std;
#define lld long long int
void deepu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt","w",stderr);
	#endif
}
lld n;
lld level[1000000];
lld visit[1000000]={0};
//lld count[1000000]={0};
vector<lld> adj[1000000];
void bfs(lld s)
{
	queue<lld>q;
	q.push(s);
	level[s]=1;
	visit[s]=1;
	//count[level[s]]++;
    while(!q.empty())
    {
    	lld p=q.front();
    	q.pop();
    	for(int i=0;i<(int)adj[p].size();i++)
    	{
    		if(!visit[adj[p][i]])
    		{
    			level[adj[p][i]]=level[p]+1;
    			//count[level[p][i]]++;
    			q.push(adj[p][i]);
    			visit[adj[p][i]]=1;
    		}
    	}
    }
}

int main() 
{ 
	 deepu();
	 cin>>n;
	 lld u,v;
	 for(int i=1;i<=n;i++)
	 {
         cin>>u>>v;
         adj[u].push_back(v);
         if(u!=v)
         adj[v].push_back(u);
	 }
	 lld c=0;
    for(int i=1;i<=n;i++)
    {
    	if(!visit[i])
    	{
    		c++;
    		bfs(i);
    	}
    }
	 
	 cout<<c<<"\n";
	

 	return 0;
}

