#include<iostream>
using namespace std;
int getMax(int x, int y){
	return x>y?x:y;
}
int getMin(int x,int y){
	return x<y?x:y;
}
int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	int min = getMin(x,y);
	int max = getMax(x,y);
	for (int i = min; i <= max; ++i)
	{
		cout<<i+1<<endl;
	}
	return 0;
}