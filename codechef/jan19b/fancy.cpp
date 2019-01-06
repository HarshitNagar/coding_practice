#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		string subs=" not ";
		size_t found;
		getline(cin, s);
		found=s.find(subs);
		int length=s.length();
		int flag1=0;
		int flag2=0;
		if(s[0]=='n' && s[1]=='o' && s[2]=='t' && s[3]==' ')
			flag1=1;
		if(s[length-1]=='t' && s[length-2]=='o' && s[length-3]=='n' && s[length-4]==' ')
			flag2=1;
		if(found!=string::npos || flag1==1 || flag2==1 || s=="not")
			cout<<"Real Fancy"<<endl;
		else
			cout<<"regularly fancy"<<endl;

	}
}