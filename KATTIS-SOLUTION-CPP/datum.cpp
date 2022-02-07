#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> v = 

	{"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    tm time = {};

    cin >> time.tm_mday;
    cin >> time.tm_mon;
    time.tm_mon--;
    time.tm_year = 2009;

    mktime(&time);

    cout << v[time.tm_wday] << endl;
}