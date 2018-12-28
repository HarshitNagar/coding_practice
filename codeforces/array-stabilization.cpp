#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  vector<int>a;
  vector<int>b;
  vector<int>::iterator it;
  //vector<int>::iterator ib;

  int n, a_instability, b_instability;
  cin>>n;
  int temp;
  for(int i=0; i<n; i++)
  {
    cin>>temp;
    a.push_back(temp);
  }

  b=a;
  //_instability=*max_element(it, it+n) - *min_element(it, it+n);
  it=a.begin();
  a.erase(max_element(it, it+n));
  it=b.begin();
  b.erase(min_element(it, it+n));

  it=a.begin();
  a_instability=*max_element(it, it+n-1) - *min_element(it, it+n-1);


  it=b.begin();
  b_instability=*max_element(it, it+n-1) - *min_element(it, it+n-1);
  if(a_instability<b_instability)
    cout<<a_instability;
  else
    cout<<b_instability;

  return 0;
}
