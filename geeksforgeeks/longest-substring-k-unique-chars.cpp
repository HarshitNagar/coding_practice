#include<iostream>
#include<string>
#define SIZE 26
using namespace std;

int isvalid(int count[], int k)
{
	int cnt=0;
	for(int i=0; i<SIZE; i++)
	{
		if(count[i]>0)
		{
			cnt++;
			if(cnt>k)
				return 0;
		}
	}
	return 1;
}

void find_string(string s, int len, int k)
{
	int count[SIZE]={0};
	int start=0;
	int end=0;
	int longest=0;
	for(int i=0; i<len; i++)
	{
		count[s[i]-'a']++;
		if(isvalid(count, k)==0)
		{
			if(longest<i-start-1)
			{
				longest=i-start-1;
				end=i-1;
			}
			do
			{
				count[s[start]-'a']--;
				++start;
			}while(isvalid(count, k)==0);
		}
	}
}

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int k;
	cin>>k;
	find_string(s, len, k);
	return 0;
}