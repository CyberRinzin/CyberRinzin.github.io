#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	unordered_set<int> missing_x;
	unordered_set<int> missing_y;
	int t = 4;
	while(--t){
		int x,y;
		cin>>x>>y;
		if(missing_x.find(x) == missing_x.end()){
			missing_x.insert(x);
		}else{
			missing_x.erase(x);
		}
		if(missing_y.find(y) == missing_y.end()){
			missing_y.insert(y);
		}else{
			missing_y.erase(y);
		}
	}
	cout<<*(missing_x.begin())<<" "<<*(missing_y.begin());
	return 0;
}