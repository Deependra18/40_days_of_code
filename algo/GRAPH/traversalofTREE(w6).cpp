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

void preorder( int i,BT a[])
{
    if(i!=-1)
    {
    cout<<a[i].data<<" ";
    preorder(a[i].lcI,a);
    preorder(a[i].rcI,a);
    }
}

void inorder( int i,BT a[])
{
    if(i!=-1)
    {
    
    inorder(a[i].lcI,a);
    cout<<a[i].data<<" ";
    inorder(a[i].rcI,a);
    }
}

void postorder( int i,BT a[])
{
    if(i!=-1)
    {
    
    postorder(a[i].lcI,a);
    postorder(a[i].rcI,a);
     cout<<a[i].data<<" ";
    }
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
   inorder(0,a);
   cout<<"\n";
   preorder(0,a);
   cout<<"\n";
   postorder(0,a);
   cout<<"\n";


     return 0;
}

