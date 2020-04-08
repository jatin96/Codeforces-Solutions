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
vector < vector <int> > vec;
bool cmp(const vector <int> &a, const vector<int> &b) {
	return a[0] < b[0];
}
#define ull unsigned long long
#define ll long long
#include<bits/stdc++.h>
using namespace std;
 
int main() {
		int n;
		cin >> n;
		long a[n][100001];
		vector < vector < long long int > > vec;
		vector <long> mini, maxi;
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			int k;
			cin >> k;
		long long int mini_el = INT_MAX, maxi_el = INT_MIN;
		vector < long long int > tmp;
		for(int j = 0; j < k; j++) {
			int x;
			cin >> x;
			if(x > maxi_el) maxi_el = x;
			if(x < mini_el) mini_el= x;
			tmp.pb(x);
		}
		vec.pb(tmp);
		long long int temp = vec[i][0];
		bool flag = false;
		for(int j = 1; j < k; j++) {
			if(vec[i][j] > temp) {
					flag = true;
					break;
				}
			else 
				temp = vec[i][j];
		}
		if(flag) {
			cnt++;
		}
		else {
			mini.push_back(mini_el);
			maxi.push_back(maxi_el);
		}
	}
	long long int ans = cnt * n;
	sort(maxi.begin(),maxi.end());
	for(int i = 0; i < mini.size(); i++) {
		int x = 0;
		for(int j = 0 ;j < maxi.size(); j++) {
			if(maxi[j] > mini[i]) {
				x = maxi.size() - j;
				break;
			}
		}
		ans += x + cnt;
	}
	cout<<ans<<"\n";
	return 0;
}
 