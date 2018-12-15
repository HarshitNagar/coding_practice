#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void readValues(vector<int>&v,  int size)
{
    int temp;
    while(size--)
    {
        cin>>temp;
        v.push_back(temp);
    }
}

void printValues(vector<int>v)
{
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int size;
    cin>>size;

    vector<int>myvector;
    vector<int>v2;

    readValues(v1, size);
    readValues(v2, size);

    transform(v1.begin(), v1.end(), v2.begin(), v2.begin(), plus<int>());

    //sort(v.begin(), v.end());
    printValues(v2);
    return 0;
}
