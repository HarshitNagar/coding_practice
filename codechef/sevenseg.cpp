#include<iostream>
using namespace std;

struct digitdisp
{
	int numseg;
	int whichseg[7]={0};
};

int main()
{
	int t;
	cin>>t;
	digitdisp d[10];
	d[0].numseg=6;
	d[0].whichseg[0]=d[0].whichseg[1]=d[0].whichseg[2]=d[0].whichseg[3]=d[0].whichseg[4]=d[0].whichseg[5]=1;

	d[1].numseg=2;
	d[1].whichseg[2]=d[1].whichseg[3]=1;

	d[2].numseg=5;
	d[2].whichseg[1]=d[2].whichseg[2]=d[2].whichseg[6]=d[2].whichseg[5]=d[2].whichseg[4]=1;

	d[3].numseg=5;
	d[3].whichseg[4]=d[3].whichseg[3]=d[3].whichseg[2]=d[3].whichseg[1]=d[3].whichseg[6]=1;

	d[4].numseg=4;
	d[4].whichseg[0]=d[4].whichseg[6]=d[4].whichseg[2]=d[4].whichseg[3]=1;

	d[5].numseg=5;
	d[5].whichseg[1]=d[5].whichseg[0]=d[5].whichseg[6]=d[5].whichseg[3]=d[5].whichseg[4]=1;

	d[6].numseg=6;
	d[6].whichseg[6]=d[6].whichseg[5]=d[6].whichseg[4]=d[6].whichseg[3]=d[6].whichseg[1]=d[6].whichseg[0]=1;

	d[7].numseg=3;
	d[7].whichseg[1]=d[7].whichseg[2]=d[7].whichseg[3]=1;

	d[8].numseg=7;
	d[8].whichseg[0]=d[8].whichseg[1]=d[8].whichseg[2]=d[8].whichseg[3]=d[8].whichseg[4]=d[8].whichseg[5]=d[8].whichseg[6]=1;

	d[9].numseg=6;
	d[9].whichseg[0]=d[9].whichseg[1]=d[9].whichseg[2]=d[9].whichseg[3]=d[9].whichseg[4]=d[9].whichseg[6]=1;

	while(t--)
	{
		int n, x, y;
		cin>>n;
		if(n==1)
		{	
			cin>>x>>y;
			if(y>d[x].numseg)
				cout<<"invalid"<<endl;
			else
			{
				int min = d[x].numseg-y;
				int max = 7-y;
				cout<<min<<" "<<max<<endl;
			}
			
		}



	}
	
	return 0;
}