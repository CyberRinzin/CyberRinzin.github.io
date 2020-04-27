#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n;
	string s;
	vector<string> place;
	cin>>t;
	while(t--){
		cin>>n;
		while(n--){
			cin>>s;
			if (place.empty()){
				place.push_back(s);
			}
			if(find(place.begin(),place.end(),s) != place.end()){
				
			}else{
				place.push_back(s);
			}
		}
		cout<<place.size()<<endl;
		place.clear();
	}
	return 0;
}