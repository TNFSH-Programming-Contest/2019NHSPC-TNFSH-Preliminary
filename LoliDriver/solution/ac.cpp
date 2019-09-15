#include<bits/stdc++.h>
#define maxn 1000005
#define endl '\n'
using namespace std;
vector<int> G[maxn];
int dep[maxn],pa[21][maxn];
int lca(int u,int v) {
	if(u==-1)	return v;
	if(dep[u] < dep[v])		swap(u,v);
	for(int i=20;i>=0;i--)
		if(dep[pa[i][u]] >= dep[v])
			u = pa[i][u];
	if(u==v)	swap(u,v);
	for(int i=20;i>=0;i--)
		if(pa[i][u] != pa[i][v])
			u = pa[i][u] , v = pa[i][v];
	return pa[0][u];
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
	for(int u=1;u<n;u++) {
		int m;
		cin >> m;
		/*while(m--) {
			int v;
			cin >> v;
			G[u].emplace_back(v);
		}*/
		assert(0<=m<n);
		G[m].emplace_back(u);
	}
	stack<int> S;
	dep[0] =  pa[0][0] = 0;
	S.push(0);
	while(!S.empty()) {
		int u = S.top();
		S.pop();
		for(int v : G[u]) {
			dep[v] = dep[u]+1;
			pa[0][v] = u;
			S.push(v);
		}
	}
	for(int i=1;i<21;i++)
		for(int j=0;j<n;j++)
			pa[i][j] = pa[i-1][pa[i-1][j]];
	int ans = -1;
	while(q--) {
		ans = -1;
		int fn;
		cin>>fn;
		while(fn--){
			int u;
			cin >> u;
			ans = lca(ans,u);
		}
		cout << ans << endl;
	}
	
	return 0;
}
