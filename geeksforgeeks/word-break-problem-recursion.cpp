#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool dictionarySearch(string word)
{
	unordered_map<string, int>dict;
	dict.insert( {{"mobile",1}, {"samsung",2}, {"i",3}, {"like",4}, {"sam",5}, {"sung",6}, {"ice",7}, {"cream",8}, {"icecream",9}, {"man",10}, {"go",11}, {"mango",12}} );
	unordered_map<string, int>::iterator it;
	it=dict.find(word);
	if(it!=dict.end())
		return true;
	else
		return false;

}

bool wordBreak(string str)
{
	if(str.length()==0)
		return 1;
	for(int i=0; i<str.length(); i++)
	{
		if (dictionarySearch(str.substr(0,i)) && wordBreak(str.substr(i, str.length()-1)))
			return true;
	}
}

int main()
{
	string str;
	getline(cin, str);
	cout<<wordBreak(str);
	return 0;
}