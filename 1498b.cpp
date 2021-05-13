/*Swati1411*/
#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007

using namespace std;

int check(int m,int a[],int n)
{

}

void solve()
{
	int n,w;
	cin>>n>>w;int a;
	multiset <int> s;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.insert(a);
	}
	int ans=0;
	while(!s.empty())
	{
		int r=w;
		while(1)
		{
			auto it=s.upper_bound(r);
			if(it==s.begin())break;
			it--;
			r-=*it;
			s.erase(it);
		}
		ans++;
	}
	
cout<<ans<<"\n";
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
while(t--)
{
solve();
}
}