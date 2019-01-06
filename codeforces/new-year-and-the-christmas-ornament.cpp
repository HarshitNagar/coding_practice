#include<iostream>
using namespace std;

int main()
{
	int y,b,r;
	cin>>y>>b>>r;
	for(; y>=0; y--)
	{
		if((y+1<=b) && (y+2<=r))
		{
			cout<<3*y+3;
			break;
		}
	}
	//y<b<r


}