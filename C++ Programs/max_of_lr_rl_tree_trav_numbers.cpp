#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
	Node * left = NULL;
	Node * right = NULL;
	int val;
	Node(int val)
	{
		this->val = val;
	}
};

Node * create_tree()
{
	int val;
	cin>>val;
	if(val == -1)
		return NULL;
	Node * node = new Node(val);
	node->left = create_tree();
	node->right = create_tree();
	return node;
}


int lr_trav(Node *, int, int);
int rl_trav(Node *, int, int);

int preorder(Node * node, int max_sum)
{	
	if(node == NULL)
		return max_sum;
	/*
	cout<<"NODE IS "<<node->val<<endl;
	cout<<lr_trav(node, -1, 0);
	cout<<endl;
	cout<<rl_trav(node, 1, 0);
	cout<<endl<<endl;
	*/
	max_sum = max(max_sum, max(lr_trav(node, -1, 0), rl_trav(node, 1, 0)));
	return preorder(node->left, max_sum);
	return preorder(node->right, max_sum);
	return max_sum;
}


int lr_trav(Node * node, int dir, int sum)
{
	if(node == NULL)
		return sum;
	//cout<<node->val<<" ";
	sum+=node->val;
	if(dir == -1)
	{
		return lr_trav(node->left, -1*dir, sum);
	}
	else
	{
		return lr_trav(node->right, -1*dir, sum);
	}
	//cout<<" 	";
	return sum;
}

int rl_trav(Node * node, int dir, int sum)
{
	if(node == NULL)
		return sum;
	//cout<<node->val<<" ";
	sum+=node->val;
	if(dir == -1)
	{
		return rl_trav(node->left, -1*dir, sum);
	}
	else
	{
		return rl_trav(node->right, -1*dir, sum);
	}

	return sum;
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
		Node * root = create_tree();
		cout<<preorder(root, INT_MIN);
		cout<<endl;
	}

	return 0;
}