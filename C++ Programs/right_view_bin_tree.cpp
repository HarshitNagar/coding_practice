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

void right_view(Node * temp)
{
	queue<Node *>q;
	q.push(temp);

	while(!q.empty())
	{
		int s = q.size();
		for(int i=0; i<s; i++)
		{
			if(i==s-1)
				cout<<q.front()->data<<" ";
			if(q.front()->left!=NULL)
				q.push(q.front()->left);
			if(q.front()->right!=NULL)
				q.push(q.front()->right);
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
		right_view(root);
		cout<<endl;
	}

	return 0;
}