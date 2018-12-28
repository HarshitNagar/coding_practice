#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  int n;
  cin>>n;
  cin.ignore();
  string t;
  getline(cin, t);
  int j=0;
  for(int i=0; i<n; i+=j)
  {
    cout<<t[i];
    j++;
  }
}
