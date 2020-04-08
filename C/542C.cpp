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
int mark[500][500] = {};
string mat[500];int n;
bool validate(int x,int y) {
	if(x>=0 && x < n)
		if(y >= 0 && y < n)
			return true;

	return false;
}
void dfs(int u, int v, int x) {

	mark[u][v] = x;
	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,1,0,-1};

	for(int i = 0; i < 4 ; i++) {

		int u1 = u + dx[i];
		int v1 = v + dy[i];
		//finderror2(u1,v1);
		if(validate(u1,v1) && mark[u1][v1] == 0 && mat[u1][v1] == '0') {
			dfs(u1,v1,x);
		}
	}
}
int main() { 
	int x1,x2,y1,y2;

	cin >> n;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	x1--;x2--;y1--;y2--;
	for( int i = 0; i < n; i++)
		cin >> mat[i];


	dfs(x1,y1,1);
	if(mark[x1][y1] == 1 && mark[x2][y2] == 1)
	{
		cout<<"0\n";
		return 0;
	}
	dfs(x2,y2,2);

	/*for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n; j++)
			cout<<mark[i][j]<<" ";
		cout<<"\n";
	}*/

	int res = INT_MAX;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			for(int k = 0; k < n; k++)
				for(int m = 0; m < n; m++)
				{
					if(mark[i][j] == 1 && mark[k][m] == 2)
					//	cout<<"hello\n";
					res = min(res,(i-k)*(i-k)+(j-m)*(j-m));
				}



	cout<< res << "\n";




}