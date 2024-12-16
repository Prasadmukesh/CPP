#include <iostream>
using namespace std;

// Node structure for linked list
//struct Node {
//    int data;
//    Node* next;
//    
//    Node(int value) : data(value), next(nullptr) {}
//};
class Node
{
	
	public :
		int data;
	    Node* next;
	Node(int val)
	{
		data=val;
		next=nullptr;
	}
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    // Constructor to initialize an empty stack
    Stack() : top(nullptr) {}

    // Push operation to add an element to the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout<<"poped value is "<<temp->data<<endl;
        delete temp;
    }

    // Peek (or top) operation to get the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free up allocated memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;

    // Example usage
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    // Try to pop from an empty stack
    stack.pop();

    return 0;
}
