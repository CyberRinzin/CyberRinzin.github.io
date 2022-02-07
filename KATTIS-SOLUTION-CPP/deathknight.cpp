#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int won = n;
	for (int i = 0; i < n; ++i)
	{
		string sequence;
		cin >> sequence;
		if(sequence.find("CD") != -1){
			won--;
		}
	}
	cout << won;
	return 0;
}