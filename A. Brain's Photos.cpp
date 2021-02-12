//http://codeforces.com/problemset/problem/707/A

#include <iostream>

using namespace std;

int main()
{
	int m, n, root=0;
	char ch;
	
	cin>>m>>n;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>ch;
			
			if(ch=='B' || ch=='G' || ch=='W') root=1;
			else
			{
				root=0;
				break;
			}
		}
		if(root==0) break;
	}
	
	if(root) cout<<"#Black&White"<<endl;
	else cout<<"#Color"<<endl;
	
	return 0;
}
