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
	//it=a.begin();
	//sort(it, it+n);

	for(int i=0; i<m; i++)
	{
		cin>>temp;
		b.push_back(temp);	
	}
	//it=b.begin();
	//sort(it, it+m);

	int count=0;
	for(int i=0; i<n; i++)
	{
		if(count==n+m-1)
			break;
		//if(i>0 && a[i]==a[i-1])
		//	continue;
		for(int j=0; j<m; j++)
		{
			if(count==n+m-1)
				break;
			//if(j>0 && b[j]==b[j-1])
			//	continue;
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