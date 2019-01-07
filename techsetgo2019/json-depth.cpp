/*
Given a string in json format. Find the max
depth of the json string.
*/
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int json_depth(char* jsonString)
{
	int depth=0;	
	stack<char>s;
	for(int i=0; i<strlen(jsonString); i++)
	{
		if(*(jsonString+i)=='{')
			s.push('{');
		else if(*(jsonString+i) == '}')
		{
			if(s.empty()==1)
				return -1;
			else if(s.top()=='{')
			{
				depth++;
				s.pop();
			}


		}
	}
	//cout<<s.top()<<endl<<depth<<endl;
	if(s.empty()==1)
		return depth;
	else 
		return -1;


	return depth;
}

int main()
{
	char jsonString1[]="{aaa{s{sad}fdf}gfs}";
	char jsonString2[]="";
	char jsonString3[]="{";
	char jsonString4[]="}";
	cout<<json_depth(jsonString1)<<endl;
	cout<<json_depth(jsonString2)<<endl;
	cout<<json_depth(jsonString3)<<endl;
	cout<<json_depth(jsonString4)<<endl;
	return 0;
}