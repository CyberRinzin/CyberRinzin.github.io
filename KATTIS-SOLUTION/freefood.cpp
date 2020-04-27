#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	set<int> day;
	while(t--){
		int a,b;
		cin >> a >> b;
		
		for (int i = a; i <= b; i++)
		{
			day.insert(i);
		}
	}
	cout << day.size() << "\n";
	return 0;
}