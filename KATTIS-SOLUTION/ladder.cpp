#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int opp,height,angle;
	cin >> height >> angle;
	opp = ceil(height/sin(angle*M_PI/180));
	cout << opp << endl;
	return 0;
}