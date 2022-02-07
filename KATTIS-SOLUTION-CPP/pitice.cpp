#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int t,indexA = 0,indexB = 0,indexC = 0,pa = 0,pb = 0,pg = 0;
	string q,a = "ABC", b = "BABC", c = "CCAABB";
	cin >> t >> q;
	for (int i = 0; i < t; ++i)	{
		if(q[i] == a[indexA]) pa++;
		(indexA == 2) ? indexA = 0 : indexA++;
		
		if(q[i] == b[indexB]) pb++;		
		(indexB == 3) ? indexB = 0 : indexB++;
		
		if(q[i] == c[indexC]) pg++;		
		(indexC == 5) ? indexC = 0 : indexC++;
	}
	if(pa == pb && pa == pg && pb == pg){
		cout << pa << "\nAdrian\nBruno\nGoran";
	}else{
		std::unordered_map<int, string> m;
		m[pa] = "Adrian";
		m[pb] = "Bruno";
		m[pg] = "Goran";
		int mx = max({pa,pb,pg});
		cout << mx<<"\n";
		for(auto i : m){
			if(i.first == mx){
				cout << i.second<<"\n";
			}
		}
	}


	return 0;
}