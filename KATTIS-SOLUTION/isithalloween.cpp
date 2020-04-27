#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string month;
	int date;
	cin>>month>>date;
	((month=="DEC"&&date == 25)||(month=="OCT" && date == 31))?cout<<"yup"<<endl:cout<<"nope"<<endl;
	return 0;
}