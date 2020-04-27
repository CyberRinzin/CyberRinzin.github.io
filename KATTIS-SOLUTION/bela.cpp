#include<iostream>
#include<string>
using namespace std;
int point(string card,char suit){
	
	if (card[0]=='J' || card[0] == '9')
	{	
		if (card[0]=='J')
		{
			if(card[1]==suit) return (20);else return (2);		
		}
		if (card[0]=='9')
		{
			if(card[1]==suit) return (14); else return (0);	
		}
	}else{
		switch(card[0]){
			case 'A':
				return (11);
			case 'K':
				return (4);
			case 'Q':
				return (3);
			case 'T':
				return (10);
			case '8':
			case '7':
				return (0);
		}	
	}
	
}
int main(int argc, char const *argv[])
{
	int t;
	char s;
	int total = 0;
	string card;
	cin>>t>>s;

	for (int i = 0; i < t*4; ++i)
	{
		cin>>card;
		total +=point(card,s);
	}
	cout<<total<<endl;
	return 0;
}