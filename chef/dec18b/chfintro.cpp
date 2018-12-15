#include<iostream>
using namespace std;

int main()
{
    int n,r,R;
    cin>>n>>r;
    while(n--)
    {
        cin>>R;
        if(R<r)
            cout<<"Bad boi"<<endl;
        else 
            cout<<"Good boi"<<endl;

    }
    return 0;
}