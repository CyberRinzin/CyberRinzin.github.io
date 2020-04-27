#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s, substring;
	getline(cin,s); 
	
	stringstream x(s);
	set<string> sets;
	
	int word = 0;
	
	while(getline(x,substring,' ')){
		sets.insert(substring);
		word++;
	}
	
	if(word == sets.size()){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}