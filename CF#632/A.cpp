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
int main(){
    int test;
    cin >> test;
    for(;test--;){
        int n,m;
        cin >> n >> m;
        char mat[1007][1007];
        int cntb = 0, cntw = 0;
        // cout << n << m <<"**\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                 if(i % 2 == 0)
                {
                    if(j % 2 == 0)
                    {
                        // cout << "##$$#";
                        mat[i][j] = 'B';
                        cntb++;
                    }
                    else
                    {
                        mat[i][j] = 'W';
                        cntw++;
                    }
                }
                else {
                    if(j%2 == 0)
                    {
                        mat[i][j] = 'W';
                        cntw++;
                    }
                    else
                    {
                        mat[i][j] = 'B';
                        cntb++;
                    }
                }
            } 
        }
        //cout << cntb << cntw << "**\n";
        if(cntb == cntw) {
            mat[0][1] = 'B';
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++)
            cout << mat[i][j];
            cout << "\n";
        }
    }
    return 0;
}