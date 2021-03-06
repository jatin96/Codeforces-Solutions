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
int b[300007];
int p[300007];
int dp1[300007];
int dp2[300007];
int solve_it(int n) { 

		ms(dp1, 0);
		ms(dp2, 0);
		for(int i = 0;i < n; i++) {
			if(i==0) {
				dp1[i] = 0;
				dp2[i] = b[i];
			}
			else {
				if(dp2[i - 1] != b[i]) {
					dp2[i] = b[i];
					dp1[i] = dp1[i - 1];
				}
				else {
					dp1[i] = dp1[i - 1] + min(p[i], p[i-1]);
					if(p[i] > p[i - 1])
						dp2[i] = b[i];
					else
						dp2[i] = b[i] + 1;
				}
			}
		}
		return dp1[n-1];
}
int main() {
	int test;
	cin>>test;
	for(;test--;) {
		int n;
		ms(b,0);
		ms(p,0);
		cin >> n;
		//cout << n << "**\n";
		
		for(int i = 0; i < n; i++) {
			cin >> b[i] >> p[i];
		}
		cout << solve_it(n) <<"\n"; 
	}
	return 0;
}