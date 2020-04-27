#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,w,h,x;
	cin>>n>>w>>h;
	while(n--){
		cin>>x;
		(x<=w||x<=h||x<=(sqrt(h*h+w*w)))?cout<<"DA"<<endl:cout<<"NE"<<endl;
	}
	return 0;
}