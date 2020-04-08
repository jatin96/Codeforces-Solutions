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
const ll INF = 1000000000000000;
ll n, m, k, s, town[100007];
vector < ll > g[100007],good[100007];
int main() {

	sl2(n, m);
	sl2(k, s);
	for(int i = 1; i <= n; i++) {
		ll tmp;
		sl(tmp);
		town[i] = tmp;
		good[tmp].pb(i);
	}

	for(int i = 0; i < m; i++) {
		ll u, v;
		sl2(u, v);
		g[u].pb(v);
		g[v].pb(u);
	}

	vector < ll > res[100007];
	for(int i = 1; i <= k; i++) {

		ll dist[100007];
		for(int j = 1; j <= n; j++)
			dist[j] = INF;

		queue < ll > Q;
		for(int j = 0; j < good[i].size(); j++) {
				Q.push(good[i][j]);
				dist[good[i][j]]=0;
				//finderror1(good[i][j]);
		}
		while(!Q.empty()) {
			ll city = Q.front();
			//finderror1(city);
			Q.pop();
			for(int j = 0;j < g[city].size(); j++) {
				if(dist[city]+1 < dist[g[city][j]]) {
					dist[g[city][j]] = dist[city] + 1;
					Q.push(g[city][j]);
				}
			}
		}
		for(int j = 1; j <= n; j++) {
			res[j].pb(dist[j]);
			//finderror1(dist[j]);
		}
	}

	for(int i = 1; i <= n; i++) {
		sort(res[i].begin(),res[i].end());

		ll cumm = 0;
		for(int j = 0; j < s; j++)
			cumm += res[i][j];

		cout<<cumm<<" ";
	}
	return 0;
}