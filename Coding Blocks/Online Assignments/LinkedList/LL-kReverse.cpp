/*
LL - K REVERSE
Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

You need not have to create a new list. Just reverse the old one using head.

Input Format:
The first line contains 2 space separated integers N and K

The next line contains N space separated integral elements of the list.

Constraints:
0 <= N <= 10^6 0 <= K <= 10^6

Output Format
Display the linkedlist after reversing every k elements

Sample Input
9 3
9 4 1 7 8 3 2 6 5
Sample Output
1 4 9 3 8 7 5 6 2

*/

#include<iostream>
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

void display(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node*&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

node* reverseLinkedListByElementsK(node*&head, int k)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }

    node* curr = head;
    node* prev = NULL;

    int count = 1;

    while(count<=k and curr!=NULL)
    {
        node* n = curr->next;
        curr->next = prev;

        prev = curr;
        curr = n;
        count++;
    }

    head->next = reverseLinkedListByElementsK(curr, k);

    return prev;
}

int main() {
    int n, k;
    cin >> n >> k;
    node* head = NULL;
    
    int arr[n]={0};
    
    for(int i=0; i<n; i++)
    {
      cin >> arr[i];
    }

    for(int i=n-1; i>=0; i--)
    {
        insertAtHead(head, arr[i]);
    }

    node *p = reverseLinkedListByElementsK(head, k);
    display(p);
	return 0;
}