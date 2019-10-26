/*

https://codeforces.com/contest/1173/problem/A


*/

#include <iostream>
using namespace std;
 
int main() {
	//cout<<"GfG!";
	int x,y,z,a,b,c,d;
	cin>>x>>y>>z;
     a=x+z;
     b=y;
     c=x;
     d=y+z;
     if(a>b&&c>d)
     cout<<"+";
     else if(b>a&&d>c)
     cout<<"-";
     else if(a==b&&c==d)
     cout<<"0";
     else
     cout<<"?";
     
	return 0;
}
}