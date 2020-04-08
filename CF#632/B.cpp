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
    int test;
    cin >> test;
    for( ;test--;) {
        int n, arr[100007], brr[100007];
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        if(arr[0] != brr[0]) {
            cout << "NO\n";
            continue;
        }
        map < int , int > mm;
        mm[arr[0]]++;
        int fin_flag = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] != brr[i]) {
                int flag = 0;
                int diff = brr[i] - arr[i];
                if(diff < 0 && mm[-1] != 0) {
                    flag = 1;
                }
                else if(diff > 0 && mm[1] != 0) {
                    flag = 1;
                }
                mm[arr[i]]++;
                if(flag == 0) 
                {
                    fin_flag = 1;
                    break;
                }
            }
        }
        if(fin_flag == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}