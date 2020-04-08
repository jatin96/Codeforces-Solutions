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
char mat[100][100];
void color_it(int st, int en, char ch, int qty) {

	for(int i = st; i < en; i++) {
		for(int j = 0; j < 50; j++) {
			if(qty == 0)
				return;
			if((i&1) && (j&1))
				{
					mat[i][j] = ch;
					qty--;
				}
		}
	}
}
int main() {
	int a, b, c, d;
	
	si3(a,b,c);si(d);
	for(int i = 0; i < 48; i++) {
		for(int j = 0; j < 50; j++) {
			if(i >= 0 && i <= 11)
				mat[i][j] = 'A';
			else if(i >= 12 && i <= 23)
				mat[i][j] = 'B';
			else if( i >= 24 && i <= 35)
				mat[i][j] = 'C';
			else
				mat[i][j] = 'D';
		}
	}
	a--;b--;c--;d--;
	color_it(0,11,'C',c);
	color_it(12,23,'A',a);
	color_it(24,35,'D',d);
	color_it(36,47,'B',b);
	cout << "48 50\n";
	for(int i = 0; i < 48; i++) {
		for(int j = 0; j < 50; j++)
			cout << mat[i][j];
		nl();
	}
	return 0;
}