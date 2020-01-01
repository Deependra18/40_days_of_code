#include<bits/stdc++.h>
using namespace std;
#define lld long long int
// void deepu()
// {
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	freopen("error.txt","w",stderr);
// 	#endif
// }
lld n;
lld level[1000000];
lld visit[1000000]={0};
//lld count[1000000]={0};
vector<lld> adj[1000000];
int bfs(lld s)
{
	queue<lld>q;
	q.push(s);
	level[s]=1;
	visit[s]=1;
	//count[level[s]]++;
	lld m=INT_MIN;
    while(!q.empty())
    {
    	lld p=q.front();
    	q.pop();
    	for(int i=0;i<(int)adj[p].size();i++)
    	{
    		if(!visit[adj[p][i]])
    		{
    			level[adj[p][i]]=level[p]+1;
    			m=max(m,level[adj[p][i]]);
    			//count[level[p][i]]++;
    			q.push(adj[p][i]);
    			visit[adj[p][i]]=1;
    		}
    	}
    }
    return m;
}

int main() 
{ 
	// deepu();
	 cin>>n;
	 lld u,v;
	 int a[n],p;
	 for(int i=0;i<n;i++)
	 {
         cin>>a[i];
         if(a[i]==-1)
          p=i;
         else
         {
         adj[i].push_back(a[i]);
         adj[a[i]].push_back(i);
         }
	 }
	 cout<<bfs(p);
	

 	return 0;
}

