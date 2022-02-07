#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int sumDigit(int num){
	ostringstream str1;
	str1<<num;
	string s = str1.str();
	int total = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		total+=(s[i]-48);
	}
	return total;
}
int main(int argc, char const *argv[])
{
	int l,d,x,min,max;
	cin>>l>>d>>x;
	for (int i = l; i <= d; ++i)
	{
		if (sumDigit(i) == x)
		{
			min = i;
			break;
		}
		
	}
	for (int i = d; i >= l; --i)
	{
		if (sumDigit(i) == x)
		{
			max = i;
			break;
		}
		
	}
	cout<<min<<endl<<max;
	return 0;
}