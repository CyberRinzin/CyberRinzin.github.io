#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<char> shortform;
	string fullform;
	cin>>fullform;
	for (int i = 0; i < fullform.size(); ++i)
	{
		if (fullform[i]>=65 && fullform[i]<=90)
		{
			shortform.push_back(fullform[i]);
		}
	}
	for (auto i = shortform.begin();i != shortform.end(); ++i)
	{
		cout<<*i;
	}
	
	return 0;
}