#include<bits/stdc++.h>
using namespace std;
#define lld long long int
#define mod 1000000007
void deepu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt","w",stderr);
	#endif
}

void multiply(lld a[5][5],lld b[5][5])
{
	lld sum[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
          sum[i][j]=0;
          for(int k=0;k<5;k++)
          {
          	sum[i][j]=(sum[i][j]%mod+(a[i][k]*b[k][j])%mod)%mod;
          }
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=sum[i][j]%mod;
		}
	}
}

lld power(lld F[5][5],lld n,lld e)
{
    lld result[5][5]={{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
    while(n>0)
    {
    	if(n&1)
    	  multiply(result,F);
    	  multiply(F,F);
    	 n=n>>1;
    }

    return ((3*result[0][0])%mod+(2*result[0][1])%mod+(result[0][2])%mod+(e*result[0][4])%mod)%mod;
}

lld nthterm(lld n,lld a,lld b,lld c,lld d,lld e)
{
	lld F[5][5]={{a,b,c,d,1},{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,0,1}};
	if(n<=4)
		return n-1;
	return (power(F,n-4,e))%mod;
}

int main() 
{ 
	deepu();
	int t;
	cin>>t;
	while(t--)
	{
		lld a,b,c,d,e,n;
		cin>>a>>b>>c>>d>>e>>n;
		cout<<((nthterm(n,a%mod,b%mod,c%mod,d%mod,e%mod))%mod)<<"\n";
	}

 	return 0;
}

