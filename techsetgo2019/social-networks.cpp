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