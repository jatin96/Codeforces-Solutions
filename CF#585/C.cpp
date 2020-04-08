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
using namespace std;
int n;
string str1, str2;
int cnta = 0, cntb = 0;
vector<int> vec;
vector< pair<int,int> > res;
int solve_it() { 
	int siz = vec.size();
	int cnt = 0;
	for(int i = 0; i < vec.size(); i++){
			if(vec[i] == -1)
				continue;
			for(int j = i+1; j < vec.size(); j++){
				if(vec[j] == -1)
					continue;
				if(str1[vec[i]] == str1[vec[j]]) {
	 
					cnt++;
					siz -= 2;
					res.pb(mp(vec[i],vec[j]));
					vec[i] = -1;
					vec[j] = -1;
					break;
				}
			}
	}
	if(siz != 0) {
		for(int i = 0; i<vec.size(); i++){
			if(vec[i] == -1)
				continue;
			for(int j = i+1; j<vec.size(); j++){
				if(vec[j] == -1)
					continue;
				if(str1[vec[i]] != str1[vec[j]]){
					cnt += 2;
					siz -= 2;
					res.pb(mp(vec[i],vec[i]));
					res.pb(mp(vec[i],vec[j]));
					vec[i] = -1; 
					vec[j] = -1;
					break;
				}
			}
		}
	}
	return cnt;
}

int main() {
	

	cin >> n;
	cin >> str1 >> str2;
	for(int i = 0; i < n; i++) {
		if(str1[i] == 'a') cnta++;
		else cntb++;
		if(str2[i] == 'a') cnta++;
		else cntb++;

		if(str1[i] != str2[i]) vec.pb(i);
	}
	if((cnta&1) || (cntb&1)) {
		cout << "-1\n";
		return 0;
	}
	
	cout << solve_it() << endl;
	for(int i = 0; i<res.size(); i++){
		cout << res[i].fi + 1 << " " << res[i].se + 1 << "\n";
	}
 
	return 0;
}