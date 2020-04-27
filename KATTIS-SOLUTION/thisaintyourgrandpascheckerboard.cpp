#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int tw=0,tb=0;

	int cond1 = 0;
	bool cond2 = false;
	bool cond3 = true;

	int l = t;

	for(int j = 0 ;j <t;j++){
		

		string row;
		cin >> row;

		int b = 0,w= 0;
		
		
		for (int i = 0; i < l; ++i)
		{
			if (row[i] == 'W')
			{
				w++;
				tw++;
				
			}
			if (row[i] == 'B')
			{
				b++;
				tb++;

			}
		}
		// cout << "White in Row " << j + 1<< "  "<< w<< " Black in Row "<<j+1 <<" "<< b << " "<<(w == b )<<endl;

		if(w == b){
			cond1++;
		}

		

		if(row.find("WWW") != -1 || row.find("BBB") != -1){
				cond3 = false;
		}
		
		
	}
	if(tw == tb){
			cond2 = true;
	}
	// cout <<endl <<"Condition 1 "<< endl;
	// cout << "Condition 2 " << <<(cond1 == t) cond2 << endl;
	// cout << "condition 3 "<<cond3<<endl;
	
	if(cond1 == t and cond2 and cond3){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}