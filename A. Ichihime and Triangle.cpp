//A. Ichihime and Triangle
//http://codeforces.com/problemset/problem/1337/A
#include <iostream>

using namespace std;

int main()
{
	int x=0, y=0, z=0, a, b, c, d, t;
	
	cin>>t;
	here:
	while(t--)
	{
		cin>>a>>b>>c>>d;
		x=0;
		y=0;
		z=d;
		
		x=a+b;
		
		if(x<c)
		{
			x=b+c;
			
			if(x<d)
			{
				x=b;
				y=c;
			}
			else x/=2;
		}
		
		if(y==0)
		{
			y=b+c;
			if(y<d || y<x)
			{
				y=(c+d)/2;
				if(y<x) y=c;
				
			}
			else y/=2;
			
		}
		
		if(x)
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	
	return 0;
}
