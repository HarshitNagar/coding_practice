#include<bits/stdc++.h>
#include<stack>
#include<stdlib.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int check(char a)
{
	if(a=='+' || a=='-')
		return 1;
	if(a=='*' || a=='/')
		return 2;
	return 0;

}

int eval_infix(string s)
{
	stack<int>num;
	stack<char>op;
	for(int i=0; i<s.length(); i++)
	{
		if(isdigit(s[i]))
		{
			int number=0;
			//int place=1;
			while(isdigit(s[i]))
			{
				number = (number*10) + (int(s[i])-48);
				i++;
			}
			cout<<"number "<<number<<endl;
			num.push(number);
		}

		else if(s[i]=='(')
			op.push(s[i]);

		else if(s[i]==')')
		{
			while(!op.empty() && op.top()!='(')
			{
				int x = num.top();
				num.pop();
				int y = num.top();
				num.pop();
				char oper = op.top();
				op.pop();

				if(oper=='+')
				{
					num.push(x+y);
				}
				else if(oper=='-')
				{
					num.push(y-x);
				}
				else if(oper=='*')
				{
					num.push(x*y);
				}
				else if(oper=='/')
				{
					num.push(y/x);
				}	
			}
			op.pop();
		}
		else 
		{
			while(!op.empty() && check(op.top())>=check(s[i]))
			{
				int x = num.top();
				num.pop();
				int y = num.top();
				num.pop();
				char oper = op.top();
				op.pop();

				if(oper=='+')
				{
					num.push(x+y);
				}
				else if(oper=='-')
				{
					num.push(y-x);
				}
				else if(oper=='*')
				{
					num.push(x*y);
				}
				else if(oper=='/')
				{
					num.push(y/x);
				}	
			}	
			op.push(s[i]);
			cout<<op.top();
		}
	}
	cout<<"op top ";
	cout<<op.top();
	while(!op.empty())
	{
		cout<<"here"<<endl;
		int x = num.top();
		num.pop();
		int y = num.top();
		num.pop();
		char oper = op.top();
		op.pop();

		if(oper=='+')
		{
			num.push(x+y);
		}
		else if(oper=='-')
		{
			num.push(y-x);
		}
		else if(oper=='*')
		{
			num.push(x*y);
		}
		else if(oper=='/')
		{
			num.push(y/x);
		}
	}
	return num.top();
}

int main()
{
	
	ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	endif
	
	ll cases;
	cin>>cases;
	string exp;
	while(cases--)
	{
		cin>>exp;
		cout<<eval_infix(exp)<<endl;
	}

	return 0;
}