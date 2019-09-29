#include<iostream>
#include<algorithm>
using namespace std;


int flag = 0;

void check(int *arr, int left, int ele, int right)
{
	if(*(arr+ele)>=*(arr+left)+*(arr+right))
	{
		int temp = *(arr+ele);
		*(arr+ele)=*(arr+left);
		*(arr+left)=temp;
	}
	else
	{
		cout<<"YES"<<endl;
		flag=1;
	}
	
}



int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);

	if(arr[n-1]<arr[0]+arr[n-2])
	{
		cout<<"YES"<<endl;
		for(int i=0; i<n; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	else
	{

		for(int i=n-1; i>=0; i--)
		{
			if(i==n-1)
				check(&(arr[0]), n-2, n-1, 0);
			else if(i==0)
				check(&(arr[0]), n-1, 0, 1);
			else
				check(&(arr[0]), i-1, i, i+1);
			if(flag==1)
			{
				for(int p=0; p<n; p++)
				{
					cout<<arr[p]<<" ";
				}
				cout<<endl;
				return 0;
			}
		}
		cout<<"NO"<<endl;
	}
}