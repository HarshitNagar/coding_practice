#include<iostream>
using namespace std;

#define SIZE 26

int check(int vowel[26])
{
	if(vowel[0]>=1 && vowel[4]>=1 && vowel[8]>=1 && vowel[14]>=1 && vowel[20]>=1)
		return 1;
	return 0;
}

int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int n;
		cin>>n;
		int count = 0;
		int vowel[SIZE]={0};
		string s[n];
		for(int i=0; i<n; i++)
		{
			cin>>s[i];
		}
		for(int i=0; i<n-1; i++)
		{
			
			for(int j=i+1; j<n; j++)
			{
				int k=0;
				//for(int i=0; i<SIZE; i++)
				//	vowel[i]=0;
				vowel[0]=0;
				vowel[4]=0;
				vowel[8]=0;
				vowel[14]=0;
				vowel[20]=0;
				//cout<<s[i].length()<<" "<<s[j].length();
				//cout<<"checking string "<<i<<" and "<<j<<endl;
				//cout<<s[i]<<endl<<s[j]<<endl;
				while(k<s[i].length() || k<s[j].length())
				{

					if(k<s[i].length() /*&& vowel[s[i][k]-'a']==0*/)
							vowel[s[i][k]-'a']++;
					if(k<s[j].length() /*&& vowel[s[j][k]-'a']==0*/)	
							vowel[s[j][k]-'a']++;
					if(check(vowel))
					{
						count++;
						break;
					}	
				
					k++;
				}
				
			}
		}
		cout<<count<<endl;


	}
	return 0;
}