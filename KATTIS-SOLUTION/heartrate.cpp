#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	float b,p;
	cin>>t;
	while(t--){
		cin>>b>>p;
		float arbp;
		arbp = 60/p;
		cout<<fixed<<setprecision(4)<<(((60.0*b)/p)-arbp)<<" "<<((60.0*b)/p)<<" "<<((60.0*b)/p)+arbp<<endl;
	}
	return 0;
}