#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,p,total = 0;
	cin>>n;
	while(n--){
		cin>>p;
		total+=pow(p/10,p%10);
	}
	cout<<total;
	return 0;
}