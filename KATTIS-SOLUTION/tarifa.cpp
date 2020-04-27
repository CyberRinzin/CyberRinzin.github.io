#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,n,p,total=0;
	cin>>x>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>p;
		total+=p;
	}
	cout<<((x*n)-total)+x;
	return 0;
}