#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
	int n, q;
	cin>>n>>q;

	vector<int>f;
	vector<int>s;
	int val;
	int x;

	cin>>val;
	f[0]=val;
	x=val;
	s[0]=val;
	for(int i=1; i<n; i++)
	{
		cin>>val;
		f.push_back(val);
		x=x^val;
		s[i]=s[i-1]^f[i];
		cout<<"a";
	}

	int quer[q];
	int max=INT_MIN;
	for(int i=0; i<q; i++)
	{
		cin>>val;
		quer[i]=val;
		if(val>max)
			max=val;
		cout<<"b";
	}

	int head=0;
	int top=n;
	for(int i=n; i<=max; i++)
	{
		f.push_back(x);
		s[i]=s[i-1]^f[i];
		x=x^f[head];
		x=x^f[top];
		head++;
		top++;
		cout<<"c";
	}

	for(int i=0; i<q; i++)
	{
		cout<<s[quer[i]]<<endl;
	}

	





	


	return 0;
}
