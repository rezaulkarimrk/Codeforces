//http://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string x;
		
		cin>>x;
		int ans=0;
		string s;
		 
		for(int j=1; j<=9; j++)
		{
		 
			for(int i=1; i<=4; i++)
			{
		 		s+=j+'0';
		 		ans+=s.size();
		 		
		 		if(s==x) goto here;
		 	}
		 	
		 	s="";
		 }
		 
		 here:
		 cout<<ans<<endl;
	}
	
	return 0;
}
