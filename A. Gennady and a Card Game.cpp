//http://codeforces.com/problemset/problem/1097/A

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	string x, s;
	
	cin>>s;
	
	for(int i=0; i<5; i++)
	{
		cin>>x;
		if(s[0]==x[0] || s[1]==x[1])
		{
			cout<<"YES"<<endl;
			
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}
