#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

node* getMidOfLinkedList(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* slow= head;
    node* fast= head;
    int count = 1;
    while(fast->next!=NULL and fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        count++;   
    }

    cout << "COUNT is " << count << endl;
    cout << "Mid is "<< endl;
    return slow;
}

void insertAtHead(node*&head,int data){
	node *n = new node(data);
	n->next = head;
	head = n;
}

void display(node*head){

	node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}

	cout<<endl;
}

int length(node* head){

	int len = 0;

	node* temp = head;

	while(temp!=NULL){
		len++;
		temp = temp->next;
	}

	return len;
}

void insertAtTail(node*&head,int data){
	if(head==NULL){
		insertAtHead(head,data);
		return;
	}

	node* temp = head;

	while(temp->next!=NULL){
		temp = temp->next;
	}

	node* n = new node(data);
	temp->next = n;
}

void insertAtIndex(node*&head,int data,int idx){
	if(idx<=1){
		insertAtHead(head,data);
		return;
	}

	if(idx >= length(head)){
		insertAtTail(head,data);
		return;
	}

	node* temp = head;

	int steps = 1;

	while(steps<idx-1){
		steps++;
		temp=temp->next;
	}

	node* n= new node(data);

	n->next = temp->next;
	temp->next = n;
}

void deleteAtHead(node*&head){
	if(head==NULL){
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;
}

void deleteAtTail(node*&head){
	if(head==NULL){
		return;
	}

	if(head->next==NULL){
		deleteAtHead(head);
	}

	node* temp = head;

	while(temp->next->next!=NULL){
		temp=temp->next;
	}

	node* toBeDeleted = temp->next;
	temp->next = NULL;
	delete toBeDeleted;
}

void deleteAtIndex(node*head,int idx){
	if(idx<=1){
		deleteAtHead(head);
		return;
	}

	if(idx>=length(head)){
		deleteAtTail(head);
		return;
	}

	node* temp = head;

	int steps = 1;

	while(steps<idx-1){
		steps++;
		temp=temp->next;
	}

	node* toBeDeleted = temp->next;

	temp->next = temp->next->next;
	delete toBeDeleted;

}

node* mergeLinkedLists(node*a, node*b)
{
    if(a==NULL)
    {
        return b;
    }

    if(b==NULL)
    {
        return a;
    }

    node* c;

    if(a->data <= b->data)
    {
        c = a;
        c->next = mergeLinkedLists(a->next, b);
    }
    else
    {
        c = b;
        c->next = mergeLinkedLists(a, b->next);
    }

    return c;
}

int main()
{
    // node* head1 = NULL;
	// insertAtTail(head1,1);
	// insertAtTail(head1,3);
	// insertAtTail(head1,5);
	// insertAtTail(head1,7);
	// insertAtTail(head1,8);
	// insertAtTail(head1,10);

	// node* head2 = NULL;
	// insertAtTail(head2,2);
	// insertAtTail(head2,4);
	// insertAtTail(head2,6);
	
	// node* mergesList = mergeLinkedLists(head1,head2);

    // display(mergesList);
    node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 3);
    insertAtHead(head, 23);
    insertAtHead(head, 11);
    insertAtHead(head, 22);
    insertAtHead(head, 55);
    display(head);
    
	return 0;
}