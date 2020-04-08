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
struct node {
	int x1,x2;
	int y1,y2;
}p[20007];

bool cmp(const struct node &a, const struct node &b) {
	return a.y1 < b.y1;
}
bool cmp1(const struct node &a, const struct node &b) {
	return a.x1 < b.x1;
}
int main() {
	int X1, X2, Y1, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	cin >> p[0].x1 >> p[0].y1 >> p[0].x2 >> p[0].y2;
	cin >> p[1].x1 >> p[1].y1 >> p[1].x2 >> p[1].y2;
	sort(p,p + 2,cmp);

	if(p[0].y1 > Y1) {
		cout << "YES\n";
		return 0;
	}
	if(p[1].y1 > p[0].y2) {
		cout << "YES\n";
		return 0;
	}
	if(((p[1].y2 < Y2 || (p[0].y2 >= Y2 && p[0].x2 < X2)) && ( p[0].y2 < Y2 || (p[1].y2 >= Y2 && p[1].x2 < X2)))) {
		cout << "YES\n";
		return 0;
	}

	sort(p,p + 2, cmp1);

	if(p[0].x1 > X1) {
		cout << "YES\n";
		return 0;
	}
	if(p[1].x1 > p[0].x2) {
		cout << "YES\n";
		return 0;
	}
	if((p[1].x2 < X2 && p[0].x2 < X2) || ((p[0].x2 >= X2 && p[0].y2 < Y2) && (p[1].x2 >= X2 && p[1].y2 < Y2))  ) {
		cout << "YES\n";
		return 0;
	}

	cout << "NO\n";
	return 0;


}