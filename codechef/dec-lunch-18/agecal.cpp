#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int age_in_days=0;
		int days_in_month[n];
		int days_in_year=0;
		int days_in_lear=0;
		for(int i=0; i<n; i++)
		{
			cin>>days_in_month[i];
			days_in_year+=days_in_month[i];
		}
		int days_in_last_month=days_in_month[n-1];

		days_in_lear=days_in_year+1;
		//cout<<"lear "<<days_in_lear<<endl;
		int yb, mb, db;
		cin>>yb>>mb>>db;
		int yc, mc, dc;
		cin>>yc>>mc>>dc;
		int i,k,j,p,q;

		for(i=yb; i<=yc; i++)
		{
			if(i%4==0)
				days_in_month[n-1]+=1;
			else
				days_in_month[n-1]=days_in_last_month;

			if(i==yb)
				j=mb;
			else
				j=1;

			if(i==yc)
				p=mc;
			else
				p=n;

			for(; j<=p; j++)
			{
				if(j==mb && i==yb)
					k=db;
				else
					k=1;

				if(j==mc && i==yc)
					q=dc;
				else
					q=days_in_month[j-1];

				for(; k<=q; k++)
				{
					age_in_days++;

				}
				
			}
			//cout<<age_in_days<<" ";
		}

		cout<<age_in_days<<endl;

	}
}