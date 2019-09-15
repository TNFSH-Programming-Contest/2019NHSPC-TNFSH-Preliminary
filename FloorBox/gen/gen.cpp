#include<bits/stdc++.h>
#include "testlib.h"
#define endl '\n'
//#define int long long
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int n,k,xl,xr,ail,air;
	n = atoi(argv[2]);
	k = atoi(argv[3]);
	xl = atoi(argv[4]);
	xr = atoi(argv[5]);
	ail = atoi(argv[6]);
	air = atoi(argv[7]);
	int x = rnd.next(xl,xr);
	cout<<n<<" "<<k<<" "<<x<<endl;
	for(int i=0;i<n;i++){
		if(i)cout<<" ";
		cout<<rnd.next(ail,air);
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(i)cout<<" ";
		cout<<rnd.next(1,k);
	}
	cout<<endl;
	return 0;
}

