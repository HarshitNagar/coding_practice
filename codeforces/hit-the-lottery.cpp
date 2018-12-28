#include<iostream>
#include<vector>

using namespace std;

int bills(int n)
{
  int sol=0;

  if(n==0)
    return 0;

  else if(n>=100)
    return sol+=(n/100 + bills(n%100));

  else if(n>=20)
    return sol+=(n/20 + bills(n%20));

  else if(n>=10)
    return sol+=(n/10 + bills(n%10));

  else if(n>=5)
    return sol+=(n/5 + bills(n%5));

  else if(n>=1)
    return sol+=n;

}

int main()
{
  int n;
  cin>>n;
  int sol = bills(n);
  cout<<sol;
  return 0;
}
