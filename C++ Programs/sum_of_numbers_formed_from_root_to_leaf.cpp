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
	Node()
	{
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

void preorder(Node * node)
{
	if(node == NULL)
	{
		//cout<<-1<<" ";
		return;
	}
	cout<<node->val<<" ";
	preorder(node->left);
	preorder(node->right);


}

void fsum(Node * node, int num, int &sum)
{
	if(node == NULL)
		return;
	num = (num*10) + node->val;
	fsum(node->left, num, sum);
	fsum(node->right, num, sum);
	
	if(node->left == NULL && node->right == NULL)
	{
		cout<<num<<" ";
		sum+=num;
	}
	num/=10;
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
		Node * root = new Node();
		root = create_tree();
		//preorder(root);
		int sum = 0;
		fsum(root, 0, sum);
		cout<<endl<<sum;
	}

	return 0;
}