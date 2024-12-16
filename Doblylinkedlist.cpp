#include <iostream>
using namespace std;

// Define the structure of a Doubly Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor to create a new node
    Node(int data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

// Define the structure of the Doubly Linked List
class DoublyLinkedList {
public:
    Node* head;

    // Constructor to initialize the doubly linked list
    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert a new node at the end of the list
    void insertEnd(int data) {
        Node* newNode = new Node(data);

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        // Traverse to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Link the new node to the last node and update the pointers
        temp->next = newNode;
        newNode->prev = temp;
    }
    
    void insertBegin(int data) {
        Node* newNode = new Node(data);

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Make the new node the new head
        newNode->next = head;      // New node's next points to the current head
        head->prev = newNode;      // Current head's previous points to the new node
        head = newNode;            // Update head to the new node
    }

    // Delete a node with a specific value
    void deleteNode(int key) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;

        // If the head node holds the key to be deleted
        if (temp != nullptr && temp->data == key) {
            head = temp->next;  // Change head
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return;
        }

        // Traverse the list to find the node to be deleted
        while (temp != nullptr && temp->data != key) {
            temp = temp->next;
        }

        // If the key wasn't found
        if (temp == nullptr) {
            cout << "Node with value " << key << " not found!" << endl;
            return;
        }

        // Unlink the node from the list
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }

        delete temp;
    }

    // Traverse the list from the head to the tail (Forward Traversal)
    void printForward() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Traverse the list from the tail to the head (Backward Traversal)
    void printBackward() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        // Go to the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Traverse backward
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
	
	
    DoublyLinkedList list;
    int data;
    int op;
    cout<<"Operation List"<<endl;
    cout<<"1.Insert data At End "<<endl;
    cout<<"2.Insert data At Begain "<<endl;
    cout<<"3.Insert data At  "<<endl;
    cout<<"4.Insert data At End "<<endl;
    cout<<"5.Insert data At End "<<endl;
    cout<<"0.Exit"<<endl;
    
    cout<<"Enter option"<<endl;
    cin>>op;
    switch(op)
    {
    	case 1:
    	cout<<"Enter data u want to insert :";
    	cin>>data;
    	list.insertEnd(data);
    	break;
    	default:
    		cout<<"Invalid Option "<<endl;
    		break;
    		
    	
	}

    // Insert nodes at the end
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertBegin(44);
    list.insertBegin(55);
    list.insertBegin(100);

    cout << "List (Forward Traversal): ";
    list.printForward();

    cout << "List (Backward Traversal): ";
    list.printBackward();

    // Deleting a node with value 20
    cout<<"Enter data u want to delete :";
    cin>>data;
    list.deleteNode(data);
    cout << "After deleting node with value :"<<data<< endl;
    
    cout << "List (Forward Traversal): ";
    list.printForward();

    // Trying to delete a non-existing node
    list.deleteNode(55);
    cout<<"After deleting node with value 55:" << endl;
    
    cout << "List (Forward Traversal): ";
    list.printForward();


    return 0;
}
