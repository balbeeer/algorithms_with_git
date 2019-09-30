#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define present(x,e) (find(x.begin(), x.end(),e)!=x.end())
#define spresent(x,e) (x.find(e)!=x.end())
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
 
	ll n,c,t,p,cnt,i;
	cin>>t;
	while (t--)
	{
	cin>>n>>c;
	ll a[n];
	for (i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	ll hi = 1000000000;
	ll lo = 1;
	ll mid;
	int f=0;
	while (hi>lo)
	{
		mid = (hi+lo)/2;
		p=a[0];
		cnt=1;
		for (i=1;i<n && cnt<c;++i)
		{
			if (a[i]-p >= mid)
			{
				++cnt;
				p=a[i];
			}
			else
			continue; 
		}
		if (cnt==c)
			lo = mid;
		else
			hi = mid-1;
		if (f==1)
			break;
		if (hi==lo+1)
			f=1;
	}
		mid = hi;
		p=a[0];
		cnt=1;
		for (i=1;i<n && cnt<c;++i)
		{
			if (a[i]-p >= mid)
			{
				++cnt;
				p=a[i];
			}
			else
			continue; 
		}
		if (cnt==c)
			cout<<mid<<"\n";
		else
			cout<<lo<<"\n";
 
	}
 
	return 0;
} 