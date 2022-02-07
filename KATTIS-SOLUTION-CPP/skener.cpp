#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int r,c,zr,zc;
	cin >> r >> c >> zr >> zc ;
	char art[r][c];
	for (int i = 0; i < r; ++i)
	{	
		for (int j = 0; j < c ; ++j)
		{
			cin >> art[i][j];
		}
	}

	std::vector<char> v;
	
	for (int i = 0; i < r; ++i)
	{	
		for (int j = 0; j < c ; ++j)
		{
			for(int k = 0; k < zc ; k++){
				
				cout << art[i][j];
				v.push_back(art[i][j]);
							
			}
			
		}
		
		if(zr > 1){
			cout<<endl;
			for (int i = 1; i < zr; ++i)
			{
				for(auto j : v){
					cout << j;
				}
				
			}
		}
		v.clear();
		cout<<endl;
	}
	return 0;
}