#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	float x;
	cin>>x;
	cout<<int(x*1000*(5280.0/4854.0)+0.5)<<endl;
	return 0;
}