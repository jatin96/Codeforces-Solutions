#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,ele[200007];
	cin>>n>>k>>l;
	int m=k*n;
	for(int i = 0; i<m ; i++)
		scanf("%d",&ele[i]);
	sort(ele,ele+m);
	int pos = upper_bound(ele,ele+m,ele[0]+l)-ele;
	if(pos<n)
		printf("0\n");
	else
	{
		long long  int res=0,a=0;
		for(int i=0;i<n;i++)
		{
			res+=ele[a++];
			for(int j=0;j<k-1;j++)
			{
				if((pos-a)>(n-i-1))
					a++;
				else
					break;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}