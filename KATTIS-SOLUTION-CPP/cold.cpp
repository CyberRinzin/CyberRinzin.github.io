#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,temp,c = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if (temp<0)
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}