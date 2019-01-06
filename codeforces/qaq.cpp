#include<iostream>
using namespace std;

int main()
{
	string s="hello world";
	int length=s.length();
	cout<<"length >"<<s[length+1]<<"<"<<endl<<s[length-1]<<s[length-2];
}