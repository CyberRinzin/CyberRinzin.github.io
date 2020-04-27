#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,h,v;
	cin>>n>>h>>v;
	// Hard Coded
	// if (n-h >= h && n-v >= v)
	// {
	// 	cout<< (n-h)*(n-v)*4;
	// } else if (n-h <= h && n-v <= v)
	// {
	// 	cout<< h*v*4;
	// } else if (n-h >= h && n-v <= v)
	// {
	// 	cout<<(n-h)*v*4;
	// } else if (n-h <= h && n-v >= v)
	// {
	// 	cout<<h*(n-v)*4;
	// }
	// using inbuilt function
	cout<<max(h,n-h)*max(v,n-v)*4;
	return 0;
}