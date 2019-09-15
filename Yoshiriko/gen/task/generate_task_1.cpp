#include "../template/task_input_generate.hpp"
#include "../template/mylib.hpp"

#define path "input/1"
// T=1 , n=m=k=2


int32_t main() {
	for(int kase=1;kase<=1;kase++) {
		int t = 1;
		vector<QUERY> ques;
		
		ques.emplace_back(QUERY{2,2,2});
		
		check(t,ques);
		output(path,t,ques);	
	}
	return 0;
}

