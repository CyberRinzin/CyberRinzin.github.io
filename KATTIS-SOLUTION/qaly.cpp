#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	float q,y,qaly = 0.0;
	cin>>n;
	while(n--){
		cin>>q>>y;
		qaly+=(q*y);
	}
	cout<<qaly;
	return 0;
}