#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define check(x) cout << #x << " : " << (x) << endl
typedef  long long ll; 
typedef unsigned long long ull; 
#define endl '\n'
#define mod 1000000007
typedef vector<int> edge;
typedef pair< ll , ll > mypair;

int main()
{

	
	string s[2];
	s[0]="``";
	s[1]="\'\'";
	bool i=0;
	char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch=='\"') cout<<s[i],i=!i;
		else printf("%c",ch );
	}
	



	return 0;
}
