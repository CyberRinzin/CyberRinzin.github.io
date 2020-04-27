#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int count = 0;
	cin>>s;
	for (int i = 0; i < s.length()/3;i++)
	{
		if (s[3*i]!='P')
		{
			count++;
		}
		if (s[(i*3)+1]!='E')
		{
			count++;
		}
		if (s[(i*3)+2]!='R')
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}