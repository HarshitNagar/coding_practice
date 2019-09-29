#include<iostream>
#include<string>
#include<stack>
#include<stdio.h>
#include<vector>
using namespace std;

vector<int> check_brackets(string str)
{
	stack<char>s;
	int brcnt=0;
	vector<char>v;
	vector<int>sol;
	for(int i=0; i<str.length(); i++)
	{
		if( isalpha(str[i])==0 && isdigit(str[i])==0 && str[i]!='*')
		{
			v.push_back(str[i]);
		}
	}
	
	s.push(v[0]);
	for(int i=1; i<v.size(); i++)
	{
		if(v[i]==')' && s.top()=='(')
		{
			s.pop();
			brcnt++;
		}
		else if(v[i]=='}' && s.top()=='{')
		{
			s.pop();
			brcnt++;
		}
		else if(v[i]==']' && s.top()=='[')
		{
			s.pop();
			brcnt++;
		}
		else
		{
			s.push(v[i]);
		}
	}
	sol.push_back(brcnt);
	if(s.empty())
	{
		sol.push_back(1);
	}
	else
	{
		sol.push_back(0);
	}
	return sol;
}

bool check_stars(string str)
{
	stack<char>s;
	vector<char>v;
	for(int i=0; i<str.length(); i++)
	{
		if( isalpha(str[i])==0 && isdigit(str[i])==0)
		{
			v.push_back(str[i]);
		}
	}
	
	if(v[0]=='*')
		return false;
	else
	{
		int starcnt=0;
		s.push(v[0]);

		for(int i=1; i<v.size(); i++)
		{
			if(v[i]=='*')
			{
				for(int k=i; v[k]=='*'; k++)
				{
					starcnt++;

				}
				if(starcnt<2)
				{
					return false;
				}
				
			}

		}
		return true;
	}
	

}

int main()
{
	
	string str;
	cin>>str;
	vector<int>sol;
	sol = check_brackets(str);
	if(sol[1]==0)
	{
		cout<<"No "<<sol[0];
		return 0;
	}
	else
	{
		bool ans = check_stars(str);
		if(ans==false)
			cout<<"No "<<sol[0];
		else
			cout<<"Yes "<<sol[0];
	}
	
	

	return 0;
}

