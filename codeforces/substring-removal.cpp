#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin, s);
	string a=s;
	char x;
	int count=0;

	for(int length=1; length<=n; length++)
	{
		//cout<<endl<<"length "<<length<<endl;
		for(int i=0; i+length<=n; i++)
		{
			//cout<<"flag=0"<<endl;
			int flag=0;
			a.erase(i, length);
			x=a[0];
			//cout<<"x "<<x<<endl;
			for(int k=1; k<a.length(); k++)
			{
				//cout<<"a[k] "<<a[k]<<endl;
				if(x!=a[k])
				{
					//cout<<"flag=1"<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				//cout<<"inc count"<<endl;
				count++;
			}
			//cout<<a<<endl;
			a=s;
			//cout<<"count "<<count<<endl<<endl;
		}
	}
	count=count%998244353;
	cout<<count;
	//cout<<endl<<&count<<endl;
	count=0;
	
	return 0;
	//cout<<"";
}