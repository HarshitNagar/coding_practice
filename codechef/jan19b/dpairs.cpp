#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
	int n, m, temp;
	cin>>n>>m;
	vector<int>a;
	vector<int>b;
	vector<int>::iterator it;
	unordered_map<int, pair<int, int>>map;
	unordered_map<int, pair<int, int>>::iterator gt;
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		b.push_back(temp);	
	}
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(count==n+m-1)
			break;
		for(int j=0; j<m; j++)
		{
			if(count==n+m-1)
				break;
			int sum = a[i]+b[j];
			if(map.find(sum)==map.end())
			{
				map[sum]=make_pair(a[i], b[j]);
				count++;
				cout<<i<<" "<<j<<endl;
			}

				
		}
	}
	//cout<<count;
	
	
}