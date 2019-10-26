/*

https://codeforces.com/contest/1247/problem/B1


*/

#include <iostream>
using namespace std;
 
int main() {
	//cout<<"GfG!";
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        int p=a[i];
	        int c=1;
	        while(p!=i)
	        {
	            p=a[p];
	            c++;
	        }
	        cout<<c<<" ";
	        
	    }
	    cout<<"\n";
	}
 
	
	return 0;
}