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
	string str;
	int n;
	cin >> n >> str;
	stack < char > stk;
	int rght[300007] = {0};
	for(int i = n - 1; i >= 0; i--) {
		if(str[i] == '?')
			rght[i] = rght[i + 1] + 1;
		else if(str[i] == '(')
			rght[i] = rght[i + 1] - 1;
		else
			rght[i] = rght[i + 1] + 1;
	}

	/*for(int i = 0; i < n ; i++) 
		finderror1(rght[i]);*/
	int curr_cnt = 0;
	for(int i = 0; i < n; i++) {
		if(str[i] == '(')
			curr_cnt++;
		else if(str[i] == ')')
			curr_cnt--;
		else {
			if(curr_cnt <= rght[i + 1])
			{
				curr_cnt++;
				str[i] = '(';
			}
			else {
				curr_cnt--;
				str[i] = ')';
			}
		}
	}

	int flag = 0;
	for(int i = 0; i < n; i++) {
		if(str[i] == '(')
			stk.push('(');
		else {
			if(!stk.empty())
				{
					stk.pop();
					if(stk.empty() == true && i != (n - 1))
					{
						flag = 1;
						break;
					}
				}
			else {
				flag = 1;
				break;
			}
		}
	}
	if(!stk.empty()) flag = 1;

	//cout << str <<"**\n";

	if(flag == 0)
		cout << str <<"\n";
	else
		cout << ":(\n"; 
	return 0;
}