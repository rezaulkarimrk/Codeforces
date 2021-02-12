//http://codeforces.com/contest/1485/problem/A

#include <iostream>

using namespace std;

int main()
{
	int a, b, counter=0, t;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		while(a)
		{
			counter++;
			a/=b;
			b+=1;
		}
		
		cout<<counter<<endl;
	}
	return 0;
}
