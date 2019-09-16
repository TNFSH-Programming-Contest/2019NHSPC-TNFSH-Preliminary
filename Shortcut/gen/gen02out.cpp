#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
	// ios::sync_with_stdio(false);
	// cin.tie(0);
	for ( int _=1; _<=10; _++ ) {
		char filename[100] = "0200.in", s[1005] = "";
		filename[2] = ('0'+_/10);
		filename[3] = ('0'+_%10);
		FILE *pF = fopen(filename, "r");
		int n, k, m = 1;
		// string s;
		fscanf(pF, "%d %d", &n, &k);
		fgets(s, 1005, pF);
		fgets(s, 1005, pF);
		// cin >> n >> k;
		// getline(cin,s);
		// getline(cin,s);
		s[strlen(s)-1] = '\0';
		int sz = strlen(s);
		cout << "n,k,sz: " << n << ' ' << k << ' ' << sz << '\n';
		
		fclose(pF);

		char output[100] = "0200.out";
		output[2] = ('0'+_/10);
		output[3] = ('0'+_%10);
		pF = fopen(output, "w");

		for ( int i=0; i<sz; ++i )	if ( s[i] == ' ' )	m++;
		m -= k;
		for ( int i=0; i<sz&&m>0; ++i ) {
			fprintf(pF, "%c", s[i]);
			// cout << s[i];
			if ( s[i] == ' ' )	m--;
		}
		fprintf(pF, "\n");
		// cout << '\n';

		fclose(pF);
	}
	return 0;
}