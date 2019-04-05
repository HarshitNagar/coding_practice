#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}

vector<vector<int> > knapsack(int W, int weight[], int val[], int n)
{
    //cout<<"in func";
	vector<vector<int> > k;
	k.resize(n+1, vector<int>(W+1));

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=W; j++)
		{
			if(j==0 || i==0)
				k[i][j]=0;
			else
			{
				if(weight[i-1]<=j)
				{
					k[i][j]=max(weight[i-1] + k[i-1][j-weight[i-1]], k[i-1][j]);
				}
				else
				{
					k[i][j]=k[i-1][j];
				}
			}
		}
	}
	//cout<<"returninng";
	return k;
	
}

int main()
{
	int n = 4; //number of items
	//cout<<"enter the number of items";
	//cin>>n;
	//cout<<"enter the weight limit of knapsack";
	int W = 7; //knapsack weight capacity
	//cin>>W; 
	int val[] = {1, 4, 5, 4}; //value of the n items 
	int weight[] = {1, 3, 4, 5}; //weight of each of n items

	//cout<<"enter the weight and values for each item";
	/*
	for(int i=0; i<n; i++)
	{
		cin>>weight[i]>>val[i]; 	
	}
	*/

	vector<vector<int> > v=knapsack(W, weight, val, n);
	cout<<"printing"<<endl;
	    for(int i=0; i<=n; i++)
	    {
	    	for(int j=0; j<=W; j++)
	    	{
	    		cout<<v[i][j]<<" ";
	    	}
	    	cout<<endl;
	    }
	

}
