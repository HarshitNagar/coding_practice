#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int n;
		cin>>n;
		int arr[n];
		int k=1;
		arr[0]=1;
		for(int i=1; i<n; i++)
		{
			arr[i]=arr[i-1]+k;
			k++;
			cout<<arr[i-1]<<" ";
		}
		cout<<arr[n-1];
		cout<<endl;
		int _n=n;
		for(int i=0; i<n-1; i++)
		{
			for(int j=0; j<n-1; j++)
			{
				cout<<arr[j+1]+1<<" ";
				arr[j]=arr[j+1]+1;
			}
			cout<<arr[n-1]+_n<<endl;
			arr[n-1]=arr[n-1]+_n;
			_n--;
		}
	}

}

/*
int main()
{
	int n, temp;
	cin>>n;
	vector<int>v;
	vector<int>::iterator it;
	cout<<"entering numbers"<<endl;
	int t=1;
	for(it=v.begin(); it!=v.end(); it++)
	{
		v.push_back(t++);
	}
	cout<<"printing"<<endl;
	for(it=v.begin(); it!=v.end(); it++)
	{
		cout<<"hello";
		cout<<*it<<" ";
	}
	for(int p=0; p<n; p++)
	{
		int k=0, m=0;
		for(it=v.begin(); k<n; it+=k)
		{
			cout<<*it<<" ";
			k+=m;
			m++;
			v.erase(it);
			it=v.begin();
		}
		cout<<endl;
	}
	
}
*/