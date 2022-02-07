#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string a,b,c,d,e;
	int strength = 0 ;
	cin >> a >> b >> c >> d >> e;

	set<char> set;
	vector<char> rank = {a[0],b[0],c[0],d[0],e[0]};

	for (int i = 0; i < 5; ++i) {
		set.insert(rank[i]);
	}
	for(auto x : set){
		int temp = count(rank.begin(),rank.end(),x);
		strength = (temp > strength) ? temp : strength ;
	}
	cout<<strength;
	return 0;
}