#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		set<int>s;
		for (int j = 0;  < t; ++i)
		{
			int k;
			cin >> k;
			if(s.count(k)){
				s.erase(k);
			}else{
				s.insert(k);
			}
			
		}
		cout << "Case #"<< i+1 <<": "<< *s.begin() <<"\n";
	}
}