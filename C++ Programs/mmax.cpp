#include<iostream>
using namespace std;
#define ll long long
#define ul unsigned long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ul n;
		ul k;
		cin>>n>>k;

		ul cand_to_rem = k/n;
		//cout<<"cand_to_rem "<<cand_to_rem<<endl;
		ul num = k%n;
		//cout<<"num "<<num<<endl;
		ul cand_to_num = cand_to_rem+1;
		//cout<<"cand_to_num "<<cand_to_num<<endl;
		ul rem = n-num;
		if(num<rem)
		{
			cout<<num*2<<endl;

		}
		else if(num>rem)
		{
			cout<<(rem)*2<<endl;
		}
		else
		{
			cout<<(num*2)-1<<endl;
		}
	}
	return 0;
}