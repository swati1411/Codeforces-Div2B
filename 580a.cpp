/*Swati1411*/
#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007

using namespace std;

void solve()
{
int n;
cin>>n;

int a[n],dp[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
dp[i]=1;

int maxi=0;
for(int i=1;i<n;i++)
{
	if(a[i]>=a[i-1])
	dp[i]+=dp[i-1];
}
for(int i=0;i<n;i++)
{
	maxi=max(maxi,dp[i]);
}
cout<<maxi<<"\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
//cin>>t;
while(t--)
{
solve();
}
}
