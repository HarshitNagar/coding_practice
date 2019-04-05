#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
	node* temp = new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node* constructTreeUtil(int pre[], int* preIndex, int key, int min, int max, int size)
{
	if(*preIndex>=size)
		return NULL;

	//node* root = NULL;

	if(key>min && key<max)
	{
		node* root = newNode(key);
		*preIndex+=1;
		if(*preIndex)

	}

	
}

int main()
{
	int pre[]={10, 5, 1, 7 40, 50};
	int size=sizeof(pre)/sizeof(pre[0]);
	node* root=construct  
}