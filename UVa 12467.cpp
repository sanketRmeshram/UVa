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

vector<int> prefix_fun(string &s)
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
	boost;
	ll t;
	cin>>t;
	while(t--)
	{
		string s,a;
		cin>>s;
		int n=s.size();
		a=s;
		reverse(all(a));
		s+='#';
		s+=a;
		std::vector<int > v=prefix_fun(s);
		int ans=0;
		for(int i=n+1;i<(int ) s.size();i++) ans=max(ans,v[i]);
		string temp=s.substr(0,ans);
		reverse(all(temp));
		cout<<temp<<endl;	

	}
  	return 0;
}  
