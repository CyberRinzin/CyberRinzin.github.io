#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t = 11,x;
	set<int> remainder;
	while(--t){
		cin>>x;
		int temp = x%42;
		remainder.insert(temp);
	}
	cout<<remainder.size();
	return 0;
}