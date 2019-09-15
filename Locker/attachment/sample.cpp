#include<iostream>
#include<stdio.h>
using namespace std;
void initio(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
int main(){
	initio();
	string abc;
	cin>>abc;
	cout<<"Hello "<<abc<<endl;
	return 0;
}

