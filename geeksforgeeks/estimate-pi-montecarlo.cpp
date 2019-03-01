#include<iostream>
#include<random>
#include<cmath>
using namespace std;

int main()
{
	float x, y;
	random_device rd;
	mt19937 eng(rd());
	uniform_real_distribution<>distr(-1, 1);
	long total_pnts=999999;
	int inside_pnts=0;
	int r=1;
	for(long i=0; i<total_pnts; i++)
	{
		x=distr(eng);
		y=distr(eng);
		cout<<x<<" "<<y<<endl;
		if(sqrt(x*x + y*y) <=1)
			inside_pnts++;
	}
	cout<<4*inside_pnts/float(total_pnts);

	return 0;
}
