/*
https://codeforces.com/contest/1247/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    string s=to_string(n),s1=to_string(m);
   if(n==m)
   {
        s+='1';
    s1+='2';
    cout<<s<<" "<<s1;
   }
    else if(m==n+1)
    {
       // string s=char(n),s1=char(m);
        s+='9';
        s1+='0';
        cout<<s<<" "<<s1;
    }
    else if(n==9&&m==1)
    cout<<"99"<<" 100";
    else
    cout<<"-1";
    
    
    
	return 0;
} 