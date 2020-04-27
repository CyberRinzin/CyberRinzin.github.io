#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	string a,b;
	while(t--){
		cin>>a>>b;
		cout<<a<<endl<<b<<endl;
		for (int i = 0; i < a.length(); ++i)
		{
			a[i]==b[i]?cout<<".":cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}