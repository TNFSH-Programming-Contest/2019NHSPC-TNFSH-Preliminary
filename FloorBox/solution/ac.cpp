#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int seqq[1000100];
int price[1000100],room[1000100],w[1000100];

bool cmp(int a,int b){
	return w[a]>w[b];
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n,k,m=0,x;
	long long ans=0;
	cin>>n>>k>>x;
	for(int i=0;i<n;i++){
		cin>>price[i];
		seqq[i] = i;
		//assert(seqq[i]>=0);
		ans += price[i];
	}
	for(int i=0;i<n;i++){
		cin>>room[i];
		m+=room[i];
	}
	for(int i=0;i<n;i++){
		w[i] = price[i]-(room[i]*x);
		//cout<<w[i]<<" ";
	}
	//cout<<endl;
	sort(seqq,seqq+n,cmp);
	/*for(int i=0;i<n;i++){
		cout<<seq[i]<<" ";
	}*/
	//cout<<endl;
	int maxroom = n-(m/k)-((m%k)?1:0);
	//cout<<maxroom<<endl;
	for(int i=0;i<maxroom;i++){
		if(w[seqq[i]]<=0)break;
		//cout<<"rm "<<seq[i]<<endl;
		ans-=w[seqq[i]];
	}
	cout<<ans<<endl;
	return 0;
}

