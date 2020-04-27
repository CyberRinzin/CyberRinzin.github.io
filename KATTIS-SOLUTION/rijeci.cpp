#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int p = 1, c = 0,n;
	for(int i = 1 ; i <= t;i++){
		n = p+c;
		p = c;
		c = n;
		if(n >= 1){
			if(t == i){
				cout << p << " " << c << "\n";  
			}
		}
	}
}

