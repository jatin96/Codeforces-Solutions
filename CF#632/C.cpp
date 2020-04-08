#include <bits/stdc++.h>
using namespace std;
// Jatin Narula (jatin.jt.narula)
// B.Tech CSE
// NIT - Allahabad
#define ms(a ,value) memset(a ,value,sizeof(a))
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
    int n, arr[200007];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cumm = 0;
    map<int, int > mm;
    mm[0]++;
    int res = 0;
    for(int i = 0; i < n; i++) {
        cumm += arr[i];
        if(mm[cumm]) {
            res += mm[cumm];
        }
        mm[cumm]++;
    }
    cout << res << "**\n";
    res = ((n * (n + 1)) / 2) - res;
    cout << res << "\n"; 
    return 0;
}