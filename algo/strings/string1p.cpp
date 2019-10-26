/*

https://codeforces.com/contest/1146/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 
string s,s1="";
cin>>s;
int m=-1;
int n=s.size();
for(int i=0;i<n;i++)
{
    if(s[i]=='a')
     m=i;
     if(s[i]!='a')
     s1=s1+s[i];
}
 
int l=n-(m+1);
int size=s1.size();
//cout<<size<<"\n";
if(size%2==0&&(size/2)<=l)
{
    int k=1;
for(int i=0;i<size/2;i++)
  {
      if(s1[i]!=s1[size/2+i])
       { 
        k=0;
       break;
       }
  }
  if(k)
  {
      for(int i=0;i<n-size/2;i++)
      cout<<s[i];
  }
  else
  cout<<":(";
  
}
else
{
    cout<<":(";
}
 
 
 
return 0;
}