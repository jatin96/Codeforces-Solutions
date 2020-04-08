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
int main() {
	int n,m;
	cin >> n >> m;
	int A[507][507], B[507][507], mark[507][507]={};
	vector < int > vec1[2*507], vec2[2*507];

	for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++)
			cin >> A[i][j];

	for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++)
			cin >> B[i][j];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			vec1[i+j].pb(A[i][j]);
			vec2[i+j].pb(B[i][j]);

		}
	}

	for(int i = 0; i < n + m - 1; i++) {
		sort(vec1[i].begin(),vec1[i].end());
		sort(vec2[i].begin(),vec2[i].end());
		if(vec1[i] != vec2[i])
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}