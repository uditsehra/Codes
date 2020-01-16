#include<iostream>
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

void insertAtHead(node*&head, int data)
{
	node* n = new node(data);
	head->next = head;
	head = n;
}

node* reverseIndexTimes(node* head, int k)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	node* current = head;
	node* previous = NULL;

	int count = 1;

	while(count<=k and current!=NULL)
	{
		node* n = current->next;
		current->next = previous;

		previous = current;
		current = n;
		count++;
	}

	head->next = reverseIndexTimes(current, k);

	return previous;
}

void printLinkedList(node*head)
{
		node* temp = head;

		while(temp!=NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
}

int main() {

	int n;
	int k;

	node* head = NULL;

	cin >> n >> k;

	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	for(int i=0; i<n; i++)
	{
		insertAtHead(head, arr[i]);
	}

	node* ans = reverseIndexTimes(head, k);

	printLinkedList(ans);

	return 0;
}
