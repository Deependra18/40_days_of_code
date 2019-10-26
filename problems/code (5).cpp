/*

https://codeforces.com/contest/1249/problem/A


*/

#include <bits/stdc++.h>
using namespace std;
#define lld long long int
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        lld n;
        cin>>n;
        lld a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        lld c=0;
       for(int i=0;i<n-1;i++)
       {
         if(abs(a[i]-a[i+1])==1)
         c++,i++;
       }
        if(c>0)
        cout<<2<<"\n";
        else
        cout<<1<<"\n";
 
    }
	return 0;
}