#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	

	set<char> st;
	
	while(n--){

		std::vector<char> v;
		string s;
		std::map<char, bool> m;	
		bool count;
		for(int i = 97;i<123;i++){
			m[i] = false;
		}
			
		getline(cin,s);
		int l = s.length();
		transform(s.begin(),s.end(),s.begin(),::tolower);
		
		for(auto c: s){
			m[c] = true;
			st.insert(c);
		}

		for(auto &c : m){
			if(c.second == 0 ){
				v.push_back((c.first));
			}
		}
		int size =  v.size();

		if(size != 0){
			cout<<"missing ";
			for(auto c : v){
				cout << c;
			}
			cout << "\n";
		}else{
			cout<<"pangram\n";
		}

	}
	return 0;
}