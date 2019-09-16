#include "../template/task_input_generate.hpp"
#include "../template/mylib.hpp"

#define path "input/4"
// 2 <= n,m <= 40


int32_t main() {
	for(int kase=1;kase<=3;kase++) {
		int t = -1;
		vector<QUERY> ques;
		
		
		if(kase==1) {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(40-3,40);
				int m = Random::random(40-3,40);
				int K[3] = {Random::random(2,10),Random::random(min(n,m),max(n,m)),Random::random(100000-123,100000)};
				int k = K[Random::random(0,2)];
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		else if(kase==2) {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(40-5,40);
				int m = Random::random(40-5,40);
				int k = Random::random(40-10,41);
				ques.emplace_back(QUERY{n,m,k});
			}			
		}
		else {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(2,40);
				int m = Random::random(2,40);
				int k = Random::random(2,40);
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		
		check(t,ques);
		output(path,t,ques);	
	}
	return 0;
}

