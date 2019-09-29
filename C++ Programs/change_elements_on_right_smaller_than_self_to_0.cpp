#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

vector<int> change(vector<int>arr, set<int>qrr, int n, int q)
{
	set<int>::iterator it;
	
		for(it=qrr.begin(); !qrr.empty() && it!=qrr.end(); it++)
		{
			int pos = *it;
			qrr.erase(it);
			//cout<<pos<<" ";
			for(int i = pos+1; i<arr.size(); i++)
			{
				//cout<<"i "<<i<<endl;
				if(arr[i]<arr[pos])
				{
					//cout<<"arr[i] "<<arr[i]<<endl;
					arr[i] = 0;	
					if(qrr.find(i)!=qrr.end())
					{
						qrr.erase(qrr.find(i));

					}
				}
			}
		}
	
	return arr;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases;
	cin>>cases;

	while(cases--)
	{
		int n, q;
		cin>>n>>q;
		vector<int>arr(n);
		set<int>qrr;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		for(int i=0; i<q; i++)
		{
			int temp;
			cin>>temp;
			qrr.insert(temp);
		}


		vector<int>sol = change(arr, qrr, n, q);
		
		for(int i=0; i<n; i++)
		{
			cout<<sol[i]<<" ";
		}

		cout<<endl;
		
	}

	return 0;
}