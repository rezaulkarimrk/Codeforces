//http://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
using namespace std;

int A[100], B[100];

int main()
{
	int t, n;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int number;
		for(int i=0; i<n; i++) cin>>A[i];
		
		sort(A, A+n);
		
		int temp;
		vector<int>v;
		for(int i=1; i<n; i++) v.push_back(A[i]-A[i-1]);
		
		sort(v.begin(), v.end());
		
		cout<<v[0]<<endl;
	}
	
	return 0;
	
}
