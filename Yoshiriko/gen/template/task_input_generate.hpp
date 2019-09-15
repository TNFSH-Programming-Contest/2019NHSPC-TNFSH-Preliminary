#include "Type.hpp"

#ifndef _HEADER_

#define _HEADER_
#include<bits/stdc++.h>
using namespace std;

#endif

#define endl '\n'

void check(int t,vector<QUERY> ques) {
	assert(t==(int)ques.size());
	
	for(QUERY now : ques) {
		assert(2<=min({now.n,now.m,now.k}) && max({now.n,now.m,now.k})<=100000);
	}
}

void output(string file,int t,vector<QUERY> ques) {	// file Example : "../input/5"
							// ( generate 5th subtask in "../input" )

//=======================================
	// file name setting 
	static int task_idx = 1;
	file += "0";
	auto int_to_string = [=](int idx)->string{
		assert(idx<10);		// otherwise there are too many task such that judge will be too slow
		string ret = "";
		ret += (char)('0'+idx);
		return ret;
	};
	file += int_to_string(task_idx);;
	file += ".in";
	
	task_idx++;
	freopen(file.c_str(),"w",stdout);
//=======================================
	// write output here
	cout << t << endl;
	for(QUERY now : ques)
		cout << now.n << " " << now.m << " " << now.k << endl;
//=======================================
	cout.flush();
}

