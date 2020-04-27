#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
// 	One line containing a real number C (0<C≤100), the cost of seed to sow one square metre of lawn.

// One line containing an integer L (0<L≤100), the number of lawns to sow.

// L lines, each containing two positive real numbers: wi (0≤wi≤100),
// the width of the lawn, and li (0≤li≤100), the length of the lawn.
	float c,total=0.0;
	cin>>c;
	int t;
	cin>>t;
	while(t--){
		float w,h;
		cin>>w>>h;
		total +=(w*h); 
	}
	cout<<fixed<<setprecision(6)<<total*c;
	return 0;
}