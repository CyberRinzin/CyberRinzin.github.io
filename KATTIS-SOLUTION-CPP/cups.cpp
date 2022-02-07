#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	map<int,string> v;
	while(t--){
		string color,x,y;
		int size;	
		cin>>x>>y;
		cin.ignore();
		if(isdigit(x[0])){
			size = stoi(x);
			color = y;
		}else{
			size = stoi(y)*2;
			color = x;
		}
		v[size] = color;
	}
	for(auto i : v){
		cout<<i.second<<"\n";
	}
	return 0;
}