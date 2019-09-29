#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

string m[]={" ", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

unordered_map<int, string>

void codegen(string s, int pointer)
{
	if(pointer==s.length())
	{
		cout<<s<<endl;
		return;
	}
	string a=s;
	string b=s;

	int pos2 = int(s[pointer])-48;
	string r1 = m[pos2];

	int pos1 = (int(s[pointer])-48)*10 + int(s[pointer])-47;

	if(pos1>=26)
	{
		a.replace(pointer, 1, r1);
		//cout<<a<<endl;
		codegen(a, pointer+1);
	}
	else
	{
		string r2 = m[pos1];
		a.replace(pointer, 1, r1);
		//cout<<a<<endl;
		b.replace(pointer, 2, r2);
		//cout<<b<<endl;
		codegen(a, pointer+1);
		codegen(b, pointer+1);

	}
	return;

	

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
		string s;
		cin>>s;
		int pointer = 0;
		codegen(s, pointer);

	}

	return 0;
}