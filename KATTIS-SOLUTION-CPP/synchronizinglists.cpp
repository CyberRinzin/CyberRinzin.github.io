#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> l1;
	std::vector<int> l2;

	int n;
	
	while(cin >> n && n != 0 ){
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			l1.push_back(temp);		
		}
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			l2.push_back(temp);
		}
		
		std::vector<int> s_l1 = l1;
		sort(s_l1.begin(),s_l1.end());

		std::map<int, int> location;

		for (int i = 0; i < n; ++i)
		{
			location[ s_l1[i] ] = i;
		}

		sort(l2.begin(),l2.end());

		for (int i = 0; i < n; ++i)
		{
			int pos = location[l1[i]];
			cout << l2[pos]<<endl;
		}
		cout<<endl;
		l1.clear();
		l2.clear();
		s_l1.clear();
	}
	return 0;
}