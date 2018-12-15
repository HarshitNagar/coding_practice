#include<iostream>
#include<random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 eng(rd());

    int X, Y;
    uniform_int_distribution<> distr(1,3);
    X=distr(eng);
    cout<<X<<endl;
    cout<<flush;
    cin>>Y;
    if(X!=1 & Y!=1)
        cout<<1;
    else if(X!=2 & Y!=2)
        cout<<2;
    else
        cout<<3;
    cout<<flush;    

    return 0;
}
