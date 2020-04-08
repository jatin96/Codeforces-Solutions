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
const ll M = 1000000007;
ll fibo[100007];
void create_fibonacci(ll n) {
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 2;
	for(ll i = 3; i <= n + 3; i++) {
		fibo[i] = (fibo[i - 2] + fibo[i - 1]) % M;
	}
}
int main() {
	string str;
	cin >> str;
	ll n = str.length();
	for(int i = 0; i < n; i++) {
		if(str[i] == 'm' || str[i] == 'w') {
			cout << "0\n";
			return 0;
		}
	}
	create_fibonacci(n);

	ll i = 0;
	ll res = 1;
	while(i < n) {
		ll cnt = 0;
		while(i < n && str[i] == 'u') {
			cnt++;
			i++;

		}
		 //finderror3(i,cnt,fibo[cnt]);
		if(i - 1 >= 0 && str[i - 1] == 'u')
		res = (res * fibo[cnt]) % M;
		cnt = 0;
		while(i < n && str[i] == 'n') {
			cnt++;
			i++;
		}
		 //finderror3(i,cnt,fibo[cnt]);
		if(i - 1 >= 0 && str[i - 1] == 'n')
		res = (res * fibo[cnt]) % M;
		if(str[i] != 'u' && str[i] != 'n')
		i++;
	}
	cout << res << "\n";
	return 0;
}