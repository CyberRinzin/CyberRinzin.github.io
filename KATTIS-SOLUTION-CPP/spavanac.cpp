#include<iostream>
using namespace std;
int main(){
	int h,m;
	//0 30
	cin>>h>>m;
	m -= 45; // 30-45 = -15
    if (m < 0) {
        m += 60; // -15+60 = 45
        --h; // -1
        if (h < 0) {
            h += 24; // -1+24 = 23
        }
    }
    cout<<h<<" "<<m;
	return 0;
}