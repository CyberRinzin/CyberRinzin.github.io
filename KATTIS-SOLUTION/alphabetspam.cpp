#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string msg;
	cin >> msg;
	
	double w = 0, l = 0, u = 0, s = 0;
	
	for(auto c : msg){
		if(c=='_'){
			w++;
		}else if(islower(c)){
			l++;
		}else if(isupper(c)){
			u++;
		}else{
			s++;
		}
	}
	int size = msg.length();
	cout.precision(10);
	cout<<w/size<<"\n";
	cout<<l/size<<"\n";
	cout<<u/size<<"\n";
	cout<<s/size<<"\n";
	return 0;
}