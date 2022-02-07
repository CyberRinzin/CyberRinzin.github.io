#include<bits/stdc++.h>

using namespace std;

int main(){
	long numerator,denominator;
	while(cin >> numerator >> denominator && numerator != 0 && denominator != 0 ){
		if(numerator < denominator){
			cout << "0 " << numerator << " / "  << denominator << "\n";
		}else{
			cout << numerator/denominator << " "<< numerator%denominator << " / " << denominator << "\n";
		}
	}
	return 0;
}