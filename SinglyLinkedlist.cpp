#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;

    // Constructor for easy node creation
    Node(int value) : data(value), next(nullptr) {}
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the list
    SinglyLinkedList() : head(nullptr) {}

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete by value
    void deleteByValue(int value) {
        if (head == nullptr) return;

        // If head node holds the value to be deleted
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Traverse to find the node to delete
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr && current->data != value) {
            previous = current;
            current = current->next;
        }

        // If node with value found, unlink it
        if (current != nullptr) {
            previous->next = current->next;
            delete current;
        }
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free up memory
    ~SinglyLinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function to demonstrate linked list
int main() {
    SinglyLinkedList list;

    list.insertAtBeginning(33);
    list.insertAtBeginning(11);
    list.insertAtEnd(44);
    list.insertAtEnd(35);

    cout << "Linked List: ";
    list.display();

    list.deleteByValue(11);
    cout << "After deleting 1: ";
    list.display();

    list.deleteByValue(35);
    cout << "After deleting 5: ";
    list.display();

    return 0;
}
