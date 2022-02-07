#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0 ;i<n;++i){
		string s;
		getline(cin,s);
		if( s.find("Simon says") == 0 ) {
			s.erase(0,11);
			cout<<s<<endl;
		}
	}
	return 0;
}