#include<iostream>
#include<vector>
using namespace std;

class Canvas
{
private:
  int n;
  int h;
  vector<int>box;
  int pos;
  int occupied;
public:
  Canvas()
  {
    n=0;
    h=0;
    pos=0;
    occupied=0;
  }
  ~Canvas()
  {
    n=0;
    h=0;
    pos=0;
    occupied=0;
  }
  void read_input()
  {
    cin>>n>>h;
    int temp;
    for(int i=0;i<n;i++)
    {
      cin>>temp;
      box.push_back(temp);
    }
  }
  void left()
  {
    if(pos==0)
      return;
    pos--;
  }
  void right()
  {
    if(pos==n-1)
      return;
    pos++;
  }
  void pick_box()
  {
    if(occupied==1 || box[pos]==0)
      return;
    occupied=1;
    box[pos]--;
  }
  void drop_box()
  {
    if(occupied==0 || box[pos]==h)
      return;
    occupied=0;
    box[pos]++;
  }
  void quit()
  {
    for(int i=0; i<n; i++)
    {
      cout<<box[i]<<" ";
    }
  }
};

int main()
{
  Canvas c;
  c.read_input();
  int val;
  while(1)
  {
    cin>>val;
    if(val==0)
    {
      c.quit();
      break;
    }
    else if(val==1)
      c.left();
    else if(val==2)
      c.right();
    else if(val==3)
      c.pick_box();
    else if(val==4)
      c.drop_box();
  }


}
