//

#include <iostream>

using namespace std;

int main()
{
	int t, w, h, n, sheet;
	
	cin>>t;
	
	while(t--)
	{
		sheet=1;
		cin>>w>>h>>n;
		
		while(!(w&1))
		{
			w/=2;
			sheet*=2;
		}
		
		while(!(h&1))
		{
			h/=2;
			sheet*=2;
		}
		
		if(sheet>=n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
