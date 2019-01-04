#include<iostream>
#include<string>
using namespace std;

int count_subseq(string s, string str, int m, int n)
{
	//cout<<"running"<<endl;
	if(n==0 && m==0 || m==0)
		return 1;
	else if(n==0 && m!=0)
		return 0;
	else if(str[n-1]==s[m-1])
		return count_subseq(s, str, m-1, n-1) + count_subseq(s, str, m, n-1);
	else 
		return count_subseq(s, str, m, n-1);
}


int main()
{
	string str;
	int n;
	getline(cin, str);
	//cin.ignore();
	n=str.length();
	//cout<<n<<endl;
	string s="QAQ";
	cout<<s[4];
	int m=s.length();
	int cnt=0;
	cnt = count_subseq(s, str, m, n);
	cout<<cnt<<endl;

	return 0;
}