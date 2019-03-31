#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		int max=INT_MIN;
		
		for(int j=n-1; j>n-1-k; j--)
		{
			int sum=0;
			for(int i=j; i>=0; i-=k)
			{	
				sum+=arr[i];
				if(sum>max)
					max=sum;
			}
		}
		cout<<max<<endl;
		
	}
	return 0;
}