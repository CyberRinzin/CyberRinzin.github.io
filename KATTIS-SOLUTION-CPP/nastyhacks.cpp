#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,r,e,c;
	cin>>n;
	while(n--){
		cin>>r>>e>>c;
		if(r<(e-c)){
			cout<<"advertise"<<endl;
		}
		else if (r==e-c){
			cout<<"does not matter"<<endl;
		}
		else{
			cout<<"do not advertise"<<endl;
		}
	}
	return 0;
}