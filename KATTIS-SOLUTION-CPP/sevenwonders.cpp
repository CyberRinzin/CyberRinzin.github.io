#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int C = 0, G = 0, T = 0,setpoints = 0;
	for (int i = 0; s[i]; ++i)
	{
		if (s[i]=='T')
		{
			T++;
		}
		if (s[i]=='G')
		{
			G++;
		}
		if (s[i]=='C')
		{
			C++;
		}
	}
	if (C >= 1 && G >= 1 && T >= 1)
	{
		if (C<G)
		{
			if(C<T){
				setpoints = C;
			}else{
				setpoints = T;
			}
		}else{
			if (G<T)
			{
				setpoints = G;
			}else{
				setpoints = T;
			}
		}
	}
	cout<<pow(G,2)+pow(C,2)+pow(T,2)+setpoints*7;
	return 0;
}