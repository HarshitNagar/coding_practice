#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

bool fant[26]={0};
int cnt[26]={0};
unordered_map<char, int>m;
int k;

int check(string str, int i, int j)
{
    for(int p=i; p<=j; p++)
    {
        
    }
}

int func(string str, int i, int j, unordered_map m)
{
    if(check(str, i, j))
    {
        return 
    }
    else
    {
        
        return func(str, i+1, j, m) + func(str, i, j-1, m);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    string b;
    cin>>str;
    cin>>b;
    cin>>k;
    for(int i=0; i<b.length(); i++)
    {
        fant[i]=int(b[i])-48;       
    }
    
    for(int i=0; i<str.length(); i++)
    {
        cnt[str[i]]++;
        
        if(fant[str[i]-97]==0)
        {  
            if(m.find(str[i])==m.end())
                m.insert(make_pair(str[i], 1));
            else
                m[str[i]]++;
        }
    }
    int i=0; 
    int j=str.length()-1;
    int func(str, i, j, m);
    return 0;
}
