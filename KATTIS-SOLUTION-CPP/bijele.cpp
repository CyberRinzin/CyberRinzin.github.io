#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int temp,set[] = {1,1,2,2,2,8};
	for (int i = 0; i < 6; ++i)
	{
		cin>>temp;
		cout<<set[i]-temp<<endl;
	}
	return 0;
}