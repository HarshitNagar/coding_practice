#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, a, b, temp;
		cin>>n>>b>>a;
		vector<int>v;
		vector<int>ar;
		vector<int>br;
		vector<int>cr;
		string winner = "NONE";

		for(int i=0; i<n; i++)
		{
			cin>>temp;
			v.push_back(temp);

			if(temp%a==0 && temp%b==0)
				cr.push_back(temp);

			else if(temp%a==0)
				ar.push_back(temp);

			else if(temp%b==0)
				br.push_back(temp);
		}
		int num_cr=cr.size();
		int num_ar=ar.size();
		int num_br=br.size();

		if(num_ar==num_br && num_cr!=0)
			winner = "BOB";
		else if(num_ar==num_br && num_cr==0)
			winner="ALICE";
		else if(num_ar>num_br && num_cr==0)
			winner="ALICE";
		else if(num_ar<num_br && num_cr==0)
			winner="BOB";
		else if(num_ar>num_br && num_cr!=0)
			winner="ALICE";
		else if(num_ar<num_br && num_cr!=0)
			winner="BOB";

		cout<<winner<<endl;



	}
}