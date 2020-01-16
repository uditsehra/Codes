#include <iostream>

using namespace std;

class Stack{
	int top;
	int *arr;
	int maxSize;
public:
	Stack(int default_size=6){
		this->maxSize = default_size;
		this->top = -1;
		this->arr = new int[this->maxSize];
	}

	void push(int data){
		if(this->top == this->maxSize - 1){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		this->top++;
		this->arr[top] = data;
	}

	int size(){
		return this->top + 1;
	}

	bool isEmpty(){
		return this->top==-1;
	}

	void pop(){
		if(this->top==-1){
			cout<<"Stack is empty"<<endl;
			return;
		}

		this->top--;
	}

	int getTop(){
		return this->arr[this->top];
	}
};

int main(){


	Stack s;

    string par = "((())";

    int len = par.length();

    for(int i=0; i<len; i++)
    {
        s.push(par[i]);
    }

    if(len&1)
    {
        cout << "Parenthesis is not balanced";
    }
    else
    {
        
    }
    
	return 0;
}