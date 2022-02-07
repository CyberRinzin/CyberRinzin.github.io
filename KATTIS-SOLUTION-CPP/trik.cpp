#include<iostream>
#include<string>
using namespace std;
int set[] = {1,0,0};
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i]== 'A')
		{
			int temp = set[0];
			set[0] = set[1];
			set[1] = temp;
		}else if (s[i]=='B')
		{
			int temp = set[1];
			set[1] = set[2];
			set[2] = temp;
		}else if (s[i]=='C')
		{
			int temp = set[0];
			set[0] = set[2];
			set[2] = temp;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		if (set[i]==1)
		{
			cout<<i+1<<endl;
		}
	}
	return 0;
}