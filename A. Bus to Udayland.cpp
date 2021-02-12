#include <iostream>
#include <string>


using namespace std;

int main()
{
	int n, t, test=0;
	
	cin>>t;
	
	n=t;
	string s[t];
	for(int i=0; i<t; i++)
	{
		cin>>s[i];
		
		if(s[i][0]=='O' && s[i][1]=='O' && test==0)
		{
			s[i][0]='+';
			s[i][1]='+';
			test=1;
		}
		else if(s[i][3]=='O' && s[i][4]=='O' && test==0)
		{
			s[i][3]='+';
			s[i][4]='+';
			test=1;
		}
	}
	
	if(test)
	{
		cout<<"YES"<<endl;
		for(int i=0; i<t; i++)
		{
			cout<<s[i]<<endl;
		}
	}
	else cout<<"NO"<<endl;
	
	return 0;
	
}
