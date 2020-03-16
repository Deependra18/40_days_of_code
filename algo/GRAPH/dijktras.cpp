
/* Deependra Kumar */
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
#define mod 1000000007
#define inf 1000000000000000000
typedef pair<lld,lld> pl;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<pl> adj[10001];

lld dijiktra(lld s,lld d,lld n)
{
   vector<lld>dist(n+1,inf);
   priority_queue<pl,vector<pl>,greater<pl>>pq;
   pq.push({0,s});
   dist[s]=0;
   while(!pq.empty())
   {
   lld u=pq.top().second;
   pq.pop();
   for(auto it:adj[u])
   {
   	  lld v=it.first;
   	  lld w=it.second;
   	  if(dist[v]>dist[u]+w)
   	  {
   	  	dist[v]=dist[u]+w;
   	  	pq.push({dist[v],v});
   	  }
   }
}
   return dist[d];



}

int main() 
{ 
	  fastio;
    lld n,m;
    cin>>n>>m;
    lld u,v,w;
    for(lld i=0;i<m;i++)
    {
     cin>>u>>v>>w;
     adj[u].push_back({v,w});
    }
    lld x,y;
    cin>>x>>y;
    lld dp=dijiktra(x,y,n);
    if(dp==inf)
    	cout<<"NO";
    else
    	cout<<dp;



 	return 0;
}
