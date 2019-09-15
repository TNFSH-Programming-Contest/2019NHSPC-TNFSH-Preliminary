// O(n*n*m*m)
// 58pt (task1 + task3 + task4)
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	assert(1<=t && t<=50);
	while(t--) {
		int n,m,k;
		cin >> n >> m >> k;
		assert(2<=min({n,m,k}) && max({n,m,k})<=100000);
		int ans = 0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				for(int x=1;x<=n;x++)
					for(int y=1;y<=m;y++)
						if( (x==i || abs(x-i)==k-1) && (y==j || abs(y-j)==k-1) && (i!=x || j!=y))
							ans++;
		cout << ans/2 << endl;
	}
	return 0;
}

