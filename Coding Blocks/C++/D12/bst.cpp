#include<iostream>
#include<sstream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* builtBST(node*root,int data){
	if(root==NULL){
		root = new node(data);
		return root;
	}

	if(data>root->data){
		root->right = builtBST(root->right,data);
	}else{
		root->left = builtBST(root->left,data);
	}

	return root;
}

node* insert(){

	int data;
	cin>>data;	

	node*root = NULL;

	while(data!=-1){
		root = builtBST(root,data);
		cin>>data;
	}

	return root;
}

void preorder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inOrder(node*root){
	if(root==NULL){
		return;
	}

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

string str = "";

void getInOrder(node*root){
	
    if(root==NULL){
		return;
	}

	inOrder(root->left);
	str += root->data;
	inOrder(root->right);
}

bool search(string str, int i, int start, int end)
{

    if(start>end)
    {
        return false;
    }

    int mid = start + (end-start)/2;
    int t = stoi(str[mid]);

    if(t > i)
    {
        search(str, i  start, mid-1);
    }
    
    if(t<i)
    {
        search(str, i, mid+1, end);
    }

    return true;
}

int main(){

	node* root = insert();

    string str = getInOrder(root);
	cout<<endl;

    cout << search()

	return 0;
}