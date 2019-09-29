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
	temp->left = create_tree();
	temp->right = create_tree();

	return temp;
}

void vertical_order(Node * temp, int dist, map<int, vector<Node *>>&m)
{
	if(temp == NULL)
		return;

	m[dist].push_back(temp);	
	vertical_order(temp->left, dist-1, m);
	vertical_order(temp->right, dist+1, m);
}

void print_vertical_order(map<int, vector<Node *>>m)
{
	map<int, vector<Node *>>::iterator it;
	for(it = m.begin(); it!=m.end(); it++)
	{
		for(int i = 0; i<it->second.size(); i++)
		{
			cout<<it->second[i]->data<<" ";
		}
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
		vertical_order(root, 0, m);
		print_vertical_order(m);
		cout<<endl;

	}

	return 0;
}