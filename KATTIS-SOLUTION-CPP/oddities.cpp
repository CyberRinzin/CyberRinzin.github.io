#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		if (x==0)
		{
			cout<<x<<" is even"<<endl;
		} else if (x==1)
		{
			cout<<x<<" is odd"<<endl;
		}else{
			x%2==0?cout<<x<<" is even"<<endl:cout<<x<<" is odd"<<endl;	
		}
		
	}
	return 0;
}