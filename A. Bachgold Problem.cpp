//http://codeforces.com/problemset/problem/749/A

#include <iostream>

using namespace std;

int main()
{
	int n, sum=0, two=0, three=0, counter=0, prime[1000];
	
	cin>>n;

	sum=n;
	
	while(sum)
	{
		sum-=2;
		
		if(sum==1) break;
		
		counter++;
	}
	if(sum) cout<<counter+1<<endl;
	else cout<<counter<<endl;
	two=counter;
//	cout<<two<<endl;
	for(int i=1; i<=two; i++)
	{
		cout<<"2 ";
	}
	
	if(sum)
	{
		cout<<"3 ";
	}
	
	cout<<endl;
	
	return 0;
}
