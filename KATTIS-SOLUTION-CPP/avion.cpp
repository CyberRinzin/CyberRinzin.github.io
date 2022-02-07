#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	bool printed = false;
	for (int i = 1; i < 6; ++i)	{
		string input,FBI = "FBI";
		cin >> input;
		if(input.find(FBI) != -1){
			cout << i <<" ";
			printed = true;
		}
	}
	if(!printed) cout << "HE GOT AWAY!";
	return 0;
}