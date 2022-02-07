#include<iostream>
using namespace std;
int fact(int n){
	return (n==1||n==0)?1:n*fact(n-1);
}
int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		(fact(x)<10)?cout<<fact(x)<<"\n":cout<<fact(x)%10<<"\n";
	}
	return 0;
}