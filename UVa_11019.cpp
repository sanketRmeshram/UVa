#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define check(x) cout << #x << " : " << (x) << endl
#define all(v) v.begin(),v.end() 
#define allr(v) v.rbegin(),v.rend() 
#define endl '\n'  
typedef  long long ll; 
typedef  unsigned long long ull;
typedef pair< ll , ll > mypair;
typedef priority_queue <ll> max_heap;
typedef priority_queue <ll, vector<ll>, greater<ll> > min_heap;
const ll mod=1e9+7;
const ll inf=1e15+10;
const ll N=3e5+10;

vector<int> prefix_fun(vector<string> &s)
{
 	
	vector<int> pi((int)s.size());
	pi[0]=0;
	for(int i=1;i<(int)s.size();i++)
	{
 
		int j=pi[i-1];
		while(j>0 and s[j]!=s[i] ) j=pi[j-1];
		if(s[i]==s[j]) j++;
		pi[i]=j;
	}
	return pi;
}

int main()
{
	//boost;
	ll t;
	cin>>t;
	//check(t);
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		//check(n);check(m);
		vector<string > st(n);
		for(int i=0;i<n;i++) cin>>st[i];
		ll x,y;
		cin>>x>>y;	
		vector<string> pat(x+1+n);
		//check(x);
		for(int i=0;i<x;i++) cin>>pat[i];
		pat[x]="";
		while(y--) pat[x]+='#';
		y=pat[0].size();	
		int ans=0;
		for(int i=0;(i+y-1)<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				pat[j+x+1]=st[j].substr(i,y);
			}
			std::vector<int > v=prefix_fun(pat);
			for(int j=x+1;j<(ll)v.size();j++) if(v[j]==x) ans++;
		}	
		cout<<ans<<endl;
	}
  	return 0;
}  
