/*Swati1411*/
#include<bits/stdc++.h>
#include<sstream>
#define int long long int
#define mod 1000000007

using namespace std;
const int maxv=4294967296;


void solve()
{
int n;
cin>>n;
string s;
int r;
int ans=0;
stack <int> st;
stack <int> sta;
bool b=true;
sta.push(1);
for(int i=0;i<n;i++)
{
	cin>>s;
	if(s=="for")
	{
    cin>>r;
    st.push(r);
    int t=sta.top();
    int z=min(r*t,maxv);
    sta.push(z);
    }
	if(s=="end")
	{
    st.pop();
    sta.pop();
	}
	if(s=="add")
	{
    ans+=sta.top();
    }
}
if(ans>=maxv)
b=false;
if(!b)
cout<<"OVERFLOW!!!";
else
cout<<ans;
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