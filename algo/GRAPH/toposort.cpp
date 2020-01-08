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
vector<int> adj[1000000];
int visited[1000000]={0};
stack<int>st;
int prev[1000000]={0},postv[1000000]={0};
int timer=0;
void dfs(int s)
{    
    visited[s]=1;
    //prev[s]=++timer;
    for(auto p:adj[s])
    {
    	if(!visited[p])
    		dfs(p);
    }
    postv[s]=++timer;
    st.push(s);
}

int main() 
{ 
	 deepu();
	 int n,m;
	 cin>>n>>m;
	 int u[m+1],v[m+1];
	 for(int i=1;i<=m;i++)
	 {
	 	cin>>u[i]>>v[i];
	 	adj[u[i]].push_back(v[i]);
	 }
	 for(int i=n;i>=1;i--)
	 {
       if(!visited[i])
       	dfs(i);
	 }
	 int f=0;
for(int i=1;i<=m;i++)
{
	if(postv[u[i]]>postv[v[i]])
		f=0;
	else
		{f=1;
	    break;}

}
if(f)
cout<<"DAG"<<"\n";
else
{
while(!st.empty())
{
	cout<<st.top()<<" ";
	st.pop();
}
}

	

 	return 0;
}