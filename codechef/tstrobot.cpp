#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		unordered_map<int, int>visited;
		unordered_map<int, int>::iterator it;

		int n, x;
		cin>>n>>x;

		visited.insert(make_pair(x, 1));
		//visited[x]=1;
		int cnt=1;
		string s;
		cin>>s;
		for(int i=0; i<n; i++)
		{
			if(s[i]=='L')
			{
				x=x-1;
				it = visited.find(x);

				if(it==visited.end())
				{
					cnt++;
					visited.insert(make_pair(x, 1));
				}	
			}
			else if(s[i]=='R')
			{
				x=x+1;
				it = visited.find(x);

				if(it==visited.end())
				{
					cnt++;
					visited.insert(make_pair(x, 1));
				}
			}
		}
		cout<<cnt<<endl;
		visited.erase(visited.begin(), visited.end());
		
	}
	return 0;
}