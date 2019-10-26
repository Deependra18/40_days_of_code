/*

https://codeforces.com/contest/1251/problem/A


*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  string s;
	  cin>>s;
	  int a[26]={0};
	  int k=1;
	  int v[26]={0};
for(int i=0;i<s.size();i++)
   {
      if(i<s.size()-1&&s[i]==s[i+1]&&v[s[i]-'a']!=-1)
       {v[s[i]-'a']=1;
       i++;}
       else
       {
          v[s[i]-'a']=-1; 
       }
       
   }
   for(int i=0;i<26;i++)
   {
       if(v[i]==-1)
       cout<<char(97+i);
   }
   cout<<"\n";
	}
	return 0;
}