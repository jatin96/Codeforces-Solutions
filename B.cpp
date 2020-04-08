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
bool check_koutsu(string a, string b, string c) {
	if(a == b && b == c && c == a)
		return true;
	return false;
}
bool check_shuntsu(string a, string b, string c) {
	vector < int > vec;
	vec.pb(a[0] - '0');
	vec.pb(b[0] - '0');
	vec.pb(c[0] - '0');
	sort(vec.begin(), vec.end());
	if(abs(vec[0] - vec[1]) == 1 && abs(vec[1] - vec[2]) == 1 && a[1] == b[1] && b[1] == c[1])
	return true;
	return false;   
}
bool check_koutsu_1(string a, string b, string c) {
	if(a == b || b == c || c == a)
		return true;
	return false;
}
bool check_shuntsu_1(string a, string b, string c) {
	if((abs(a[0] - b[0]) == 1 && a[1] == b[1]) || (abs(a[0] - c[0]) == 1 && a[1] == c[1]) || (abs(c[0] - b[0]) == 1 && c[1] == b[1]))
	return true;
	return false;  
}

int cmpre(string x,string y,string z, string a, string b, string c) {
	int res = 0;
	if(x != a )
		res++;
	if(y != b)
		res++;
	if(z != c)
		res++;

	return res;
}

int main() {
	string str1, str2, str3 ;
	cin >> str1 >> str2 >> str3;

	/*if(check_shuntsu(str1, str2, str3) || check_koutsu(str1, str2 ,str3))
		cout << "0\n";
	else if(check_shuntsu_1(str1, str2, str3) || check_koutsu_1(str1, str2 ,str3))
		cout << "1\n";
	else 
		cout << "2\n";
*/
	vector <string > vec;
	string arr[9] = {"1","2","3","4","5","6","7","8","9"};
	string brr[3] = {"m","p","s"};
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 3; j++) {
			vec.pb(arr[i] + brr[j]);
		}
	}

	int n = vec.size();
	int mini = 2;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {
				if(check_shuntsu(vec[i], vec[j], vec[k]) || check_koutsu(vec[i], vec[j] ,vec[k])) {
					int res = cmpre(vec[i],vec[j],vec[k],str1,str2,str3);
					mini = min(res,mini);
				}
			}
		}

	}
	cout << mini <<"\n";

	return 0;
}