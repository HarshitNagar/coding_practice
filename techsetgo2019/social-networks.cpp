/*
A social network consists of multiples of a digit
and the numbers sharing any common multiples.
Given a number n, then all numbers from 2 to n+1
are available to form networks. Return the number
of social networks formed.
Eg: if n=5, array is <2,3,4,5,6>
groups are <2,4,6,3> <5> {4, 6 are multiples of 2 
and 3 shares 6 as the common multiple with 2 so it
is also a part of 2's group. 5 forms a separate 
group}
*/
#include<iostream>

using namespace std;

int num_social_networks(int n)
{
	int bin[n+2]={0};
	int count=0;
	//int pointer=2;
	for(int pointer=2; pointer<n+2; pointer++)
	{
		int flag=0;
		if(bin[pointer]==0)
		{
			count++;
			bin[pointer]=count;
			for(int i=pointer*2; i<n+2; i+=pointer)
			{
				if(bin[i]>0 && flag==0)
				{
					count--;
					flag=1;
				}
				else
				{
					bin[i]=count;
				}
			}

		}
	}
	return count;
}

int main()
{
	int n=4;
	cout<<num_social_networks(n);
	return 0;
}