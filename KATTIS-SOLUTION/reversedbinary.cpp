#include<bits/stdc++.h>

using namespace std;
// using namespace std::chrono;

int main(int argc, char const *argv[])
{
	int n,i=0,t;
	cin >> n;
	
	vector<int>v;
	
	// auto start = high_resolution_clock::now();
	while(true){
		t = n % 2;
		v.push_back(t);
		n = n / 2;

		if(n == 0 )	break;

		i++;
	}
	// auto stop = high_resolution_clock::now();
	// auto duration = duration_cast<microseconds>(stop-start);
	// cout << duration.count()<<endl;
	
	reverse(v.begin(),v.end());
	int index = 0,sum = 0;
	for(auto b : v){
		if(b == 1){
			sum+=pow(2,index);
		}
		index++;
	}
	cout << sum;
	return 0;
}