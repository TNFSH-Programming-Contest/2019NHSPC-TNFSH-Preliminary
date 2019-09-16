#include "../template/task_input_generate.hpp"
#include "../template/mylib.hpp"

#define path "input/2"
// n = 2


int32_t main() {
	for(int kase=1;kase<=2;kase++) {
		int t = 50;
		vector<QUERY> ques;
		
		int n = 2;
		
		if(kase==1) {
			for(int i=0;i<t;i++) {
				int m = (Random::random(30) ? Random::random(2,10) : ( Random::random(100.0*3/7) ? Random::random(100000-10,100000) : Random::random(2,100000) ));
				int k = (Random::random(30) ? Random::random(2,10) : ( Random::random(100.0*3/7) ? Random::random(100000-10,100000) : Random::random(2,100000) ));
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		else {
			for(int i=0;i<t;i++) {
				int m = Random::random(2,100000);
				int k = Random::random(2,100000);
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		
		check(t,ques);
		output(path,t,ques);	
	}
	return 0;
}

