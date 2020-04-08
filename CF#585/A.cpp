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
const int N=26;
typedef long long int ll;

int main() {
	ll a1, a2, k1, k2, max_a, min_a, max_k, min_k, n;
	cin >> a1 >> a2;
	cin >> k1 >> k2;
	cin >> n;

	ll mini = (k1 - 1) * a1 + (k2 - 1) * a2;
	mini = mini >= n ? 0 : n - mini;

	if(k1 < k2) {
		min_a = a1;
		min_k = k1;
		max_a = a2;
		max_k = k2;
	} 
	else {
		min_a = a2;
		min_k = k2;
		max_a = a1;
		max_k = k1;
	}
	ll maxi = 0;
	for(int i = 1; i <= min_a; i++) {
		if(n >= min_k) {
			n = n - min_k;
			maxi++;
		}
	}
	for(int i = 1; i <= max_a; i++) {
		if(n >= max_k) {
			n = n - max_k;
			maxi++;
		}
	}
	cout << mini << " " << maxi <<"\n";
	return 0;
}