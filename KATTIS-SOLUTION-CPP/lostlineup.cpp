#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::map<int, int> order;
	int key;
	for (int i = 2; i <= n; ++i)
	{	
		cin >> key;
		order[key] = i;
	}
	cout << "1 ";
	for (int i = 0; i < n-1; ++i)
	{
		cout <<order[i]<<" "; 
	}
	return 0;
}