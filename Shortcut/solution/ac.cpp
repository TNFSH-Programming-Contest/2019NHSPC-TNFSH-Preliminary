#include <iostream>
using namespace std;
int main() {
	// ios::sync_with_stdio(false);
	// cin.tie(0);
	int n, k, m = 1;
	string s;
	cin >> n >> k;
	getline(cin,s);
	getline(cin,s);
	int sz = s.size();
	// cout << "sz: " << sz << '\n';
	for ( int i=0; i<sz; ++i )	if ( s[i] == ' ' )	m++;
	// cout << "m: " << m << '\n';
	m -= k;
	// cout << "m: " << m << '\n';
	for ( int i=0; i<sz&&m>0; ++i ) {
		cout << s[i];
		if ( s[i] == ' ' )	m--;
	}
	cout << '\n';
	return 0;
}