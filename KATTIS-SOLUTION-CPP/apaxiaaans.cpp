#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string name;
	cin >> name ;
	auto ip = unique(name.begin(),name.end());
	name.resize(distance(name.begin(),ip));
	cout << string(name.begin(),ip);
	return 0;
}