#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	string s;
	cin >> n >> k;
	getline(cin,s);
	getline(cin,s);
	int sz = s.size();
	for ( int i=sz-1; i>=0&&k>0; --i ) {
		// cout << "s, k: " << s << ' ' << k << '\n';
		while ( i >= 0 && s[i] != ' ' ) {
			s.pop_back();
			--i;
		}
		--k;
		s.pop_back();
	}
	cout << s << '\n';
	return 0;
}
/*
21 3
Hi, nice to meet you.
*/