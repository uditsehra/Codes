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

void display(node*head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp-> next;
    }

    cout << endl;

}

int countNodes(node* head)
{   
    int count = 0;
    node* temp = head;

    while(temp!=NULL)
    {
        count++;
        temp = temp-> next;
    }

    cout << "No of nodes are: " << count << endl;

    return count;
}



void insertAtHead(node*&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node*&head, int data)
{
    if(head==NULL)
    {
        insertAtHead(head, data);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {   
        temp = temp->next;
    }

    node* n = new node(data);
    temp->next = n;

}

void insertAtMid(node*&head, int k, int data)
{
    if(k<=1)
    {
        insertAtHead(head, data);
        return;
    }

    if(k >= countNodes(head))
    {
        insertAtTail(head, data);
        return;
    }

    node* temp1 = head;
    int len = 1; //countNodes(head);
    //node* temp2 = head;

    while(len<k-1)
    {
        len++;
        temp1 = temp1->next;
     //   temp2 = temp2->next;
    }

    node* n = new node(data);
    n->next = temp1;
    temp1->next = n;
}

node* reverseLinkedListRecursive(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* newHead = reverseLinkedListRecursive(head->next);
    node* currentHead = head;

    currentHead->next->next = currentHead;
    currentHead->next = NULL;
    return newHead;

}

bool doesExist(node*head, int element)
{
    node* temp = head;

    if(temp->data==element)
    {
        cout << "Element exists." << endl;
        return true;
    }
    
    while(temp->next!=NULL)
    {
        return doesExist(temp->next, element);
    }

    return false;
}

int main()
{
    node* head;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

   // display(head);

//    cout << reverseLinkedListRecursive(head)<< endl;

//    display(head);

    cout << doesExist(head, 10);

    return 0;
}