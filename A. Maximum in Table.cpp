// http://codeforces.com/problemset/problem/509/A


#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	int ar[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j==0 || i==0)
			{
				ar[i][j]=1;
			}
			else ar[i][j]=ar[i-1][j]+ar[i][j-1];
		}
	}
	
	cout<<ar[n-1][n-1]<<endl;
	
	return 0;
}
