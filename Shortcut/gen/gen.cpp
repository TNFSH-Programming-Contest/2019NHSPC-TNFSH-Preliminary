#include <bits/stdc++.h>
using namespace std;
int main() {
	// ios::sync_with_stdio(false);
	// cin.tie(0);
	srand(time(NULL));
	int arr[10] = {29, 111, 333, 555, 10, 1000, 999};
	for ( int i=3; i<=9; ++i ) {
		char filename[100] = "0200.in";
		filename[3] = ('0'+i);
		FILE *pF = fopen(filename, "w");
		int N = arr[i-3];
		while ( N > 0 ) {
			if ( N == 1 ) {
				fprintf(pF, ".\n");
				break;
			} 
			int wordLen = 1+rand()%30;
			while ( N-wordLen <= 3 && N-wordLen != 1 )	wordLen = 2+rand()%N;
			// cout << "wordlen: " << wordLen << '\n';
			for ( int j=0; j<wordLen; ++j ) {
				fprintf(pF, "%c", 'a'+rand()%26);
			}
			N -= wordLen;
			if ( N > 1 ) {
				int opt = rand()%3;
				if ( opt == 0 ) {
					fprintf(pF, ", ");
					N -= 2;
				}
				else if ( opt == 1 ) {
					fprintf(pF, "; ");
					N -= 2;
				}
				else {
					fprintf(pF, " ");
					N -= 1;
				}
			}
			// cout << "i,N: " << i << ' ' << N << '\n';
		}
		fclose(pF);
	}
	return 0;
}