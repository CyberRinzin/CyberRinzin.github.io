#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int l,r;
	string Even ="Even ",Odd= "Odd ",Not ="Not a moose ";
	cin>>l>>r;
	if(l==0&&r==0){
		cout<<Not;
	}else if(l==r){
		cout<<Even<<l*2;
	}else if(l>r){
		cout<<Odd<<l*2;
	}else if(r>l){
		cout<<Odd<<r*2;
	}
	return 0;
}