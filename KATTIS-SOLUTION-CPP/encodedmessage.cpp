#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin >> testcases;
	
	while(testcases--){
		string encoded;
		cin >> encoded;
		
		int side = sqrt(encoded.length());
		char array[side][side];
		int index = 0;
		
		for(int j = 0;j < side; ++j){
			for (int i = 0; i < side; ++i)
			{	
				array[j][i] = encoded[index];
				index++;
			}
		}
		for (int i = side-1; i >= 0; --i)
		{
			for (int j = 0; j < side; ++j)
			{
				cout <<array[j][i];
			}
		}
		cout << '\n';
	}
	return 0;
}