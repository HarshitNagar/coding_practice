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
		int sump=0;
		int sumn=0;
		int temp;
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			if(temp<0)
				sumn++;
			else
				sump++;
		}
		if(sumn == 0)
			cout<<sump<<" "<<sump<<endl;
		else if(sump<sumn)
			cout<<sumn<<" "<<sump<<endl;
		else
			cout<<sump<<" "<<sumn<<endl;

	}
}