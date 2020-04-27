#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);

		// cout<<s<<endl;
		
		int length = s.length();
		int root = sqrt(length);
		int size;

		// cout << "length "<<length <<endl;
		// cout << "root "<<root<<endl;
		
		if(pow(root,2) == length){
			size = root;
		}else{
			size = root + 1;
		}
		
		// cout << "size "<<size<<endl;
		
		int n = size - 1;
		char x[size][size];
		char y[size][size];

		int index = 0;
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if((s[index] >= 97 && s[index] <= 122) || (s[index] >= 65 && s[index] <= 90)){
					x[i][j] = s[index];
					// cout << "inserted " << x[i][j] << endl;
				}
				else{
					x[i][j] = '*';
					// cout << "inserted " << x[i][j] << endl;
				}
				index ++;
			}	
		}

		for (int i = 0,j = n; i < size; ++i,--j)
		{
			for(int k = 0; k < size ;++k){
				y[k][j] = x[i][k];
				// cout << "["<< k <<"]" << "["<< j <<"]"<< "["<< i <<"]"<< "["<< k <<"]" <<endl;
				// cout << "swaped " << y[k][j] << endl;

			}
		}
		for (int i = 0; i < size; ++i)
		{
			/* code */
			for (int j = 0; j < size; ++j)
			{
				/* code */
				if( y[i][j] != '*')
					cout << y[i][j];
			}
		}
	}
	
	return 0;
}

