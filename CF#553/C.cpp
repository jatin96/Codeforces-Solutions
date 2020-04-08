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
	int n, m, ele[507][507];
	vector < int > vec;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		
		for(int j = 0; j < m; j++) 
			cin >> ele[i][j];
		int flag = 0;
		for(int j = 0; j < m; j++) {
			if(ele[i][0] != ele[i][j]) {
				vec.pb(j);
				flag = 1;
			}
		}
		if(flag == 0)
			vec.pb(0);
	}
	int res = 0;
	for(int i = 0; i < n; i++)
		res = res  ^ ele[i][0];

	if(res != 0) {
		cout << "TAK" << "\n";
		for(int i = 0; i < n; i++)	
			cout << "1 ";
	}
	else {
		int flag = -1; 
		for( int i = 0; i < n; i++){
			if( ele[i][0] != ele[i][vec[i]] ) {
				cout << "TAK\n";
				for(int j = 0; j < n; j++) {
					if(j != i)
						cout <<"1 ";
					else 
						cout << (vec[i] + 1) <<" ";
				}
				return 0;

			}
		}
		cout << "NIE\n";
	}
	return 0;
}