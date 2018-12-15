#include<iostream>
using namespace std;

static int bal = 1000;
const int x = 33;

inline int firstOp(int y)
{
    int val;
    cout<<1<<" "<<y;
    cout<<flush;
    cin>>val;
    //val = 0 if panel not broken
    //val = 1 if panel is broken
    //val = -1 if invalid operation
    return val;
}

inline void secondOp(int c)
{
    cout<<2;
    cout<<flush;
    bal-=c;
}

inline void binSearch(int n, int c)
{
    int y, val, beg, end;
    beg = 1;
    end = n;
    y=(beg+end)/2;
    while(end-beg!=2)
    {
        y=(beg+end)/2;
        val = firstOp(y);
        if(val==0)
        {
            beg=y;
        }
        else if(val==1)
        {
            if(bal<c)
            {
                //cout<<"out of balance"<<endl;
                break;
            }
            end=y;
            secondOp(c);
        }
        else if(val==-1)
        {
            //cout<<"something went wrong"<<endl;
            break;
        }
    }
    y=(beg+end)/2;
    cout<<3<<" "<<y;
    cout<<flush;
}

int main()
{
    int n, c;
    cin>>n>>c;
    binSearch(n, c);
    return 0;
}
