/*Swati1411*/
#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007

using namespace std;


void solve()
{
	string s;
	cin>>s;
	int l=s.length();
	string maxa="";
	string s1=s;
	int f=-1;
	for(int i=0;i<l;i++)
	{
		int c=s[i]-'0';
		if(c%2==0)
		{
			if(s[i]<=s[l-1])
			{
				swap(s[i],s[l-1]);
				cout<<s<<"\n";
				return;
			}
		}
	}
	for(int i=l-1;i>=0;i--)
	{
		int c=s[i]-'0';
		if(c%2==0)
		{
			if(s[i]>=s[l-1])
			{
				swap(s[i],s[l-1]);
				cout<<s<<"\n";
				return;
			}
		}
	}
	cout<<-1<<"\n";

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