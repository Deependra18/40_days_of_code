/*
https://codeforces.com/contest/1251/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  string n;
	  cin>>n;
	  vector<int>v;
	  int m=n.size(),p=0;
	  while(m>p)
	  {
	      v.push_back((n[p]-'0'));
	       p++;
	  }
	 // reverse(v.begin(),v.end());
	 vector<int>v1,v2;
	  for(int i=0;i<v.size();i++)
	  {
	      if(v[i]%2==0)
	      v1.push_back(v[i]);
	      else
	      v2.push_back(v[i]);
	  }
	  int arr[v1.size()+v2.size()],k,j,n1,n2,i;
	   i = 0;  
    j = 0; 
    k = 0; // Initial index of merged subarray 
    n1=v1.size();
    n2=v2.size();
    while (i < n1 && j < n2) 
    { 
        if (v1[i] <=v2[j]) 
        { 
            arr[k] =v1[i]; 
            i++; 
        } 
        else
        { 
            arr[k] =v2[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) 
    { 
        arr[k] =v1[i]; 
        i++; 
        k++; 
    } 
  
    while (j <n2) 
    { 
        arr[k]=v2[j]; 
        j++; 
        k++; 
    }
    for(int i=0;i<k;i++)
    cout<<arr[i];
    cout<<"\n";
	}
	return 0;
}