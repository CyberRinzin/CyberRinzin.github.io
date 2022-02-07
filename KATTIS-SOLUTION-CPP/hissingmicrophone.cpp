#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;	 
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i]=='s')
		{
		 	if (s[i+1]=='s')
		 	{
		 		cout<<"hiss"<<endl;
		 		return 0;
		 	}
		} 
	} 
	cout<<"no hiss"<<endl;
	return 0;
}