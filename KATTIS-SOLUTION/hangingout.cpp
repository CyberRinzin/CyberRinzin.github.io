#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int l,x;
	cin >> l >> x;
	
	string comand;
	int size;
	int total = l, current = 0, denied = 0;

	while(x--){
		cin >> comand >> size;
		if(comand == "enter"){
			if( current + size > total) {
				denied++;
			}else {
				current += size;
			}			
		}
		if(comand == "leave") {
			current -= size;	
		}
	}
	cout << denied;
	return 0;
}