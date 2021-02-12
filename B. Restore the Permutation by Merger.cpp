//http://codeforces.com/problemset/problem/1385/B

#include <iostream>

using namespace std;

int main()
{
	int t, n;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		int len=(n*2);
		
		int array[len], result[n+1], rand, counter=0;
		
		for(int i=0; i<len; i++)
		{
			array[i]=0;
		}
		
		for(int i=0; i<len; i++)
		{
			cin>>rand;
			
			if(array[rand]==0)
			{
				array[rand]=1;
				result[counter++]=rand;
			}
		}
		
		for(int i=0; i<n; i++) cout<<result[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
