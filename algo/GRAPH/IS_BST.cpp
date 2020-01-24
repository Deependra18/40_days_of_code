#include<bits/stdc++.h>
using namespace std;
#define lld long long int
// void deepu()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     freopen("error.txt","w",stderr);
//     #endif
// }
struct BT
{
    int data;
    int lcI,rcI;
};

bool isbst( int i,BT a[],lld min,lld max)
{
    if(i==-1)
    {
        return true;
    }
    if(a[i].data>=max||a[i].data<min)
        return false;
    return isbst(a[i].lcI,a,min,a[i].data) && isbst(a[i].rcI,a,a[i].data,max);
}

int main() 
{ 
  // deepu();
     int  n;
     cin>>n;
     BT a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].data>>a[i].lcI>>a[i].rcI;
   }
   if(n==0||isbst(0,a,-LLONG_MAX,LLONG_MAX))
    cout<<"CORRECT\n";
     else
    cout<<"INCORRECT\n";
/*
3
2 1 2
1 -1 -1
2 -1 -1*/

     return 0;
}

