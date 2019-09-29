#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	int arr[n][2];
	arr[0][0]=0;
	arr[0][1]=0;
	if(str[0]=='0')
	{
		arr[0][0]=1;
	}
	if(str[0]=='1')
	{
		arr[0][1]=1;
	}

	for(int i=1; i<n; i++)
	{
		if(str[i]=='0')
		{
			arr[i][0]=arr[i-1][0]+1;
			arr[i][1]=arr[i-1][1];

		}
		else
		{
			arr[i][1]=arr[i-1][1]+1;
			arr[i][0]=arr[i-1][0];
		}
	}

		int one = arr[n-1][1];
		int zero = arr[n-1][0];
		if(one!=zero)
		{	
			cout<<1<<endl;
			cout<<str<<endl;
		}

		else
		{
			string a, b;
			cout<<2<<endl;
			for(int i=0; i<n; i++)
			{
				if(arr[i][0]!=arr[i][1] && zero-arr[i][0]!=one-arr[i][1])
				{
					string k(1, str[i]);
					a.append(k);
					cout<<a<<" ";
					for(int j=i+1; j<n; j++)
					{
						cout<<str[j];
					}
					cout<<endl;
					//cout<<"breaking "<<endl;
					break;
				}
				else
				{
					string k(1, str[i]);
					a.append(k);
				}
			}
		}
	
	return 0;
}