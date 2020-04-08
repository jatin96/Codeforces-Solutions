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
ll size[200007],cost[200007],n,dp[3001][3001][3];
ll solve_it(int curr,int prev,int cnt)
{
	if(cnt == 3)
		return 0;

	if(curr == n)
		return INT_MAX;
	
	if(dp[curr][prev][cnt]!=-1)
		return dp[curr][prev][cnt];
	ll res=INT_MAX;
	//cout<<cnt<<"&&&\n";
	if(cnt == 0)
	{
		res=min(solve_it(curr+1,curr,cnt+1)+cost[curr],solve_it(curr+1,prev,cnt));
	}
	else
	{
		ll tmp=INT_MAX;
		if(size[curr]>size[prev])
			tmp=solve_it(curr+1,curr,cnt+1)+cost[curr];
		res=min(tmp,solve_it(curr+1,prev,cnt));
	}
	dp[curr][prev][cnt]=res;
	return res;
}
int main()
{
	sl(n);
	ms(dp,-1);
	for(int i=0;i<n;i++)
		sl(size[i]);

	for(int i=0;i<n;i++)
		sl(cost[i]);

	ll res=solve_it(0,0,0);
	if(res<INT_MAX)
		pln(res);
	else
		pin(-1);
	return 0;
}