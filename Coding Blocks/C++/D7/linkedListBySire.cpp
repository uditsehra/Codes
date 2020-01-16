#include <iostream>

using namespace std;

class node{
public:
	int data;
	node* next;

	node(int data){
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

/* node* reverseLinkedListIteratively(node*head)
{
    int count = length(head);

    if(head==NULL)
    {
        return head;
    }

    node* temp = head;
    node* temp1 = head;
    
    while(count!=0)
    {
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
            temp1 = temp->next->next;
        }
        temp->next = head;
        head = temp;
        temp1->next= NULL;

        count--;
    }

    cout << display(head)<< endl;
    return head;
}
 */

void reverseLinkedListIteratively(node*&head)
{
    node* curr = head;
    node* prev = NULL;

    while(curr!=NULL)
    {
        node* n = curr->next;
        curr->next = prev;

        prev = curr;
        curr = n;
    }
    head = prev;
    return display(head);
}

int main(){

	node* head = NULL;

	insertAtHead(head,10);
	insertAtHead(head,20);
	insertAtHead(head,30);
	insertAtHead(head,40);
    insertAtHead(head,50);

	// insertAtTail(head,1);
	// insertAtTail(head,2);
	// insertAtTail(head,3);
	// insertAtTail(head,4);

	// insertAtIndex(head,890,5);

	// display(head);

	// deleteAtHead(head);

	// display(head);

	// deleteAtTail(head);

	// display(head);

	// deleteAtIndex(head,4);

	// display(head);

	// cout<<length(head)<<endl;

    display(head);
    //cout << getMidOfLinkedList(head);
    //node* p = reverseLinkedListIteratively(head);
    
    reverseLinkedListIteratively(head);

    return 0;
}

