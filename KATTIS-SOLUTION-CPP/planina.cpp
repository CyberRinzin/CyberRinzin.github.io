#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int power;
	cin>>power;
	int temp = pow(2,power)+1;
	cout<<temp*temp;
	return 0;
}