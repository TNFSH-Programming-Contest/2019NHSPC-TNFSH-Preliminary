#include "../template/task_input_generate.hpp"
#include "../template/mylib.hpp"

#define path "input/5"
// 2 <= n,m,k <= 100000


int32_t main() {
	for(int kase=1;kase<=3;kase++) {
		int t = -1;
		vector<QUERY> ques;
		
		
		if(kase==1) {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(100000-20,100000);
				int m = Random::random(100000-20,100000);
				int K[6] = {Random::random(2,10),Random::random(20,100),Random::random(200,1000),Random::random(2000,10000),Random::random(20000,90000),Random::random(min(n,m),max(n,m))};
				int k = K[Random::random(0,5)];
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		else if(kase==2) {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(2,100000);
				int m = Random::random(2,100000);
				int k = Random::random(2,100000);
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		else  {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(100000-30,100000);
				int m = Random::random(100000-30,100000);
				int k;
				if(i==0)
					k = 99999;
				else
					k = Random::random(100000-100,100000);
				ques.emplace_back(QUERY{n,m,k});
			}			
		}
		
		check(t,ques);
		output(path,t,ques);	
	}
	return 0;
}

