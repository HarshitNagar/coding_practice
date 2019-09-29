#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	double n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int flag=0;
		double arr[int(n)];
		double sum=0.0;
		for(int i=0; i<int(n); i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		//sort(arr, arr+int(n));

		double avg = sum/n;

		for(int i=0; i<int(n); i++)
		{
			if((sum-arr[i])/(n-1) == avg)
			{
				cout<<i+1<<endl;
				flag=1;
				break;
			}	
		}
		if(flag==0)
			cout<<"Impossible"<<endl;

	}
	return 0;
}