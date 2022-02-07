#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string x;
	getline(cin,x);

	vector<char> v;
	for(int i = 0 ;i <x.length();i++){
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
			v.push_back(x[i]);
			i+=2;

		}else{
			v.push_back(x[i]);
		}
	}
	for(auto c : v){
		cout<<c;
	}
	// stringstream str(x);
	// vector<string>v;
	// while(getline(str,substring," ")){
	// 	v.push_back(substring);
	// }
	// int counter = 0;
	// for(auto i : v){
	// 	for(int j = 0;j < i.length();j++){

	// 	}
	// }
	return 0;
}