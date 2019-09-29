#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

//xyabcde 5
//   bcdeqw

int merge(string a, string b, char start)
{
	if(a.length()>=b.length())
	{
		for(int i=a.length()-b.length(); i<a.length(); i++)
		{
			if(a[i]==start)
			{
				int j=0, k=i, common=0;
				while(k<a.length() && a[k]==b[j])
				{
					k++; j++; common++;
				}
				if(k==a.length())
				{
					//cout<<"a  "<<a.length()+b.length()-j;
					return a.length()+b.length()-j;
				}

			}
		}
	}
	else//a<b
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]==start)
			{
				int j=0, k=i, common=0;
				while(k<a.length() && a[k]==b[j])
				{
					k++; j++; common++;
				}
				if(k==a.length())
				{
					//cout<<"b  "<<a.length()+b.length()-j<<endl;
					return a.length()+b.length()-j;
				}

			}
		}
	}

	//cout<<"c  "<<a.length()+b.length()<<endl;
	return a.length()+b.length();
	
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases;
	cin>>cases;

	while(cases--)
	{
		string a, b, a_rev, b_rev;
		cin>>a;
		cin>>b;
		//cout<<a-b;
		
		a_rev = a;
		b_rev = b;
		reverse(a_rev.begin(), a_rev.end());
		reverse(b_rev.begin(), b_rev.end());
		//cout<<a.length()<<b.length()<<endl;

		//cout<<endl<<merge(a, b, b[0]);
		cout<<min( min(merge(a, b, b[0]), merge(a_rev, b, b[0])), merge(a, b_rev, b_rev[0]));
		
	}

	return 0;
}