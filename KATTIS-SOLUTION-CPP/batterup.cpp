#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	double t,n,divider=0,dividend = 0;
	cin>>t;
	while(t--){
		cin>>n;
		if (n>=0)
		{
			divider++;
			dividend+=n;
		}
	}
	double q = dividend/divider;
	cout<<q<<endl;
	return 0;
}