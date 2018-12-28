#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  int n, si=0, ti=0, temp, leader, lead=0;
  cin>>n;
  while(n--)
  {
    cin>>temp;
    si+=temp;
    cin>>temp;
    ti+=temp;
    //cout<<"si "<<si<<" ti "<<ti<<endl;
    if(abs(si-ti)>lead)
    {
      lead=abs(si-ti);
      if(si>ti)
        leader=1;
      else
        leader=2;
    }
  }
  cout<<leader<<" "<<lead;
  return 0;
}
