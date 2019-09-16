#include "../template/task_input_generate.hpp"
#include "../template/mylib.hpp"

#define path "input/3"
// 2 <= n,m <= 5


int32_t main() {
	for(int kase=1;kase<=2;kase++) {
		int t = -1;
		vector<QUERY> ques;
		
		
		if(kase==1) {
			t = (5-2+1)*(5-2+1)*3+2;
			for(int n=2;n<=5;n++)
				for(int m=2;m<=5;m++) {
					int a = min(n,m) , b = max(n,m);
					for(int t=0;t<3;t++) {
						int k = -1;
						if(t==0) {
							k = a;
						}
						else if(t==1) {
							k = b;
						}
						else {
							k = Random::random(b+1,100000);
						}
						ques.emplace_back(QUERY{n,m,k});
					}
				}
			ques.emplace_back(QUERY{5,5,99999});
			ques.emplace_back(QUERY{5,5,2});
			mt19937 Rand(131313);
			shuffle(ques.begin(),ques.end(),Rand);
		}
		else {
			t = 50;
			for(int i=0;i<t;i++) {
				int n = Random::random(2,5);
				int m = Random::random(2,5);
				int k = Random::random(2,5);
				ques.emplace_back(QUERY{n,m,k});
			}
		}
		
		check(t,ques);
		output(path,t,ques);	
	}
	return 0;
}

