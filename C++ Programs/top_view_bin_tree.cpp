#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
	int data;
	Node * left = NULL;
	Node * right = NULL;
	Node(int data)
	{
		this->data = data;
	}
};

Node * create_tree()
{
	int data;
	cin>>data;
	if(data == -1)
		return NULL;
	Node * temp = new Node(data);
	Node * left = create_tree();
	Node * right = create_tree();

	return temp;
}

map<int, vector<Node *>> vertical_level_order(Node * temp)
{
	map<int, vector<Node *>>m;
	queue<pair<Node *, int>>q;	

	q.push(make_pair(temp, 0));
	while(!q.empty())
	{
		if(q.front().first->left != NULL)
			q.push(make_pair(q.front().first->left, q.front().second - 1));
		if(q.front().first->right != NULL)
			q.push(make_pair(q.front().first->right, q.front().second + 1));
		//cout<<q.front()<<" ";
		m[q.front().second].push_back(q.front().first);
		q.pop();
	}
	return m;
}

void top_view(map<int, vector<Node *>>m)
{
	map<int, vector<Node *>>::iterator it;
	for(it = m.begin(); it!=m.end(); it++)
	{
		for(int i=0; i<it->second.size(); i++)
		cout<<(it->second)[i]->data<<" ";
	}
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
		Node * root = new Node(0);
		root = create_tree();

		map<int, vector<Node *>>m;

		m = vertical_level_order(root);

		top_view(m);
		cout<<endl;
	}

	return 0;
}