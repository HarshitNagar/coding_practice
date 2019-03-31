#include<iostream>
#include<string>
using namespace std;


string dest(string n)
{
	int flag=0;
		
	for(int i=0, j=1; i<n.length(); i++, j++)
	{
		if(n[i]>n[j])
		{
			//cout<<*(n.begin() + i)<<endl;
			n.erase(n.begin() + i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		n.erase(n.end());
		return n;
		//cout<<"A "<<n<<endl;
	}
	else
	{
		return n;
		//cout<<"B "<<n<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//unsigned long int n;
		//int d;
		string n;
		string d;
		cin>>n>>d;
		//n.append(d);
		string cp;
		//cout<<n<<endl;
		do
		{
			
			//cout<<"cp "<<endl;
			cp = n;
			n.append(d);
			//cout<<"func "<<endl;
			n = dest(n);
			//cout<<n;
		}while(cp!=n);

		cout<<n<<endl;
		
		
	
		
	}
	

	return 0;
}