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
	int test;
	 cin >> test;
	 for(;test--;) {
	 	int n,rock,ppr,sscr;
	 	string str;
	 	
	 	cin >> n;
	 	cin >> rock >> ppr >> sscr;
	 	cin >> str;
	 	int cnt_rock = 0, cnt_ppr = 0, cnt_sscr = 0;
	 	for(int i = 0;i < str.length(); i++) {
	 		
	 		if(str[i] == 'R') cnt_rock++;
	 		if(str[i] == 'P') cnt_ppr++;
	 		if(str[i] == 'S') cnt_sscr++;

	 	}

	 	int wins = min(rock,cnt_sscr) + min(sscr,cnt_ppr) + min(ppr,cnt_rock);
	 	if(wins >= (int)ceil(n / 2.0))
	 		{
	 			cout << "YES\n";
	 			string res="";
	 			for(int i = 0; i < str.length(); i++) {
	 				if(str[i] == 'R') {
	 					if(ppr > 0) {
	 						res = res + "P";
	 						ppr--;
	 					}
	 					else res = res + "X";
	 				} 
	 				else if(str[i] == 'P') {
	 					if(sscr > 0) {
	 						res = res + "S";
	 						sscr--;	
	 					} 
	 					else res = res + "X";
	 				}
	 				else {
	 					if(rock > 0) {
	 					 res = res + "R";
	 					 rock--;
	 					}
	 					else res = res + "X";
	 				}
	 			}
	 			for(int i = 0; i < res.length(); i++) {
	 				if(res[i] == 'X') {
	 					if(rock > 0) {
	 						res[i] = 'R';
	 						rock--;
	 					}
	 					else if(ppr > 0) {
	 						res[i] = 'P';
	 						ppr--;
	 					}
	 					else if(sscr > 0) {
	 						res[i] = 'S';
	 						sscr--;
	 					}
	 				}
	 			}
	 			cout << res <<"\n";
	 		}
	 	else 
	 		cout << "NO\n";
	 }
	 return 0;
}