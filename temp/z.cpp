#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n, k, temp;
        cin>>n>>k;
        deque<int>d;
        while(n--)
        {
            cin>>temp;
            d.push_back(temp);
            cout<<temp;
        }
        deque<int>::iterator it=d.begin();
        for(int i=0; i<n-k+1; i++)
        {
            cout<<*it<<endl;
            //cout<<*(it+i+k)<<endl;
            //cout<<*max_element(it+i, it+i+k)<<" ";
        }
    }
    return 0;
}
