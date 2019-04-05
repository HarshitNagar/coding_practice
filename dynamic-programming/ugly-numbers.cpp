#include<iostream>
using namespace std;

pair<int, int> min(int a, int b, int c)
{
	if(a<=b && a<=c)
		return make_pair(a, 2);
	else if(b<=a && b<=c)
		return make_pair(b, 3);
	else
		return make_pair(c, 5);
}

int main()
{
	int i2, i3, i5;
	i2=0;i3=0;i5=0;
	//find the first n ugly numbers
	int n;
	cin>>n;
	int ugly[n];
	ugly[0]=1;
	for(int i=1; i<=n; i++)
	{
		pair<int, int> p = min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5);
		if(p.second == 2)
			i2++;
		else if(p.second == 3)
			i3++;
		else
			i5++;
		ugly[i]=p.first;//<<" ";
		cout<<ugly[i]<<" ";
	}
	return 0;
}
