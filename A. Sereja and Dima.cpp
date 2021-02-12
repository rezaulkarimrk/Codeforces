//http://codeforces.com/problemset/problem/381/A

#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	int arr[n], l=0, r=n-1, sscore=0, dscore=0;
	
	for(int i=0; i<n; i++) cin>>arr[i];
	
	for(int i=0; i<n; i++)
	{
		if(i%2==0)
		{
			if(arr[r]>arr[l])
			{
				sscore+=arr[r];
				r--;
			}
			else if(arr[r]<arr[l])
			{
				sscore+=arr[l];
				++l;
			}
			else sscore+=arr[l];
		}
		else
		{
			if(arr[r]>arr[l])
			{
				dscore+=arr[r];
				r--;
			}
			else if(arr[r]<arr[l])
			{
				dscore+=arr[l];
				l++;
			}
			else dscore+=arr[l];
		}
	}
	
	cout<<sscore<<" "<<dscore<<endl;
	
	return 0;
}
