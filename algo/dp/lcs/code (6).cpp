
/*
problem link-
https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem

*/
#include <iostream>
#include<math.h>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

void lcs(int s1[],int s2[],int n,int m)
{
 vector<vector<int>> dp(n+1,vector<int>(m+1,0));
 
 for( int i=1;i<=n;i++)
    {
        for( int j=1;j<=m;j++)
        {
           
           if(s1[i-1]==s2[j-1])
           dp[i][j]=1+dp[i-1][j-1];
           else
           dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    int  s[100000];
    int i,j,l=0;
    i=n,j=m;
    while(j>0&&i>0)
    {
        if(dp[i][j]==dp[i-1][j])
        {
            i--;
            continue;
        } 
        else if(dp[i][j]==dp[i][j-1])
        {
            j--;
            continue;
        }
        
         if(dp[i][j]!=dp[i-1][j-1])
        {
           s[l++]=s1[i-1];
            i--,j--;
        }
    }
    for( int i=l-1;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
 
}

int main() {
    int n,m;
    cin>>n>>m;
    int s1[n],s2[m];
     for( int i=0;i<n;i++)
     {
         cin>>s1[i];
     }
     for( int i=0;i<m;i++)
     {
         cin>>s2[i];
     }
     
      lcs(s1,s2,n,m);
    return 0;
}
