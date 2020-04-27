#include<iostream>
using namespace std;
int flip(int x){
	int r1 = x%10;
	int q1 = x/10;
	int r2 = q1%10;
	int q2 = q1/10;
	int r3 = q2%10;
	return (r1*100+r2*10+r3);
}
int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	int max = flip(x)>flip(y)?flip(x):flip(y);
	cout<<max<<endl;
	return 0;
}