#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int>v;
	v.resize(4);
	cin >> v[0]>> v[1] >> v[2] >> v[3];
	sort(v.begin(),v.end());
	cout << v[0]*v[2] << "\n";

	return 0;
}