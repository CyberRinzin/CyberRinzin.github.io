#include<bits/stdc++.h>
 
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int total = 0;
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;

		if(t < 0) {
			total += t;
		}
	}

	cout << (-1)*total << endl;
}