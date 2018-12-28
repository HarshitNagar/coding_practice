#include<iostream>
#include<string>
using namespace std;

int numsubstring(string a, string b, int m, int n)
{
  if(n==0)
    return 1;
  if(m==0)
    return 0;
  if(a[m-1]==b[n-1])
    return numsubstring(a, b, m-1, n-1) + numsubstring(a, b, m-1, n);
  else
    return numsubstring(a, b, m-1, n);
}

int main()
{
  string a, b;
  getline(cin, a);
  //geeksforgeeks
  getline(cin, b);
  //gks
  int m=a.length();
  int n=b.length();
  int sol=numsubstring(a, b, m, n);
  cout<<sol;
  return 0;
}
