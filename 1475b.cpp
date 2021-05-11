/*Swati1411*/
#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007

using namespace std;
#define N 1000006
bool dp[N];

void solve()
{
	int n;
	cin>>n;

	if(dp[n])
		cout<<"YES\n";
	else
		cout<<"NO\n";

}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output1.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
cin>>t;
	dp[2020]=1;
	dp[0]=1;
	for(int i=2021;i<N;i++)
	{
    dp[i]=(dp[i-2020] || dp[i-2021]);
	}
while(t--)
{
solve();
}
}