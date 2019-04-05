/*
given a rod of length 'n' and
the sizes of pieces into which the rod can be cut and 
the profit associated with each piece size

find the way to cut the rod of length 'n' such that 
the profit is maximized.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cout<<"enter the number of test cases> ";
	cin>>t;
	cout<<endl;
	while(t--)
	{
		int n;
		cout<<"enter the length of the rod> ";
		cin>>n;
		cout<<endl;
		cout<<"enter the number of possible lengths of the pieces> ";
		int sizes;
		cin>>sizes;
		cout<<endl;
		//int sizes=3;

		int x[sizes+1][2];
		x[0][0]=x[0][1]=0;

		for(int i=1; i<=sizes; i++)
		{
			cout<<"enter <piece length> <profit> :";
			cin>>x[i][0]>>x[i][1];
			cout<<endl;
		}

		int mat[sizes+1][n+1];

		for(int i=0; i<=n; i++)
		{
			mat[0][i]=0;
		}
		for(int i=0; i<=sizes; i++)
		{
			mat[i][0]=0;
		}



		for(int i=1; i<=sizes; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(x[i][0]>j)
				{
					mat[i][j]=mat[i-1][j];
				}
				else
				{
					mat[i][j]=max(mat[i-1][j],  x[i][1]+mat[i][j-x[i][0]]);
				}
			}	
		}
		cout<<"memoization matrix is as follows:"<<endl;
		for(int i=0; i<=sizes; i++)
		{
			for(int j=0; j<=n; j++)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}



	}
	return 0;
}