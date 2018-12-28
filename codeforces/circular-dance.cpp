#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Kid
{
  int a;
  int b;
};

int main()
{
  int n;
  cin>>n;
  Kid k[n];
  int circle[n];
  for(int i=0; i<n; i++)
  {
    cin>>k[i].a;
    cin>>k[i].b;
  }
  circle[0]=1;

  for(int i=0; i+2<n; i+=2)
  {
    int A=k[i].a;
    int B=k[i].b;
    if(B==k[A-1].a || B==k[A-1].b)
    {
      //cout<<A-1<<endl;
      circle[i+1]=A;
      circle[i+2]=B;
    }
    else if(A==k[B-1].a || A==k[B-1].b)
    {
      //cout<<B-1<<endl;
      circle[i+1]=B;
      circle[i+2]=A;
    }
  }
  for(int i=0; i<n; i++)
    cout<<circle[i]<<" ";

  return 0;
}
