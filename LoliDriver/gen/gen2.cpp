#include<bits/stdc++.h>
#include "testlib.h"
#define endl '\n'
using namespace std;
int tree[1000010],arr[1000010];
struct Node{
	vector<int> to;
	int cnum;
}t2 [1000010];
int main(int argc,char* argv[]){
	ios::sync_with_stdio(0);
	cin.tie(0);
	registerGen(argc, argv, 1);
	memset(tree,-1,sizeof(tree));
	int n,q,fnmax,branchmax;
	n = atoi(argv[2])-1;
	q = atoi(argv[3]);
	fnmax = atoi(argv[4]);
	branchmax = atoi(argv[5]);
	for(int i=1;i<=n;i++){
		arr[i-1] = i;
	}
	shuffle(arr,arr+n);
	queue<int> qu,numpool;
	for(int i=0;i<n;i++){
		numpool.push(arr[i]);
		//cout<<arr[i]<<endl;
	}
	qu.push(0);
	while(!qu.empty()&&!numpool.empty()){
		int bnum = rnd.next(0,min(branchmax,(int)numpool.size()));
		int now = qu.front();
		qu.pop();
		if(qu.empty())bnum = max(bnum,1);
		for(int i=0;i<bnum;i++){
			int x;
			while(!numpool.empty()){
				x = numpool.front();
				numpool.pop();
				if(tree[x]!=-1)continue;
				tree[x] = now;
				t2[now].to.push_back(x);
				t2[now].cnum++;
				qu.push(x);
				break;
			}
		}
	}
	cout<<n+1<<" "<<q<<endl;
	for(int i=1;i<=n;i++){
		//assert(tree[i]!=-1);
		if(i>1)cout<<" ";
		cout<<tree[i];
	}
	cout<<endl;
	arr[n] = 0;
	n+=1;
	while(q--){
		int fn = rnd.next(2,fnmax);
		if(q<=1)fn = fnmax;
		int x;
		while(1){
			x = rnd.next(0,n-1);
			if(t2[x].to.size()==0)continue;
			break;
		}
		fn = min(fn,(int)t2[x].to.size());
		shuffle(t2[x].to.begin(),t2[x].to.end());
		cout<<fn;
		for(int i=0;i<fn;i++){
			cout<<" "<<t2[x].to[i];
		}
		cout<<endl;
	}
	return 0;
}

