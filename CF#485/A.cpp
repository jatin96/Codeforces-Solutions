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
int main()
{
	string colors[6]={"purple","green","blue","orange","red","yellow"};
	string gems[6]={"Power","Time","Space","Soul","Reality","Mind"};
	bool mark[100]={false};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin>>tmp;
		if(tmp == "purple")
			mark[0]=true;
		else if(tmp == "green")
			mark[1]=true;
		else if(tmp == "blue")
			mark[2]=true;
		else if(tmp == "orange")
			mark[3]=true;
		else if(tmp == "red")
			mark[4]=true;
		else if(tmp == "yellow")
			mark[5]=true;
	}
	vector < string > res;
	for(int i=0;i<6;i++)
		if(!mark[i])
			res.pb(gems[i]);

	int siz=res.size();
	cout<<siz<<"\n";
	for(int i=0;i<siz;i++)
		cout<<res[i]<<"\n";

	return 0;
}