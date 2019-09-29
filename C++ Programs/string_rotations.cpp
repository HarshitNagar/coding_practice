#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

bool isvowel(char x)
{
	switch(x)
	{
		case('a'):return true;
		case('e'):return true;
		case('i'):return true;
		case('o'):return true;
		case('u'):return true;
	}
	return false;
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
		string str;
		cin>>str;
		int len = str.length();
		int cnt=0;
		int vleft=0, vright=0;

		bool vowel[len]={false};

		for(int i=0; i<len/2; i++)
		{
			if(isvowel(str[i]))
			{
				vleft++;
				vowel[i]=true;
			}	
		}
		for(int i=len/2; i<len; i++)
		{
			if(isvowel(str[i]))
			{
				vright++;
				vowel[i]=true;
			}
		}

		cout<<vleft<<" "<<vright<<endl;
		if(vleft>vright)
			cnt++;
		for(int i=1, j=i+len/2; i<len; i++, j++)
		{
			//cout<<i<<" "<<j<<endl;
			if(vowel[i-1])
				vleft--;
			if(vowel[(j-1)%len])
				vleft++;
			if(vowel[(j-1)%len])
				vright--;
			if(vowel[(i-1)%len])
				vright++;

			cout<<vleft<<" "<<vright<<endl;
			if(vleft>vright)
				cnt++;

		}
		cout<<"count = "<<cnt<<endl;
	}

	return 0;
}

/*

input

3
abecde
abcd
aeedkk

output

2 1
1 2
1 2
1 2
2 1
2 1
count = 3
1 0
0 1
0 1
1 0
count = 2
3 0
2 1
1 2
0 3
1 2
2 1
count = 3


*/