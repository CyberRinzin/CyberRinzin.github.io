#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i <n; ++i)
	{
		int temp,j;
		cin >> j >>temp;
		// int sum = 0;
		// for (int k = 2; k < temp+2; ++k)
		// {
		// 	sum+=k;	
		// }
		// cout <<i+1<<" "<< sum<<"\n";
		cout <<i+1<<" "<< temp*(3+temp)/2<<"\n";
	}
	return 0;
}