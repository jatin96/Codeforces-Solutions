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
int find_value(string str) {
	int len = str.length();
	int cnt = 0;
	int flag1=0,flag2=0;
	for(int i=0;i<len;i++){
		int tmp=cnt;
		if(str[i]=='(') cnt++;
		else cnt--;
		if(tmp == 0 && cnt == -1)
			{
				flag1=1;
				break;
			}
	}
	cnt=0;
	for(int i=len-1;i>=0;i--){
		int tmp=cnt;
		if(str[i]==')') cnt++;
		else cnt--;
		if(tmp == 0 && cnt == -1)
			{
				flag2=1;
				break;
			}
	}
	if(flag1 == 1 && flag2 == 1)
		return INT_MIN;
	cnt=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='(') cnt++;
		else cnt--;
	}
	return cnt;
}
int main() {
	int n;
	map <int , int > mm;
	int res=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		int val = find_value(str);
		if(val == INT_MIN)
			continue;

		if(mm[-1*val]>0)
		{
			res++;
			mm[-1*val]--;
		}
		else
			mm[val]++;
	}
	cout<<res<<"\n";
}