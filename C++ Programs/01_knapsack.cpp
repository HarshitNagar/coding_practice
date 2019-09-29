#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int n;
	    int w;
	    cin>>n>>w;
	    vector<int>values(n);
	    vector<int>weights(n);
	    for(int i=0; i<n; i++)
	    {
	        cin>>values[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin>>weights[i];
	    }
	    vector<vector<int>>m(n+1, vector<int>(w+1, 0));
	    
	    for(int i=1; i<n+1; i++)
	    {
	        for(int j=1; j<w+1; j++)
	        {
	            if(weights[i-1]>j)
	            {
	                m[i][j] = m[i-1][j];
	            }
	            else
	            {
	                m[i][j] = max(values[i-1]+m[i-1][j-weights[i-1]], m[i-1][j]);
	            }
	        }
	    }
	    cout<<m[n][w]<<endl;
	}
	return 0;
}