#include<bits/stdc++.h>
#define endl '\n'
#define int long long 
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
		if(n>=k)	ans += (n-k+1)*m;
		if(m>=k)	ans += (m-k+1)*n;
		if(n>=k && m>=k)	ans += (n-k+1)*(m-k+1)*2ll;
		cout << ans << endl;
	}
	return 0;
}

