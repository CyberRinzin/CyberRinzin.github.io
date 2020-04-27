#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int a,b,c,d,e;
	int max = 0,position;
	for (int i = 1; i <= 5; ++i)
	{
		cin >> a >> b >> c >> d;
		int sum = a+b+c+d;
		if(sum > max){
			max = sum;
			position = i ;  
		}
	}

	cout << position<< " " <<max;
	return 0;
}