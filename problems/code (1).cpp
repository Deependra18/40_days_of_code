/*
https://codeforces.com/contest/1247/problem/B1
*/
#include <bits/stdc++.h>
using namespace std;
#define lld long long int
 
int main() {
    lld t;
    cin>>t;
    while(t--)
    {
       int n,k,d;
       cin>>n>>k>>d;
       int a[n],ans;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int m=INT_MAX;
       for(int i=0;i<=n-d;i++)
       {
         int vis[k+1]={0};
           for(int j=i;j<d+i;j++)
           {
               vis[a[j]]++;
           }
           ans=0;
           for(int q=1;q<=k;q++)
           {
               if(vis[q]!=0)
               ans++;
           }
           if(ans<m)
           m=ans;
       }
       cout<<m<<"\n";
    }
	return 0;
}