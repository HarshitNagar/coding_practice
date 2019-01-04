#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

vector<vector<int>> knapsack(int W, int weight[], int val[], int n)
{
    //cout<<"in func";
    int i, j;
	vector<vector<int>> k;
	k.resize(n+1, vector<int>(W+1));

	for(i=0; i<=n; i++)
	{
		for(j=0; j<=W; j++)
		{
			if(i==0 || j==0)
				k[i][j]=0;
			else if(weight[i-1]<=j)
				k[i][j]=max(val[i-1]+k[i-1][j-weight[i-1]], k[i-1][j]);
			else
				k[i][j]=k[i-1][j];
		}
	}
	//cout<<"returninng";
	return k;
	
}

int main()
{
	int n; //number of items
	cin>>n;
	int W=0; //knapsack capacity
	int val[n];
	int weight[n];

	for(int i=0; i<n; i++)
	{
		cin>>weight[i]>>val[i];
		W+=weight[i]; 	
	}
	//cout<<"inputs read"<<endl;

	vector<vector<int>> v=knapsack(W, weight, val, n);
	
	    for(int j=1; j<=W; j++)
	    {
	        cout<<v[n][j]<<" ";
	        //cout<<"yo";
	    }
	

}