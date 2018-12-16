#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void readValues(vector<int>&v, int n)
{
    int temp;
    while(n--)
    {
        cin>>temp;
        v.push_back(temp);
    }
}

unordered_map<int, int> storeinhashmap(vector<int>v, int n)
{
    vector<int>::iterator it=v.begin();
    unordered_map<int,int>h;

    while(n--)
    {
        int temp = *it;
        //cout<<"iter "<<*it<<" "<<++n<<endl;
        h.insert(make_pair(n, *it));
        it++;
    }
    return h;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        vector<int>v;
        readValues(v, n);
        cin>>x;
        unordered_map<int, int>h = storeinhashmap(v, n);
        unordered_map<int, int>::iterator it;
        int flag = 0;
        for(it=h.begin(); it!=h.end(); it++)
        {
            if(h.find(x - it->second)!=h.end())
            {
                cout<<"Yes";
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"No";
        }
    }
    return 0;
}
