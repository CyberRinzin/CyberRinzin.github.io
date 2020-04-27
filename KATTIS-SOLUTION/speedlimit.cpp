#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,s,t,total = 0,temp=0;
	while(true){
		cin>>n;
		if(n==(-1)) return 0;
		while(n--){
			cin>>s>>t;
			total+=(s*(t-temp));
			temp = t;
		}
		cout<<total<<" miles\n";
		temp=total=0;
	}
}