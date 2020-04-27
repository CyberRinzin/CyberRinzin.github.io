#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,set = 0;
	vector<string> list;
	string s;
	while(true){
		cin>>t;
		if(t==0)
			return 0;
		for (int i = 0; i < t; ++i)
		{
			cin>>s;
			list.push_back(s);
		}
		set++;
		cout<<"SET " <<set;
		for (int i = 0; i < t; ++i)
		{
			if (i%2==0)
			{
				cout<<endl<<list[i];
			}
		}
		for (int i = t-1; i >= 0; --i)
		{
			if (i%2!=0)
			{
				cout<<"\n"+list[i];
			}
		}
		cout<<endl;
		list.clear();
	}
	return 0;
}