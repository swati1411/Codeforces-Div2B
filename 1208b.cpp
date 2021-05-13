/*Swati1411*/
#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007

using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	map <int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	int cnt=0;int ans=n-1;
	for(auto x:mp)
	{
		if(x.second>1)
			cnt++;
	}
	for(int i=0;i<n;i++)
	{
		map <int,int> mp1;
		int cnt1=0;
		for(int j=i;j<n;j++)
		{
        mp1[a[j]]++;
        int f=mp[a[j]];
        if(f>1)
        {
        	if(f-mp1[a[j]]==1)
        		cnt1++;
        }
        if(cnt1==cnt)
        	ans=min(ans,j-i+1);
		}
	}
	if(cnt==0)
		ans=0;
	cout<<ans<<endl;
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
//cin>>t;
while(t--)
{
solve();
}
}