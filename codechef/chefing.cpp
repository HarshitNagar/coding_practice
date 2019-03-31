#include<iostream>
using namespace std;
#define LENGTH 26



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int n=N;
		int arr[LENGTH]={0};
		int k=0;
		while(n--)
		{
			string s;
			cin>>s;
			int len=s.length();
			for(int i=0; i<len; i++)
			{
				if(arr[int(s[i])-97]==k)
					arr[int(s[i])-97]++;
				// cout<<s[i];
			}
			k++;
		}
		for(int i=0; i<26; i++)
		{
			//if(arr[i]==N)
				cout<<arr[i];

		}
		cout<<endl;
		/*
		int count=0;
		for(int i=0; i<N; i++)
		{
			if(arr[i]==N)
				count++;

		}
		cout<<count<<endl;
		*/

	}
}