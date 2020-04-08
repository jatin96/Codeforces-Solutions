#include <bits/stdc++.h>
using namespace std;
// Jatin Narula (jatin.jt.narula)
// B.Tech CSE
// NIT - Allahabad
#define sc scanf
#define pr printf
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d%d",&x,&y)
#define si3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sl2(x,y) scanf("%lld%lld",&x,&y)
#define sl3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define ss(x) scanf("%s",x)
#define sf(x) scanf("%lf",&x)
#define pl(x) printf("%lld",x)
#define pln(x) printf("%lld\n",x)
#define pi(x) printf("%d",x)
#define pin(x) printf("%d\n",x)
#define ps(x) printf("%s",x)
#define nl() printf("\n")
#define psn(x) printf("%s\n",x)
#define pY() printf("YES\n");
#define py() printf("yes\n");
#define pN() printf("NO\n");
#define pn() printf("no\n");
#define ms(a ,value) memset(a ,value,sizeof(a))
#define iterate(itr,c) for(itr=(c).begin();itr!=(c).flag();itr++)
#define all(v) v.begin(),v.flag()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define finderror1(x) cout<<#x<<" --> "<<x<<"\n";
#define finderror2(x,y) cout<<#x<<" --> "<<x<<"\t"<<#y<<" --> "<<y<<"\n";
#define finderror3(x,y,z) cout<<#x<<" --> "<<x<<"\t"<<#y<<" --> "<<y<<"\t"<<#z<<" --> "<<z<<"\n";
const double PI=3.1415926535897;
typedef long long int ll;
const ll M = 1000000007;
ll n, k, u, v, x, res = 0;
static ll cnt = 0;
bool mark[100007]={false};
vector < ll > g[100007];
ll power(ll base, ll expo) {
	if ( expo == 0) 
		return 1;
	ll f = power(base, expo/2);
	if(expo & 1)
		return ((f * f) % M * base % M) % M;
	else 
		return (f * f) % M;
}
ll dfs(ll u) {
	mark[u] = true;
	ll cumm = 1;
	for(ll i = 0; i < g[u].size(); i++) {
		if(mark[g[u][i]] == false) {
			cumm += dfs(g[u][i]);
		}
	}
	return cumm;
}
int main() {
	cin >> n >> k;
	for (ll i = 0; i < n - 1; i++) {
		cin >> u >> v >> x;
		if(x == 0) {
			g[u].pb(v);
			g[v].pb(u);
		}
	}
	for(ll i = 1; i <= n; i++) {
		if(mark[i] == false) {
			ll cnt = dfs(i);
			//finderror2(i,cnt);
			res = (res + power(cnt,k) - cnt + M) % M;
		}
	}
	//finderror2(n,k);
	ll final_res = (power(n, k) - n - res + M) % M;
	//finderror2(power(n,k),res);
	cout << final_res <<"\n";
	return 0;
}