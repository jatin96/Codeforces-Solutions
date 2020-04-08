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


#define MAX 200005
#define NINF -1e9
#define INF 1e9
#define MOD 998244353
ll n;
ll cnt_q1 = 0, cumm1 = 0;
ll cnt_q2 = 0, cumm2 = 0;
string str;

void swap(ll x, ll y) {
    ll tmp = x;
    x = y;
    y = tmp;
}

int main() {
    
    cin>> n >> str; 
    cnt_q = 0;
    cnt_q2 = 0;
    cumm1 = 0;
    cumm2 = 0;
    for(int i=0; i < n / 2; i++) {
        if(str[i] == '?') 
            cnt_q++;
        else
         cumm = cumm + (str[i] - '0');
    }


    
    for(int i= n / 2; i < n; i++) {
        if(str[i] == '?') cnt_q2++;
        else  cumm = cumm + (str[i]-'0');
    }

    if(cumm1 < cumm2) {  
        swap(cumm2, cumm1);
        swap(cnt_q2, cnt_q1);
    }
    
    while(cnt_q1 || cnt_q2) {
        if(cnt_q1 != 0){
            cumm1 += 9;
            cnt_q1--;
        }
        else{
            if((cnt_q2 / 2)*9 == cumm1-cumm2) {
                cout<<"Bicarp\n";
                return 0;
            }
            else {
                cout<<"Monocarp\n";
                return 0;
            }
        }
        
        if(cnt_q2 == 0){
            cout<<"Monocarp\n";
            return 0;
        }
        else {
            cnt_q2 --;
            ll tmp = min(9LL, cumm1 - cumm2);
            cumm2 += tmp;
        }
    }
    
    if(cumm1 == cumm2) {
        cout<<"Bicarp"<<endl;
    }
    else {
        cout<<"Monocarp"<<endl;
    }
    return 0;
}