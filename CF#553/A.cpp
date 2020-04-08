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
int calc_cost(char ch1, char ch2, char ch3, char ch4) {
	int res1 = min(abs(ch1 - 'A'), (26 - abs(ch1 - 'A')));
	int res2 = min(abs(ch2 - 'C'), (26 - abs(ch2 - 'C')));
	int res3 = min(abs(ch3 - 'T'), (26 - abs(ch3 - 'T')));
	int res4 = min(abs(ch4 - 'G'), (26 - abs(ch4 - 'G')));
	return (res1 + res2 + res3 + res4);
}
int main() {
	string str;
	int n;
	cin >> n >> str;
	int ret = INT_MAX;
	for(int i = 3; i < n; i++) {
		char ch1 = str[i-3];
		char ch2 = str[i-2];
		char ch3 = str[i-1];
		char ch4 = str[i];
		int cost = calc_cost(ch1, ch2, ch3, ch4);
		ret = min(ret, cost);
	}
	cout << ret << endl;
	return 0;
}