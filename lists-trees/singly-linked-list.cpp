#include<iostream>
using namespace std;



struct node
{
	int data;
	node* next;
};

node* create_root()
{
	node* root = new node;
	root->next=NULL;
	root->data=0;
	return root;
}

void insert_node_end(node* root)
{
	node* temp=new node;
	temp=root;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	int val;
	cout<<"enter the value hello>";
	cin>>val;

	node* x=new node;
	x->next=NULL;
	temp->next=x;
	x->data=val;

}

void delete_node(node* root)
{
	if(root->next == NULL)
	{
		cout<<"underflow\n";
		return;
	}
	int val;
	cout<<"enter the value>";
	cin>>val;

	if(root->data == val)
	{
		root=root->next;
		return;
	}

	node* temp = new node;
	node* prev = new node;
	temp=root;
	while(temp->data!=val)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;



}

void print_tree(node* root)
{
	node* temp=new node;
	temp=root;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	//create root node
	node* root=create_root();
	int exit=0;
	int sel;
	while(exit!=1)
	{
		cout<<"select :\n";
		cout<<"1. insert at end\n";
		cout<<"2. delete\n";
		cout<<"3. print\n";
		cout<<"4. exit\n";
		cin>>sel;
		switch(sel)
		{
			case(1): 
				insert_node_end(root);
				break;
			case(2):
				delete_node(root);
				break;
			case(3):
				print_tree(root);
				break;
			case(4):
				exit=1;
				break;	
			default:
				cout<<"enter correct value";			
		}
	}
	


}