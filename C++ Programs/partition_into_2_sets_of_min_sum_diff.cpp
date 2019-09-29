#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;


string convert(int a, int b)
{
	string str;
	str.append(to_string(a));
	str.append(to_string(b));
	return str;
}

void insert_into_dp(int sum, int cursum, int mindiff)
{
	string s;
	s = convert(sum, cursum);
	dp.insert(make_pair(s, mindiff));
	s = convert(cursum, sum);
	dp.insert(make_pair(s, mindiff));
}

int get_value(int sum, int cursum)
{
	unordered_map<int>::iterator it;
	if(dp.find(convert(sum, cursum))!=)
}

int partition(vector<int>arr, int sum, int index, int cursum, int mindiff)
{
	if(index == arr.size() || mindiff == 0)
	{
		insert_into_dp(sum, cursum);
		return mindiff;
	}

	int temp = mindiff;
	//include arr[index] in cursum
	if(abs(sum-arr[index]-cursum-arr[index]) < mindiff)
		mindiff = abs(sum-arr[index]-cursum-arr[index]);

	insert_into_dp(sum, cursum, min(partition(arr, sum-arr[index], index+1, cursum+arr[index], mindiff), partition(arr, sum, index+1, cursum, temp)));
	
}	

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases;
	cin>>cases;

	while(cases--)
	{
		vector<int>arr;
		int n, val, sum=0;
		cin>>n;
		
		vector<bool>used(n, 0);

		for(int i=0; i<n; i++)
		{
			cin>>val;
			arr.push_back(val);
			sum+=val;
		}
		
		int index = 0;
		int cursum = 0;
		unordered_map<string, int>dp;
		cout<<partition(arr, sum, index, cursum, sum-cursum);
	}

	return 0;
}