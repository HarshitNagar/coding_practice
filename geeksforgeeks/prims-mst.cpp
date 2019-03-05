#include<iostream>
#include<climits>
using namespace std;
#define V 5

int minval(int value[V], int mset[V])
{
	int min = INT_MAX;
	int min_index;
	for(int i=0; i<V; i++)
	{
		if(!mset[i] && value[i]<min)
			min=value[i], min_index=i;
	}
	return min_index;
}

void primsmst(int graph[V][V])
{
	int mset[V];

	int parent[V];

	int value[V];
	

	for(int i=0; i<V; i++)
	{
		value[i]=INT_MAX;
		mset[i]=0;
	}

	parent[0]=-1;
	value[0]=0;

	for(int i=0; i<V; i++) //why V-1 fuckers?
	{
		int u = minval(value, mset); 

		mset[u]=1;

		for(int j=0; j<V; j++)
		{
			if(graph[u][j] && graph[u][j]<value[j] && !mset[j])
			{
				parent[j]=u;
				value[j]=graph[u][j];
			}
		}

	}
	for(int i=0; i<V; i++)
		cout<<parent[i]<<" ";
	cout<<endl;
	for(int i=0; i<V; i++)
		cout<<value[i]<<" ";
	cout<<endl;

	
}

int main()
{
	int graph[V][V]=
	{
	{0, 2, 0, 6, 0},
	{2, 0, 3, 8, 5},
	{0, 3, 0, 0, 7},
	{6, 8, 0, 0, 9},
	{0, 5, 7, 9, 0}
	};

	primsmst(graph);
}