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

void level_order(Node * temp)
{
	queue<Node *>q;
	q.push();
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		if(temp->left != NULL)
			q.push(temp->left);
		if(temp->right != NULL)
			q.push(temp->right);
		if(q.empty())
			temp=NULL;
		else
		{
			temp = q.front();
			q.pop();
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
		level_order(root);
	}

	return 0;
}