#include <iostream>

using namespace std;

class node{
public:
	int data;
	node* right;
	node* down;

	node(int data){
		this->data = data;
		this->right = NULL;
		this->down = NULL;
	}
};

void insertAtRight(node*&head,int data){

	node* n = new node(data);
	node* temp = head;

	if(head==NULL){
		head = n;
		return;
	}

	while(temp->right!=NULL){
		temp = temp->right;
	}

	temp->right = n;
}

void insertAtDown(node*&head,int data,int idx){

	int steps = 1;

	node* temp = head;

	while(steps<idx){
		steps++;
		temp = temp->right;
	}

	while(temp->down!=NULL){
		temp = temp->down;
	}

	node* n = new node(data);

	temp->down = n;
}

void display(node* head){

	node* row = head;
	while(row!=NULL){

		node* col = row;

		while(col!=NULL){
			cout<<col->data<<" ";
			col = col->down;
		}

		row = row->right;
		cout<<endl;
	}
}

void displayFlatten(node*head){
	node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->down;
	}
	cout<<endl;
}

node* mergeLinkedList(node* head, node* tail)
{
    node* temp = head;

    while(temp->down!=NULL)
    {
        temp = temp->down;
    }

    temp->down = tail;

    return head;
}

node* flattenLinkedList(node* head)
{
    if(head->right==NULL or head->down==NULL)
    {
        return head;
    }

    node* temp = head;
    
    // while(temp->right!=NULL)
    // {
    //     temp = temp->right;
    // }
    temp = temp->right;
    head->right = NULL;
    node* restOfTheList = flattenLinkedList(temp);
    node* flattened = mergeLinkedList(head, restOfTheList);

    return flattened;
}

int main(){

	node* head = NULL;
	insertAtRight(head,1);
	insertAtRight(head,3);
	insertAtRight(head,2);

	insertAtDown(head,15,1);
	insertAtDown(head,16,1);

	insertAtDown(head,8,2);
	insertAtDown(head,17,2);

	insertAtDown(head,9,3);

//	display(head);

    node* flat = flattenLinkedList(head);
    displayFlatten(flat);

	return 0;
}



//Unordered Map Functions
//2D Array
//Linked List
//Hash Map