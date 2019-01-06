#include<iostream>
#include<unordered_map>

using namespace std;

struct point
{
	int x;
	int y;
};


int main()
{
	int n;
	cin>>n;

	point obe[n];
	point vec[n];
	point tres;

	unordered_map<int, int>m;
	unordered_map<int, int>::iterator it;

	for(int i=0; i<n; i++)
	{
		cin>>obe[i].x;
		cin>>obe[i].y;
	}

	for(int i=0; i<n; i++)
	{
		cin>>vec[i].x;
		cin>>vec[i].y;
	}

	for(int k=0; k<n; k++)
	{
		tres.x=obe[0].x+vec[k].x;
		tres.y=obe[0].y+vec[k].y;


		for(int i=1; i<n; i++)
		{
			int flag=1;
			for(int j=0; j<n; j++)
			{
				if(j==k)
					continue;
				if(obe[i].x+vec[j].x == tres.x && obe[i].y+vec[j].y == tres.y && m.find(j)==m.end())
				{
					flag=0;
					m.insert(make_pair(j,j));
					break;
				}
			}
			if(flag==1)
				break;
		}
	}
	cout<<tres.x<<" "<<tres.y;

}

