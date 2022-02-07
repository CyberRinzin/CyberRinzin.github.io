#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string pink = "pink",rose = "rose";
	int testcase,count = 0,pinkcount = 0;
	cin >> testcase;
	while(--testcase){
		string input;
		cin >> input;
		transform(input.begin(),input.end(),input.begin(),::tolower);
		if((input.find(pink) != -1) || (input.find(rose) != -1)){
			if(input.find(pink) != -1)
				pinkcount++;
			count++;
		} 
	}
	cin.ignore();
	if (count == 0 || pinkcount == 0)
	{
		cout<<"I must watch Star Wars with my daughter";
	}else{
		cout<<count;
	}
	return 0;
}